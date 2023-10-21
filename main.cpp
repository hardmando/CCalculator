#include <iostream>

class Calculator {
public:
    float add (float a, float b) {
        return a + b;
    }
    float subtract (float a, float b) {
        return a - b;
    }
    float multiply (float a, float b) {
        return a * b;
    }
    float divide (float a, float b) {
        return a / b;
    }
};

int main(){
    Calculator calc;

    float a, b;
    int operatorOption;
    std::cout << "Enter a:" << std::endl;
    std::cin >> a;
    std::cout << "Enter b:" << std::endl;
    std::cin >> b;

    std::cout << "Choose operation: " << std::endl << "1. Add" << std::endl << "2. Subtract" << std::endl <<
    "3. Multiply" << std::endl << "4. Divide" << std::endl;
    std::cin >> operatorOption;

    switch(operatorOption) {
        case 1:
            std::cout << a << " + " << b << " = " << calc.add(a,b);
            break;
        case 2:
            std::cout << a << " - " << b << " = " << calc.subtract(a,b);
            break;
        case 3:
            std::cout << a << " * " << b << " = " << calc.multiply(a,b);
            break;
        case 4:
            std::cout << a << " / " << b << " = " << calc.divide(a,b);
            break;
        default:
            std::cout << "No such option!";
    }

    return 0;
}