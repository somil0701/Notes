#include<stdio.h>

int main(){
    int user_input, original_number;
    int num_of_digits = 0;
    int sum = 0;
    int index = 1;
    int digits[100];

    printf("Enter the number: ");
    scanf("%d", &user_input);

    original_number = user_input;

    while(index){
        digits[num_of_digits] = user_input%10;
        user_input = (user_input - (user_input%10))/10;
        num_of_digits+=1;
        if (user_input<=0)
            index = 0;
    }

    for (int i = 0; i < num_of_digits; i++){
        sum = sum + (digits[i]*digits[i]*digits[i]);
    }

    if (sum == original_number){
        printf("The given number is an armstrong number.\n");
    }
    else{
        printf("The given number is not an armstrong number.\n");
        printf("%d\n", sum);
    }

    return 0;
}