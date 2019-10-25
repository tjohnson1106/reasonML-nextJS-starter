open NavbarStyles;

[@react.component]
let make = () => {
  <div className="hero-head">
    <nav id="topnav" className=topnavStyles>
      <div className="container">
        <div className=navbarBrand>
          <Next.Link href="/">
            /* classname changed from "subtitle" to subtitle to access NavbarSty */

              <a className=subtitle>
                {ReasonReact.string("Bracket Factory")}
              </a>
            </Next.Link>
          <span className=navbarBurger> <span /> <span /> <span /> </span>
        </div>
        <div id="navbarMenu" className=navbarMenu>
          <div className="navbar-end">
            <div className=navvbarItem>
              <Next.Link href="/about">
                <a> {ReasonReact.string("About")} </a>
              </Next.Link>
            </div>
            <div className=navvbarItem>
              <Next.Link href="/about">
                <a> {ReasonReact.string("Contact")} </a>
              </Next.Link>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </div>;
};