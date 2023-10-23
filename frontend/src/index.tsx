import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';

import { ApolloClient, InMemoryCache, ApolloProvider, gql } from '@apollo/client';

const root = ReactDOM.createRoot(
  document.getElementById('root') as HTMLElement
);

const client = new ApolloClient({
  uri: 'http://0.0.0.0:3000/graphiql',
  cache: new InMemoryCache(),
});


root.render(
  <ApolloProvider client={client}>
    <App />
  </ApolloProvider>
);