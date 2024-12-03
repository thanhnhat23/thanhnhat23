// Kiểm tra kết quả
console.log("Hello World");

// In ra màn hình
// alert("Hello World");

// Variable
let watashi = "ニャット" // String
let さい = 18 // Number
console.log(watashi,'\n', さい);

// Phân biệt kiểu dấu =
let ex = 10; // => Gán giá trị
let ex2 = '10';
let ex3 = 10;
console.log(ex == ex2); // => So sánh giá trị ( không quan tâm kiểu dữ liệu ) 
// Không nên sài khi làm project thực tế
console.log(ex === ex3); // => So sánh giá trị và kiểu dữ liệu
// ex === ex2 => False

// Phân biệt null, empty, undefined
let undef ; // undefined => Không có giá trị nào
let emp = ''; // {} [] ...  // empty => Rỗng ( Only strings ) => Đã lưu vào bộ nhớ ( mảng BE )
let n = null; // null => Giống empty => Không trỏ đến giá trị bộ nhớ nào 
console.log(undef, emp, n);
// Dễ hình dung thì đây là ảnh minh họa https://i.sstatic.net/T9M2J.png

// Object
let person = {
    firstName: "Thanh", 
    lastName: "Nhat",
    nameTag: "none", 
    age: 18
};
let なまえ = 'nameTag';
person[なまえ] = '野良';
console.log(person.firstName, person.lastName, person['nameTag']);

// Nháy chéo
let text = `Tac dung nhung gi o trong day
thi in ra man hinh se y nhu the ` // Nên sài thay cho "" và ''
console.log(text);

// Lưu ý Strings
let vd1 = 15 + 5 + 'vd' // => 20vd // Kiểu Number
let vd2 = 'vd' + 15 + 5 // => vd155 // Kiểu String
// NOTE: Các dấu " - * / " thì sẽ ép string ( nếu là số, kí tự sẽ NaN ) thành number
let vd3 = 15 - 'vd' // => NaN // Kiểu dữ liệu không tồn tại
let vd4 = 15 * '10' // => 150 // Kiểu number
// NOTE: dùng các methods string thì nên gg không cần nhớ nhiều
console.log(vd1, vd2, vd3, vd4);

// Xác định 1 varriable
let なんさい = `わたしは, ${10 + 8} さいです。`
console.log(なんさい);

// Array
let arr = [ 'HTML', 'CSS', 'JS', 'React', 'Python' ]; // Array
let obj = {}; // Object empty
let ao = [
    { firstName: "Thanh", lastName: "Nhat" },
    { nameTag: "野良", age: 18 }
]
console.log(ao[1].nameTag);

// For loops
for (let i = 0; i < arr.length; i++) {
    console.log("Các loại ngôn ngữ: ", arr[i]);
} // Dùng khi đã biết điều kiện // Dùng xuyên suốt các dự án ~80%

// While loops
let i = 0;
while (i < arr.length) {
    console.log("Ngôn ngữ thường dùng: ", arr[i]);
    i++;
} // Dùng khi chưa biết điều kiện // Thường sài ít trong thực tế ~10%
// While do
let j = 0;
do {
    console.log("Ngôn ngữ Font-end: ", arr[j]);
    j++;
} while (j < arr.length) // Không hay sài trong thực tế do ứng dụng không được nhiều
// NOTE: i++ -> gán -> tăng / ++i -> tăng -> gán
// VD: i = 2; j = ++i; =>  i = 3, j = 3
// VD: i = 2; j = i++; =>  i = 3, j = 2
// Cắm cờ
let flag = false;
let k = 0;
while (!flag) {
    console.log("Flag: ", k);
    k++;
    if ( k === 3 ) flag = true;
}
// Break/Continue
let bre = 0;
let cont = -1;
while (bre < arr.length) {
    if (arr[bre] === 'React') break;
    // Dừng vòng lặp
    console.log("Lang: ", arr[bre]);
    bre++;
}
while (cont < arr.length) {
    cont++;
    if (arr[cont] === 'CSS') {
        console.log("Filter for HTML: ", arr[cont]);
        continue;
        console.log("Sau lệnh continue thì tất cả câu lệnh sau này đều bị bỏ qua");
        console.log(1 + 2 + 'baka');
        // Do vậy phải chú ý câu lệnh trước sau nếu không muốn bị vòng lặp vô hạn.
        /* 
        VD: Nếu để cont++ phía dưới thì sẽ bị vòng lặp vô hạn do cont = 1 và skip cont++ 
        do vậy cont sẽ luôn bằng 1.
        */
    } else if ( cont === 5 ) {
        console.log("Không đặt cont++ dưới này");
    }
}

// Switch case ( If else pro max =D )
switch (new Date().getDay()) { // Hàm tính ngày hôm nay
    case 0:
        console.log("Hôm nay là: Chủ nhật");
        break;
    case 1:
        console.log("Hôm nay là thứ: ", 2);
        break;
    case 2:
        console.log("Hôm nay là thứ: ", 3);
        break;
    case 3:
        console.log("Hôm nay là thứ: ", 4);
        break;
    case 4:
        console.log("Hôm nay là thứ: ", 5);
        break;
    case 5:
        console.log("Hôm nay là thứ: ", 6);
        break;
    case 6:
        console.log("Hôm nay là thứ: ", 7);
        break;
} 
// Trong thực tế dùng nhiều trong reduce:
// switch (action?) {
//     case action.1:
//         return {
//             // Code return
//         }
//     case action.2:
//     case action.3: // case dạng thác nước
//         return {
//             // Code return
//         }
//     default:
//         return {
//             // Code return
//         }
// } 

//---------------------------------------OOPS----------------------------------------------------//

