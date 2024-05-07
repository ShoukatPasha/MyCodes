

function experiment2_1() {
    var myString = "Hello, world!";
    var myNumber = 42;
    var myBoolean = true;
    var myArray = [1, 2, 3, 4, 5];
    var myObject = {name: "John", age: 30};

    var additionResult = 10 + 20;
    var subtractionResult = 30 - 10;
    var multiplicationResult = 5 * 6;
    var divisionResult = 50 / 10;
    var moduloResult = 10 % 3;

    var firstName = "John";
    var lastName = "Doe";
    var fullName = firstName + " " + lastName;

    var output = "String: " + myString + "<br>" +
                 "Number: " + myNumber + "<br>" +
                 "Boolean: " + myBoolean + "<br>" +
                 "Array: " + myArray + "<br>" +
                 "Object: " + JSON.stringify(myObject) + "<br>" +
                 "Addition Result: " + additionResult + "<br>" +
                 "Subtraction Result: " + subtractionResult + "<br>" +
                 "Multiplication Result: " + multiplicationResult + "<br>" +
                 "Division Result: " + divisionResult + "<br>" +
                 "Modulo Result: " + moduloResult + "<br>" +
                 "Full Name: " + fullName;

    document.getElementById('output').innerHTML = output;
}

function experiment2_2() {
    

let x = 10;
if (x > 5) {
    console.log("x is greater than 5");
} else {
    console.log("x is not greater than 5");
}

for (let i = 0; i < 5; i++) {
    console.log(i);
}

let fruits = ["apple", "banana", "cherry"];
for (let fruit of fruits) {
    console.log(fruit);
}

let count = 0;
while (count < 5) {
    console.log(count);
    count++;
}

let day = "Monday";
switch (day) {
    case "Monday":
        console.log("It's Monday!");
        break;
    case "Tuesday":
        console.log("It's Tuesday!");
        break;
    case "Wednesday":
        console.log("It's Wednesday!");
        break;
    default:
        console.log("It's another day of the week.");
}

}
