const prompt = require("prompt-sync")();

class Calculator {
    constructor() { }

    add(a, b) {
        return a + b;
    }

    sub(a, b) {
        return a - b;
    }

    multiply(a, b) {
        return a * b;
    }

    divide(a, b) {
        if (b !== 0) {
            return a / b;
        } else {
            throw new Error("Not divisible by 0");
        }
    }

    modulus(a, b) {
        if (b !== 0) {
            return a % b;
        } else {
            throw new Error("Not divisible by 0");
        }
    }
}

const calc = new Calculator();
var opt = prompt("Enter an option from below:\nAdd: Enter add\nSubtract: Enter sub\nMultiply: Enter mult\nDivide: Enter div\nModulus/Remainder: Enter mod\nOption: ").trim().toLowerCase();
var a = parseInt(prompt("Enter first integer: "));
var b = parseInt(prompt("Enter second integer: "));

if (isNaN(a) || isNaN(b)) {
    console.log("Invalid input. Please enter valid integers.");
} else {
    try {
        let result;
        switch (opt) {
            case 'add':
                result = calc.add(a, b);
                break;
            case 'sub':
                result = calc.sub(a, b);
                break;
            case 'mult':
                result = calc.multiply(a, b);
                break;
            case 'div':
                result = calc.divide(a, b);
                break;
            case 'mod':
                result = calc.modulus(a, b);
                break;
            default:
                console.log("Invalid option. Please refresh and try again.");
                return;
        }

        if (result !== undefined) {
            console.log(`The result of ${opt} operation on ${a} and ${b} is: ${result}`);
        }
    } catch (error) {
        console.log(error.message);
    }
}
