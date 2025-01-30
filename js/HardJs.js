// HTTP Request & Callback & Promise
const callback = (err, data) => {
    console.log("Error: ", err);
    console.log("Data: ", data);
}
function getData(id, myCallback) {
    return new Promise((resolve, reject) => {
        var request = new XMLHttpRequest();
        request.onreadystatechange = function() {
            if (this.readyState === 4 && request.status == 200) {
                document.getElementById("demo").innerHTML = "Get data complete";
                const data = myCallback(undefined, request.responseText);
                resolve(`GET data comple ${id}: `, data);
            }
            if (this.readyState === 4 && request.status !== 200) {
                document.getElementById("demo").innerHTML = "Get data fail";
                reject(`GET data fail ${id}`);
            }
        };
        request.open("GET", `https://jsonplaceholder.typicode.com/todos/${id}`, true);
        request.send();
    })
}
getData(1, callback)
    .then(data => {
        console.log(data)
        return getData(2, callback)
    }).then(data2 => { 
        console.log(data2)
        return getData(3, callback)
    }).then(data3 => { 
        console.log(data3)
    })
    .catch(error => {
        console.log(error)
    })

// Callback
function myCalculator(num) {
    console.log(num);
}
function myNum(num1, num2, myCallback) {
    const sum = num1 + num2;
    myCallback(sum);
}
myNum(1, 2, myCalculator);

// JSON
let json = {
    "name": "Thanh Nhat",
    "age": 18,
    "gender": "male",
    "height": "60kg"
};
let jsonString = JSON.stringify(json);
document.getElementById("result-1").innerHTML = jsonString;
let jsonParse = JSON.parse(jsonString);
document.getElementById("result-2").innerHTML = jsonParse.name + ' ' + jsonParse.age;

// Fetch
fetch("./data.json")
    .then(response => response.json())
    .then(json => console.log('GET data from JSON complete: ', json))
// Async & Await
const getNewdata = async() => {
    try {
        const response = await fetch("./data.json");
        if (!response.ok) { // response.ok tự động kiểm tra status >= 200 và < 300
            throw new Error("Status: " + response.status) // reject
        }
        const data = await response.json();

        // ... Toán tử 3 chấm (copy obj, arr vào obj, arr mới)
        const dataJSON = {
            ...data,
            address: 'Da Nang City'
        }
        const { name, age, address } = dataJSON;

        console.log("Add data to Json complete: ", dataJSON);
        console.log("Data in Json: ", name, age, address);
        return data; // resolve
    } catch(err) {
        console.log("GET data from JSON", err.message);
    }
}
getNewdata().then(data => { 
    if (data) {
        console.log("GET data NAME from JSON complete: ", data.name);
        console.log("GET data AGE from JSON complete: ", data.age);
    } else {
        console.log("Cann't get data or data not found")
    }
})