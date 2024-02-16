#include <iostream>
#include "functions.h"

int main(){
    float result{};

    std::cout<< "Bhelcome to my Calculator" << std::endl;
    std::cout<< "Enter the phirst number: " << std::endl;
    float first_num {userInputNum()};
    std::cout << "Enter the sicand number: " << std::endl;
    float second_num {userInputNum()};
    std::cout << "Enter the opiration: " << std::endl;
    char op {userInput()};

    if (op == '+'){
        result = add(first_num, second_num);
    }
    else if (op == '-'){
        result = subtract(first_num, second_num);
    }
    else if (op == '*'){
        result = multiply(first_num, second_num);
    }
    else if (op == '/'){
        result = divide(first_num, second_num);
    }
    else{
        std::cout<< "Inbhelid Operator" << std::endl;
    }
    
    std::cout << "The result is: " << result << std::endl;

    return 0;
}