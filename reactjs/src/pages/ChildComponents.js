import React from 'react';

class ChildComponents extends React.Component {
    render() {
        const { name, language, items } = this.props;
        return (
            <div>
                <h4>Child Components: {name} + {language}</h4>
                <div className='list'>
                    {
                        items.map((item) => {
                            return (
                                <div key={item.id}>
                                    <p>{item.title}: {item.completed}</p>
                                </div>
                            )
                        })
                    }
                </div>
            </div>
        );
    }
}

export default ChildComponents;