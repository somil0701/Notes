// A function to find LCM for 2 numbers
// LCM(4,6) == 12
// LCM(11,12) == 132
// LCM (10,15) == 30
// LCM (20,30) == 60
// LCM(7,35) == 35
// LCM (4,8) == 8
#include <stdio.h>

int lcmFinder(int num_1, int num_2) {
  int fact;
  if (num_2 % num_1 == 0)
    return num_2;

  else
    for (int i = 1; i <= num_2; i++) {
      if ((num_1 % i == 0) && (num_2 % i == 0))
        fact = i;
    }

  return fact * (num_2 / fact) * (num_1 / fact);
}
int main() {
  int num_1, num_2, output;
  printf("Enter the first number: ");
  scanf("%d", &num_1);

  printf("Enter the second number: ");
  scanf("%d", &num_2);
  output = lcmFinder(num_1, num_2);
  printf("LCM of both numbers will be %d", output);

  return 0;
}