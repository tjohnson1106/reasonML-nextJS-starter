let str = React.string;

[@react.component]
let make = () =>
  <Section title="About" subtitle="This is the about page">
    <p>
      {"The light is your friend. Preserve it. Get tough with it, get strong. We'll put some happy little leaves here and there."
       |> str}
    </p>
  </Section>;
let default = make;