let str = React.string;

[@react.component]
let make = () => {
  <div className="column is-one-third">
    <div className="card">
      <div className="card-content">
        <div className="media">
          <div className="media-content">
            <p className="title is-four"> {"Post title" |> str} </p>
            <p className="subtitle is-six"> {"subtitle" |> str} </p>
          </div>
        </div>
        <div className="content">
          {"Lorem ipsum dolor sit amet. Consectetur necessitatibus voluptate voluptates cupiditate excepturi repellat, incidunt dolores at culpa recusandae, exercitationem beatae totam, optio aliquam iste quo autem quos laudantium!"
           |> str}
          <a href="#"> {"#css" |> str} </a>
          <a href="#"> {"#responsive" |> str} </a>
          <div> {"11:09 PM - 1 Jan 2019" |> str} </div>
        </div>
      </div>
    </div>
  </div>;
};