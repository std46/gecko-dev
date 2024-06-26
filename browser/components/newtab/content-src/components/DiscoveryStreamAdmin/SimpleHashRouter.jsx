/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

import React from "react";

export class SimpleHashRouter extends React.PureComponent {
  constructor(props) {
    super(props);
    this.onHashChange = this.onHashChange.bind(this);
    this.state = { hash: globalThis.location.hash };
  }

  onHashChange() {
    this.setState({ hash: globalThis.location.hash });
  }

  componentWillMount() {
    globalThis.addEventListener("hashchange", this.onHashChange);
  }

  componentWillUnmount() {
    globalThis.removeEventListener("hashchange", this.onHashChange);
  }

  render() {
    const [, ...routes] = this.state.hash.split("-");
    return React.cloneElement(this.props.children, {
      location: {
        hash: this.state.hash,
        routes,
      },
    });
  }
}
