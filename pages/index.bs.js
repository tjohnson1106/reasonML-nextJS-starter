// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Hero$ReNext from "../src/components/layout/layout/Hero.bs.js";
import * as Posts$ReNext from "./posts.bs.js";

function Index(Props) {
  return React.createElement(React.Fragment, undefined, React.createElement(Hero$ReNext.make, {
                  title: "BF Blog",
                  subTitle: "A ReasonML blog"
                }), React.createElement(Posts$ReNext.make, { }));
}

var make = Index;

var $$default = Index;

export {
  make ,
  $$default ,
  $$default as default,
  
}
/* react Not a pure module */
