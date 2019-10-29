let str = React.string;

[@react.component]
let make = () =>
  <Section title="Contact" subtitle="This is the contact page">
    <p>
      {"I'm a water fanatic. I love water. Follow the lay of the land. It's most important. No worries. No cares. Just float and wait for the wind to blow you around."
       |> str}
    </p>
  </Section>;
let default = make;