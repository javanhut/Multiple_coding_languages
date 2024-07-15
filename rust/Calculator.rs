use std::io;

struct Calculator;

impl Calculator {
    fn add(a: i32, b: i32) -> i32 {
        a + b
    }
    fn sub(a: i32, b: i32) -> i32 {
        a - b
    }
    fn multiply(a: i32, b: i32) -> i32 {
        a * b
    }
    fn divide(a: i32, b: i32) -> i32 {
        a / b
    }
    fn modulus(a: i32, b: i32) -> i32 {
        a % b
    }
}

fn main() {
    let mut x = String::new();
    let mut y = String::new();
    let mut opt = String::new();

    println!("Enter the first variable: ");
    io::stdin()
        .read_line(&mut x)
        .expect("Failed to read line");
    let x: i32 = x.trim().parse().expect("Please type a number!");

    println!("Enter the second variable: ");
    io::stdin()
        .read_line(&mut y)
        .expect("Failed to read line");
    let y: i32 = y.trim().parse().expect("Please type a number!");

    println!("Enter the options from below:\nAdd: Enter add\nSub: Enter sub\nMultiply: Enter mult\nDivide: Enter div\nModulus: Enter mod\nOption:");
    io::stdin()
        .read_line(&mut opt)
        .expect("Failed to read line");
    let opt = opt.trim();

    match opt {
        "add" => println!("The result of adding {} and {} is {}", x, y, Calculator::add(x, y)),
        "sub" => println!("The result of subtracting {} and {} is {}", x, y, Calculator::sub(x, y)),
        "mult" => println!("The result of multiplying {} and {} is {}", x, y, Calculator::multiply(x, y)),
        "div" => println!("The result of dividing {} and {} is {}", x, y, Calculator::divide(x, y)),
        "mod" => println!("The result of modulus {} and {} is {}", x, y, Calculator::modulus(x, y)),
        _ => println!("Invalid option!"),
    }
}