open NavbarStyles;

type state = {menuIsActive: bool};

type action =
  | ToggleMenu;

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | ToggleMenu => {menuIsActive: !state.menuIsActive}
        },
      {menuIsActive: false},
    );

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
          <span
            className={navbarBurger(state.menuIsActive)}
            onClick={_event => dispatch(ToggleMenu)}>
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className={navbarMenu(state.menuIsActive)}>
          <div className="navbar-end">
            <div className=navbarItem>
              <Next.Link href="/about">
                <a> {ReasonReact.string("About")} </a>
              </Next.Link>
            </div>
            <div className=navbarItem>
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