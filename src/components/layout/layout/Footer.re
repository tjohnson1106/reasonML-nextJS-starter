let str = React.string;

module Styles = {
  open Css;

  let footeStyles =
    merge([style([background(rgb(244, 244, 244))]), "footer"]);
};

[@react.component]
let make = () => {
  <footer className="Styles.footerStyles">
    <div className="content has-text-centered" />
    <p> <strong> {"Brac Fac" |> str} </strong> </p>
    {"made with ReasonML and NextJS" |> str}
  </footer>;
};