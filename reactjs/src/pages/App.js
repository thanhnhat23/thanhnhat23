import React from 'react';
import './App.scss';
import { Button, notification } from 'antd';
import logo from '../assets/logo.svg';
import { 
  ArrowRightOutlined,
  ArrowLeftOutlined,
  UserOutlined,
  MailOutlined,
  SendOutlined,
  GithubOutlined,
  GoogleOutlined,
  LinkedinOutlined
} from '@ant-design/icons';

class App extends React.Component {
  state = {
    signup: {
      name: '',
      fname: '',
      lname: '',
      email: '',
      password: '',
      rePassword: ''
    },
    signin: {
      uname: '',
      pass: ''
    }
  };

  handleFocus = (event) => {
    const label = event.target.previousElementSibling;
    if (label) {
        label.classList.add('active');
    }
  };

  handleBlur = (event) => {
    const value = event.target.value;
    const label = event.target.previousElementSibling;
    if (label && value === '') {
      label.classList.remove('active');
    }
  };
  handleInputChange = (event, formType) => {
    const { name, value } = event.target;
    const label = event.target.previousElementSibling;
    if (label) {
      if (value !== '') {
        label.classList.add('active');
      } else {
        label.classList.remove('active');
      }
    }
    this.setState({
      [formType]: {
        ...this.state[formType],
        [name]: value,
      }
    });
  };

  handleSubmit = () => {
    this.openNotification('topRight');
  };

  handleSignup = () => {
    document.querySelector('.sign-up').classList.add('active-sign');
    document.querySelector('.sign-in').classList.add('unactive-sign');
    document.querySelector('.container').style.animation = 'changeForm 0.2s ease forwards';
  };

  handleSignin = () => {
    document.querySelector('.sign-up').classList.remove('active-sign');
    document.querySelector('.sign-in').classList.remove('unactive-sign');
    document.querySelector('.container').style.animation = 'changeForm 0.2s ease reverse forwards';
  };

  openNotification = (placement) => {
    notification.info({
      message: 'Complete',
      description: 'Successfully submitted!',
      placement,
    });
  };

  render() {

    const { name, fname, lname, email, password, rePassword } = this.state.signup;
    const { uname, pass } = this.state.signin;

    return (
      <div className='App'>
        <div className='container'></div>
        <form className='sign-in'>
          <img src={logo} className="App-logo" alt="logo" />
          <h1>Login <br/> account<code style={{color: '#0073cf'}}>.</code> </h1>
          <br/>
          <div className='form-group'>
            <label htmlFor="uname" className='info'>User name </label>
            <input 
              type="text" 
              value={uname} 
              name='uname'
              onChange={(event) => this.handleInputChange(event, 'signin')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
            <UserOutlined className='icon'/>
          </div>
          <br/>
          <div className='form-group'>
            <label htmlFor="pass" className='info'>Password </label>
            <input 
              type="password"  
              value={pass} 
              name='pass'
              onChange={(event) => this.handleInputChange(event, 'signin')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
          </div>
          <br/>
          <div className="form-group">
            <div className="checkbox">
              <label className='remember'>Remember me</label>
              <input type="checkbox" /> 
            </div>  
            <Button 
              type="primary" 
              onClick={this.handleSubmit} 
              className="submit-button-2"
            >
              LOGIN <SendOutlined />
            </Button>
            <Button 
              color="primary" 
              variant="solid" 
              className='btn-sign-in'
              onClick={this.handleSignup}
            >
              Sign in <ArrowRightOutlined />
            </Button>
          </div>
          <div className='form-group'>
            <div className="or">
              <hr/>
                <p> Or </p>
              <hr/>
            </div>
            <div className='social-media'> 
              <a href='https://github.com' target='_blank' rel='noopener noreferrer'>
                <GithubOutlined />
              </a>
              <a href='https://github.com' target='_blank' rel='noopener noreferrer'>
                <GoogleOutlined />
              </a>
              <a href='https://github.com' target='_blank' rel='noopener noreferrer'>
                <LinkedinOutlined />
              </a>
            </div>
          </div> 
          <br/>
        </form>

        <form className='sign-up'>
          <img src={logo} className="App-logo" alt="logo" />
          <h1>Create <br/> new account<code style={{color: '#0073cf '}}>.</code> </h1>
          <br/>
          <div className='form-group'>
            <label htmlFor="name" className='info'>User name </label>
            <input 
              type="text" 
              value={name} 
              name='name'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
            <UserOutlined className='icon'/>
          </div>
          <br/>
          <div className='form-group-2'>
            <label htmlFor="fname" className='info'>First name </label>
            <input 
              type="text" 
              value={fname} 
              name='fname'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />

            <label htmlFor="lname" className='info'>Last name </label>
            <input 
              type="text" 
              value={lname} 
              name='lname'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
          </div>
          <br/>
          <div className='form-group'>
            <label htmlFor="email" className='info'>Email </label>
            <input 
              type="text" 
              value={email} 
              name='email'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
            <MailOutlined className='icon'/>
          </div>
          <br/>
          <div className='form-group'>
            <label htmlFor="password" className='info'>Password </label>
            <input 
              type="password"  
              value={password} 
              name='password'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
          </div>
          <br/>
          <div className='form-group'>
            <label htmlFor="rePassword" className='info'>Confirm password </label>
            <input 
              type="password" 
              value={rePassword} 
              name='rePassword'
              onChange={(event) => this.handleInputChange(event, 'signup')}
              onFocus={this.handleFocus}
              onBlur={this.handleBlur}
              onInput={this.handleInputChange}
            />
          </div>
          <br/>
          <div className="form-group">
            <Button 
              type="primary" 
              onClick={this.handleSubmit} 
              className="submit-button"
            >
              REGISTER <SendOutlined />
            </Button>
            <Button 
              color="primary" 
              variant="solid" 
              className='btn-sign-up'
              onClick={this.handleSignin}
            >
              Sign up <ArrowLeftOutlined />
            </Button>
          </div>
        </form>
      </div>
    );
  }
}

export default App;
