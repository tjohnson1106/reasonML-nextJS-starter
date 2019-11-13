const withPlugins = require("next-compose-plugins");
const withSass = require("@zeit/next-sass");
const withCSS = require("@zeit/next-css");
const withTM = require("next-transpile-modules");

module.exports = withPlugins(
  [
    [withSass, withCSS],
    [
      withTM,
      {
        transpileModules: ["bs-platform", "bs-css", "reason-apollo-hooks"]
      }
    ]
  ],
  // next config
  {
    pageExtensions: ["jsx", "js", "bs.js"],
    resolve: {
      modules: ["sass_loader"],
      cssModules: true
    },
    webpack: (config) => {
      // fixes npm packages that depend on fs module
      config.node = {
        fs: "empty"
      };
      return config;
    }
  }
);
