open Css;

let subtitle =
  merge([
    style([
      color(rgba(255, 255, 255, 0.7)),
      fontWeight(bold),
      marginTop(px(13)),
      marginLeft(px(10)),
      important(marginBottom(px(0))),
    ]),
    "subtitle",
  ]);