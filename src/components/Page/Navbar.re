[@react.component]
let make = () => {
  <div className="hero-head">
    <nav id="topnav" className="navbar main-title">
      <div className="container">
        <div className="navbar-brand">
          <Next.Link href="/">
            <a className="subtitle">
              {ReasonReact.string("Bracket Factorty")}
            </a>
          </Next.Link>
          <span className="navbar-burger burger">
            <span />
            <span />
            <span />
          </span>
        </div>
        <div id="navbarMenu" className="navbar-menu">
           {} </div>
          /* TODO!: Pick up here work on navbar-menu/about section 102420191648*/
      </div>
    </nav>
  </div>;
};