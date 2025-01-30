import React from 'react';
import ReactDOM from 'react-dom/client';
import './styles/index.scss';

import Study from './pages/Study';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <Study />
  </React.StrictMode>
);

