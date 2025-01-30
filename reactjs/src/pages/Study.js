import React from 'react';
import data from '../config/data.json';
import logo from '../assets/logo.svg';  
import './Study.scss';
import ChildComponents from './ChildComponents';

class Study extends React.Component {
    state = {
        name: data.name,
        language: data.language,
        items : [
            {
                userId: 1,
                id: 1,
                title: "ReactJs",
                completed: "false"
            },
            {
                userId: 1,
                id: 2,
                title: "JS",
                completed: "true"
            },
            {
                userId: 2,
                id: 1,
                title: "HTML + SASS",
                completed: "true"
            }
        ]
    }; 

    handleOnChangeYourName = (event) => {
        this.setState({
            yourname: event.target.value
        });
    }

    handeOnClick = () => {
        document.getElementById("demo").innerHTML = "Add element complete";
    }
    render() {
        return (
            <>    
                <div className="App">
                    <header className="App-header">
                        <img src={logo} className="App-logo" alt="logo" />
                        <p>  Hello ReactJS </p>
                        <a className="App-link" href="https://reactjs.org" target="_blank" rel="noopener noreferrer" >
                            Learn React
                        </a>

                        <div>
                            <h1>Study {this.state.name}</h1>
                            <h3>with {this.state.language}</h3>
                        </div>
                        <div>
                            <p>Your name is: {this.state.yourname} </p>
                            <input 
                                value={this.state.color} 
                                type="text" 
                                placeholder="Your name is ..."
                                onChange = {(event) => this.handleOnChangeYourName(event)} 
                            />
                        </div>
                        <div>
                            <button onClick={ () => this.handeOnClick() }>Click me</button>
                            <div id="demo"></div>
                        </div>
                        <ChildComponents 
                            name={this.state.yourname} 
                            language={this.state.language}
                            items={this.state.items}
                        />
                    </header>
                </div>
            </>
        );
    }
}   

export default Study;