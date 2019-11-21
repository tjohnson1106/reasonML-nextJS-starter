[@react.component]
let make = (~title: string, ~subtitle: string=?, ~children: React.element=?) => {
  <section>
    <div className="container">
      <h1 className="title"> {React.string(title)} </h1>
      <h2 className="subtitle"> {React.string(subtitle)} children </h2>
    </div>
  </section>;
};