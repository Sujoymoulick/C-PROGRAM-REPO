// normal case of adding two numbers in C

// #include <stdio.h>
// int main()
// {
//   int num1, num2;
//   printf("Enter a number:");
//   scanf("%d", &num1);
//   printf("Enter another number:");
//   scanf("%d", &num2);

//   // Display the inputs

//   printf("The first number is %d ", num1);
//   printf("The second number is %d ", num2);

//   // This
//   // sum = num1 + num2;
//   // or
//   printf("The sum is %d + %d = %d ", num1, num2, num1 + num2);
//   return 0;
// }

#include <stdio.h>
int main()
{
  int num1, num2;                                              // Initialize two numbers
  printf("Enter a number:");                                   // Prompt user for first number
  scanf("%d", &num1);                                          // Read first number from user
  printf("Enter another number:");                             // Prompt user for second number
  scanf("%d", &num2);                                          // Read second number from user
  printf("The sum is %d + %d = %d ", num1, num2, num1 + num2); // Display the sum of the two numbers
  return 0;                                                    // Indicate successful completion
}
