[%bs.raw {|require("bulma")|}];

[@react.component]
let make = (~children) => {
  <>
    <Next.Head>
      <meta
        name="viewport"
        content="width=device-width, initial-scale=1, shrink-to-fit=no, viewport-fit=cover"
      />
      <title> {React.string("BracFac")} </title>
    </Next.Head>
    children
  </>;
};