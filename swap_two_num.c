// // swap using third variable
// #include <stdio.h>
// int main()
// {
//   int a, b, temp;
//   printf("Enter two numbers:");
//   scanf("%d %d", &a, &b);
//   temp = a;
//   a = b;
//   b = temp;
//   printf("After Swapping: a = %d b = %d", a, b);
//   return 0;
// }

// swap without using third variable
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);
  a = a + b; // a now becomes 30
  b = a - b; // b becomes 10
  a = a - b; // a becomes 20
  printf("After Swapping: a = %d b = %d", a, b);
  return 0;
}

// another method
// #include <stdio.h>
// int main()
// {  
//   int a, b;
//   printf("Enter two numbers:");
//   scanf("%d %d", &a, &b);
//   a = a ^ b; // a now becomes 30 (11110)
//   b = a ^ b; // b becomes 10 (01010)
//   a = a ^ b; // a becomes 20 (10100)
//   printf("After Swapping: a = %d b = %d", a, b);
//   return 0;
// }
