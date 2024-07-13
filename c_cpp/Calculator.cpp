#include "Calculator.h"
#include <stdexcept>

int Calculator::add(int a, int b){ return a + b;}
int Calculator::sub(int a, int b){ return a - b;}
int Calculator::multiply(int a, int b){return a * b;}
double Calculator::divide(int a, int b){if(b != 0){return static_cast<double>(a) /b;}else{ throw std::invalid_argument("Division by 0");}}
int Calculator::modulus(int a, int b){if(b != 0){return a % b;}else{ std::invalid_argument("Division by 0");}}