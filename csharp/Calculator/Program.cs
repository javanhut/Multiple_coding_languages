// See https://aka.ms/new-console-template for more information
using System.ComponentModel;
using System.Data;
using System;

public class Calculator{
    public int Add(int a, int b){
        return a + b;
    }
    public int Subtract(int a, int b){
        return a - b;
    }

    public double Divide(int a, int b){
        return a / b; 
    }

    public int Multiply(int a, int b){
        return a * b;
    }

    public int Modulus(int a, int b){
        return a % b;
    }
}

public static class Program {
    static void Main(string[] args) {
        int a, b;
        string opt;
        Calculator calculator = new Calculator();
        Console.WriteLine(@"
Enter the option that you want to do below:
    Add: Enter add
    Subtraction: Enter sub
    Multiplication: Enter mult
    Division: Enter div
    Modulus: Enter mod        
        ");
        opt = Console.ReadLine();
        Console.WriteLine("Enter first integer value: ");
        a = int.Parse(Console.ReadLine());
        Console.WriteLine("Enter second integer value: ");
        b = int.Parse(Console.ReadLine());

        switch (opt) {
            case "add":
                Console.WriteLine($"The addition of {a} and {b} is {calculator.Add(a, b)}");
                break;
            case "sub":
                Console.WriteLine($"The subtraction of {a} and {b} is {calculator.Subtract(a, b)}");
                break;
            case "mult":
                Console.WriteLine($"The multiplication of {a} and {b} is {calculator.Multiply(a, b)}");
                break;
            case "div":
                try {
                    Console.WriteLine($"The division of {a} and {b} is {calculator.Divide(a, b)}");
                } catch (DivideByZeroException ex) {
                    Console.WriteLine(ex.Message);
                }
                break;
            case "mod":
                Console.WriteLine($"The modulus of {a} and {b} is {calculator.Modulus(a, b)}");
                break;
            default:
                Console.WriteLine("Invalid option");
                break;
        }
    }
}