#include <stdio.h>

void fibonacci(num) {
  long int var_1 = 0;
  long int var_2 = 1;
  long int var_3;
  printf("%ld\n%ld\n", var_1, var_2);
  for (int temp = 0; temp < num-2; temp++) {
    var_3 = var_1 + var_2;
    var_1 = var_2;
    var_2 = var_3;
    printf("%ld\n", var_3);
  }
}

// int fibonacci(num) {
//   if (num == 1) {

//     return 0;
//   }

//   else if (num == 2) {

//     return 1;
//   }

//   else {

//     return (fibonacci(num - 1) + fibonacci(num - 2));
//   }
// }

int main() {
  // Declaring Variables
  int user_input;

  // Taking User Input
  printf("Enter the number of elements in fibonacci series: ");
  scanf("%d", &user_input);

  // for (int temp = 1; temp < user_input+1; temp++)
  //   printf("%d\n", fibonacci(temp));

  fibonacci(user_input);
  

  return 0;
}
