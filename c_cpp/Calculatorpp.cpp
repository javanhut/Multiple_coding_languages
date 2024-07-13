#include <iostream>
#include <unordered_map>
#include <string>
#include "Calculator.h"

using namespace std;


int main(){
    Calculator calculator;
    int a,b;
    unordered_map<string, int> options_map ={
        {"add", 1},
        {"sub", 2},
        {"mult", 3},
        {"div", 4},
        {"mod", 5},
    };

    string option;
    cout << "Enter the first variable: ";
    cin >> a;
    cout << "Enter the second variable: ";
    cin >> b;
    cout << "Enter one of the options below:\nAdd: Enter add\nSubtract:  Enter sub\nMultiply: Enter mult\nDivide: Enter div\nModulus/Remainder: Enter mod\nOption: ";
    cin >> option;
    switch (options_map[option])
    {
    case 1:
        cout << "The addition of "<< a << " and " << b << " is  " << calculator.add(a,b) << endl;
        break;
    case 2:
        cout << "The subtraction of " << a << " and " << b << " is  " << calculator.sub(a,b) << endl;
        break;
    case 3:
        cout << "The multipication of " << a << " and " << b << " is  " << calculator.multiply(a,b) << endl;
        break;
    case 4:
        cout << "The division of " << a << " and " << b << " is  " << calculator.divide(a,b) << endl;
        break;
    case 5:
        cout << "The modulus of " << a << " and " << b << " is  " << calculator.modulus(a,b) << endl;
        break;
    
    default:
        cout << " Invalid option" << endl;
        break;
    }
}