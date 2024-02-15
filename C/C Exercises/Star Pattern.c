#include <stdio.h>
int main() {
  // Declaring Variables
  int user_input1, user_input2;

  // Taking User Input
  printf("Type '0' for Triangular Star Pattern\n");
  printf("Type '1' for Reversed Triangular Star Pattern\n");

  scanf("%d", &user_input1);

  printf("Enter the limit for star pattern you want to be printed: ");

  scanf("%d", &user_input2);

  // Main
  if (user_input1 == 0) {
    for (int i = 0; i < user_input2; i++) {
      for (int j = 0; j <= i; j++) {
        printf("%c", '*');
      }
      printf("\n");
    }
  }

  else if(user_input1 == 1){
    for (int i = 0; i < user_input2; i++) {
      for (int j = 0; j < (user_input2-i); j++) {
        printf("%c", '*');
      }
      printf("\n");
    }
  }

  else
    printf("Invalid Input");

  return 0;
}
