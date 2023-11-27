#include<stdio.h>

int main(){
    // Declaration of variables
    int num1_rows, num1_columns, num2_rows, num2_columns, user_input;

    // Printing of Program Statements
    printf("Welcome to the Matrix Multiplyer\n");
    printf("Enter the Rows and Columns for First Matrix......\n");
    
    printf("Number of Rows for Matrix 1: ");
    scanf("%d", &num1_rows);

    printf("Number of Columns for Matrix 1: ");
    scanf("%d", &num1_columns);

    char matrix1[num1_rows][num1_columns];
    
   // Taking Input Elements for First Matrix
   for (int i = 0; i<num1_rows; i++){
        for (int j = 0; j<num1_columns; j++){
            printf("Enter the %d,%dth element of First Matrix: ",i+1,j+1);
            scanf("%d", &user_input);
            matrix1[i][j] = user_input;
        }
   } 

    printf("Enter the Rows and Columns for Second Matrix......\n");

    printf("Number of Rows for Matrix 2: ");
    scanf("%d", &num2_rows);

    printf("Number of Columns for Matrix 2: ");
    scanf("%d", &num2_columns);

    char matrix2[num2_rows][num2_columns];

   // Taking Input Elements for Second Matrix
    for (int i = 0; i<num2_rows; i++){
        for (int j = 0; j<num2_columns; j++){
            printf("Enter the %d,%dth element of Second Matrix: ",i+1,j+1);
            scanf("%d", &user_input);
            matrix2[i][j] = user_input;
        }
   }   

    char new_matrix[num1_rows][num2_columns];
    int limit = num1_rows*num2_columns;

    // Multiplication of both the Matrices
    for (int i = 0; i<num1_rows; i++){
        for (int j = 0; j<num2_columns; j++){
            for (int k = 0; k<num2_rows; k++){
                new_matrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }     

    // Printing the New Matrix
    printf("The Multiplied Matrix will be given as followed: \n");
    for (int i = 0; i<num1_rows; i++){
        for (int j = 0; j<num2_columns; j++){
            printf("%d ", new_matrix[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}