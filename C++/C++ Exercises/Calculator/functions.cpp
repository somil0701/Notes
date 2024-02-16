#include <iostream>

char userInput(){
    char user_input{};
    std::cin >> user_input;    
    return user_input;
}

float userInputNum(){
    float user_input_num{};
    std::cin >> user_input_num;
    return user_input_num;
}

float add(float first_num, float second_num){
    return first_num + second_num; 
}

float subtract(float first_num, float second_num){
    return first_num - second_num;
}

float multiply(float first_num, float second_num){
    return first_num * second_num;
}

float divide(float first_num, float second_num){
    return first_num / second_num;
}
