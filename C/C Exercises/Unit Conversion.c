#include <stdio.h>

int main() {
  // Declaration of Variables
  int user_input;
  float km, inches, cms, pound;

  // Main Code Starts Here
  printf("This is a Unit Conversion Calculator \n");

  // Taking Input From USER

  here:
  
  printf("\nEnter 1 to Convert Km to Miles\n");
  printf("Enter 2 to Convert Inches to Foots\n");
  printf("Enter 3 to Convert Cms to Inches\n");
  printf("Enter 4 to Convert Pound to Kgs\n");
  printf("Enter 5 to Convert Inches to Meters\n");
  printf("Enter 0 to Exit the Calculator\n");

  scanf("%d", &user_input);

  do {
    if (user_input == 1) {
      printf("Enter __ Kms:  ");
      scanf("%f", &km);
      printf("%f Km is equal to %f Miles\n", km, km * 0.6213);

      printf("Do you want to Continue?\n");
      printf("Press 0 for Yes or 1 for No: ");

      scanf("%d", &user_input);
      if (user_input == 0){
        goto here;
      }
      else
        break;
    }

    if (user_input == 2) {
      printf("Enter __ Inches:  ");
      scanf("%f", &inches);
      printf("%f Inches is equal to %f Foots\n", inches, inches * 0.0833);

      printf("Do you want to Continue?\n");
      printf("Press 0 for Yes or 1 for No: ");

      scanf("%d", &user_input);
      if (user_input == 0){
        goto here;
      }
      else
        break;
    }

    if (user_input == 3) {
      printf("Enter __ Cm:  ");
      scanf("%f", &cms);
      printf("%f Cm is equal to %f Inches\n", cms, cms * 0.393701);

      printf("Do you want to Continue?\n");
      printf("Press 0 for Yes or 1 for No: ");

      scanf("%d", &user_input);
      if (user_input == 0){
        goto here;
      }
      else
        break;
    }

    if (user_input == 4) {
      printf("Enter __ Pounds:  ");
      scanf("%f", &pound);
      printf("%f Pounds is equal to %f Kgs\n", pound, pound * 0.453592);

      printf("Do you want to Continue?\n");
      printf("Press 0 for Yes or 1 for No: ");

      scanf("%d", &user_input);
      if (user_input == 0){
        goto here;
      }
      else
        break;
    }

    if (user_input == 5) {
      printf("Enter __ Inches:  ");
      scanf("%f", &inches);
      printf("%f Inches is equal to %f Meters\n", inches, inches * 0.0254);

      printf("Do you want to Continue?\n");
      printf("Press 0 for Yes or 1 for No: ");

      scanf("%d", &user_input);
      if (user_input == 0){
        goto here;
      }
      else
        break;
    }
  }
  while(1);
}