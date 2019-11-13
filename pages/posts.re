module ListPostQueryConfig = [%graphql
  {|
query ListPostQuery {
  listPosts {
    items {
      id
    title
    body
    tags
    createdAt
    updatedAt
    author {
      firstName
      lastName
    }
    }

  }}
|}
];

module ListPostQuery = ReasonApolloHooks.Query.Make(ListPostQueryConfig);

let parseDate = (createdAt: option(Js.Json.t)): string => {
  Belt.Option.(
    getWithDefault(createdAt, Js.Json.null)
    /* needs to be decoded into string */
    |> Js.Json.decodeString
    |> getWithDefault(_, "")
  );
};

[@react.component]
let make = () => {
  let (simple, _full) = ListPostQuery.use();

  <Section title="BF Design" subtitle="ReasonML Blog">
    <div className="columns is-multiline">
      /* handling three possible return states */

        {switch (simple) {
         | Loading => <p> {React.string("Loading...")} </p>
         | Data(response) =>
           Belt.Option.(
             response##listPosts
             ->flatMap(listPosts => listPosts##items)
             ->mapWithDefault(React.null, items =>
                 items
                 ->Belt.Array.map(item =>
                     item->mapWithDefault(
                       React.null,
                       item => {
                         let parsedCreatedAt = parseDate(item##createdAt);
                         <Post
                           key=item##title
                           title=item##title
                           body={item##body}
                           tags={item##tags}
                           firstName={item##author##firstName}
                           lastName={item##author##lastName}
                         />;
                       },
                     )
                   )
                 ->React.array
               )
           )
         | NoData
         | Error(_) => <p> {React.string("No posts available!")} </p>
         }}
        <Post />
        <Post />
        <Post />
        <Post />
        <Post />
      </div>
  </Section>;
};