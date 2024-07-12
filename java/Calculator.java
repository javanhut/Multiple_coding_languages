import java.util.Scanner;


public class Calculator {

    public Calculator(){};

    public static int add(int a, int b){
        return a + b;
    }

    public static int subtract(int a, int b){
        return a - b;
    }

    public static int multiply(int a, int b){
        return a * b;
    }

    public static int divide(int a, int b){
        return a / b;
    }

    public static int modulus(int a, int b){
        return a % b;
    }






public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int a,b;
    String option;
    Calculator calculator = new Calculator();

    System.out.print("Enter first integer: ");
    a = scan.nextInt();
    System.out.print("Enter second integer: ");
    b = scan.nextInt();
    System.out.println("Pick an option below:");
    System.out.println("******\t Pick Arthmetic operation\t*******");
    System.out.print("Add: Enter 'add' \nSubtract: Enter 'sub' \nMultiply: Enter 'mult' \nDivide: Enter 'div' \nModulus/Remainder: Enter 'mod' \n");
    System.out.println("******************************************");
    System.err.print("Option: ");
    option = scan.next();

    switch (option) {
        case "mod":
            System.out.print("Modulus of " + a + " and " + b + " is ");
            System.out.print(calculator.modulus(a, b));
            System.out.println();
            break;
        case "add":
            System.out.print("Addition of " + a + " and " + b + " is ");
            System.out.print(calculator.add(a, b));
            System.out.println();
            break;
        case "sub":
            System.out.print("Subtraction of " + a + " and " + b + " is ");
            System.out.print(calculator.subtract(a, b));
            System.out.println();
            break;
        case "mult":
            System.out.print("Subtraction of " + a + " and " + b + " is ");
            System.out.print(calculator.multiply(a, b));
            System.out.println();
            break;
        case "div":
            System.out.print("Subtraction of " + a + " and " + b + " is ");
            System.out.print(calculator.divide(a, b));
            System.out.println();
            break;
        default:
            throw new AssertionError();
    }
}


}
