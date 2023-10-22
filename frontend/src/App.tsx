import React from 'react';
import logo from './logo.svg';
import './App.css';

import { useQuery, gql } from '@apollo/client';
import Top from './pages/top';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Top />
          Learn React
      </header>
    </div>
  );
}




export default App;
