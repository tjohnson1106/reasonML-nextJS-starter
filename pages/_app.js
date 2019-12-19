import React from "react";
import App from "next/app";
import { ApolloProvider } from "@apollo/react-common";

import { withApollo } from "../src/util/withApollo";

// Why did I comment this out?? I noticed on 120220191949
// Update conerning the Page component issue 120220192030:
//
// importing Reason component into JS
// const Page = require("../src/components/layout/Page.bs").make;

const Page = require("../src/components/layout/layout/Page.bs").make;

class ReNext extends App {
  static async getInitialProps({ Component, ctx }) {
    let pageProps = {};

    if (Component.getInitialProps) {
      pageProps = await Component.getInitialProps(ctx);
    }
    return { ...pageProps };
  }
  render() {
    const { Component, pageProps, apolloClient } = this.props;

    return (
      <ApolloProvider client={apolloClient}>
        <Page>
          <Component {...pageProps} />
        </Page>
      </ApolloProvider>
    );
  }
}

export default withApollo(ReNext);
