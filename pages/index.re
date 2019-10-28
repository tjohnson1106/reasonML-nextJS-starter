let str = React.string;

[@react.component]
let make = () =>
  <Section
    title="Bracket Factory"
    subtitle="Bracket Factory Blog built with ReasonML and NextJS">
    <p>
      {"A tree needs to be your friend if you're going to paint him. And I know you're saying, 'Oh Bob, you've done it this time.' And you may be right."
       |> str}
    </p>
    <p>
      {"You need the dark in order to show the light. Maybe there's a happy little waterfall happening over here. Now we don't want him to get lonely, so we'll give him a little friend. That easy."
       |> str}
    </p>
  </Section>;

let default = make;