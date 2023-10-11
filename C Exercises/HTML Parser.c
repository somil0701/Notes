#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// <h1> This is a heading tag </h1>

void parser(char Statement[], int length){
    int status = true;
    for (int i = 0; i < length; i++)
    {
        if (Statement[i] == '<')
        {
            status = false;
        }
        
        else if (Statement[i] == '>')
        {
            status = true;
        }

        else if (status == true)
        {
            printf("%c",Statement[i]);
        }
        
    }
    
    
    
}

int main()
{
    char user_input[40];
    int user_input_length;

    printf("Enter the statement: ");
    fgets(user_input, user_input_length, stdin);

    user_input_length = strlen(user_input);

    printf("The statement before parsing is: %s\n", user_input);

    printf("The statement after parsing is: ");
    parser(user_input, user_input_length);


    return 0;
}