let str = React.string;

open Css;

let heroStyles =
  merge([
    style([
      backgroundImage(url("/static/images/heroBackground.jpg")),
      backgroundPosition(pct(50.), pct(50.)),
      backgroundRepeat(noRepeat),
      backgroundSize(cover),
      color(rgb(242, 242, 2242)),
    ]),
    "hero",
    "is-medium",
  ]);

let titleStyles = merge([style([color(rgb(242, 242, 242))]), "title"]);

let subTitleStyles =
  merge([style([color(rgb(242, 242, 242))]), "subTitle"]);

[@react.component]
let make = (~title: string=?, ~subTitle: string=?) => {
  <section className=heroStyles>
    <div className="hero-body">
      <div className="container">
        <h1 className="titleStyles"> {title |> str} </h1>
        <h2 className="subTitleStyles"> {subTitle |> str} </h2>
      </div>
    </div>
  </section>;
};