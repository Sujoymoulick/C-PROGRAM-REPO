// Print multiplication table of any number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i;
  printf("Enter a number to print it's multipilation table:");
  scanf("%d", &num);

  // logic
  for (i = 1; i <= 10; i++)
  {
    printf("%d X %d = %d", num, i, num * i);
    printf("\n");
  }
}

// Control Structures in C Programming

// Control structures determine the flow of execution of a program. They allow conditional execution, looping, and flow control, making programs smarter and more efficient. In C, these structures are mainly divided into:

// Sequential control structure

// Selection (decision-making) control structure

// Iteration (looping) control structure

// Jump statements

// ​

// 1. Selection (Decision-Making) Statements
// These are used when a programmer wants to execute certain parts of a program depending on specific conditions.

// a) if Statement
// The if statement executes a block of code only when a given condition is true.

// Syntax:

// c
// if (condition) {
//    // statements to execute if condition is true
// }
// Example:

// c
// int x = 5;
// if (x > 0) {
//    printf("Positive number");
// }
// If the condition inside parentheses evaluates as true, the statements inside the braces are executed.

// ​

// b) if-else Statement
// The if-else structure allows two-way decision making — one block executes when the condition is true, another when false.

// Syntax:

// c
// if (condition) {
//    // true block
// } else {
//    // false block
// }
// Example:

// c
// int marks = 45;
// if (marks >= 50)
//    printf("Pass");
// else
//    printf("Fail");
// This is frequently used in grading systems, validation checks, and business logic.​

// c) Nested if Statement
// An if statement placed inside another if or else block is called a nested if. It is useful for checking multiple dependent conditions.

// Example:

// c
// int a = 10, b = 20, c = 30;

// if (a > b) {
//    if (a > c)
//        printf("a is greatest");
//    else
//        printf("c is greatest");
// } else {
//    if (b > c)
//        printf("b is greatest");
//    else
//        printf("c is greatest");
// }
// d) if-else-if Ladder
// This structure is used when multiple conditions need to be tested sequentially.

// Example:

// c
// int marks = 75;

// if (marks >= 90)
//    printf("A Grade");
// else if (marks >= 75)
//    printf("B Grade");
// else if (marks >= 60)
//    printf("C Grade");
// else
//    printf("Fail");
// The first true condition’s block executes, and all others are skipped.​

// 2. Iteration (Looping) Statements
// Loops allow code to be executed repeatedly, either a known or unknown number of times.

// a) for Loop
// Used when the number of iterations is known in advance.

// Syntax:

// c
// for (initialization; condition; increment/decrement) {
//    // body of loop
// }
// Example:

// c
// for (int i = 1; i <= 5; i++) {
//    printf("%d ", i);
// }
// This executes the loop body 5 times (from 1 to 5).​

// b) while Loop
// Used when the number of iterations is unknown and depends on a condition.

// Syntax:

// c
// while (condition) {
//    // body of loop
// }
// Example:

// c
// int i = 1;
// while (i <= 5) {
//    printf("%d ", i);
//    i++;
// }
// while checks the condition before entering the loop body each time.​

// c) do-while Loop
// Ensures the loop body executes at least once, as the condition is checked at the end.

// Syntax:

// c
// do {
//    // body of loop
// } while (condition);
// Example:

// c
// int i = 1;
// do {
//    printf("%d ", i);
//    i++;
// } while (i <= 5);
// Even if the condition becomes false at the start, the loop executes once.​

// 3. Jump Statements
// These alter the normal sequence of execution of a program.

// a) break Statement
// Used to terminate the loop or switch block immediately when encountered.

// Example:

// c
// for (int i = 1; i <= 10; i++) {
//    if (i == 5)
//        break;
//    printf("%d ", i);
// }
// The loop stops as soon as i == 5.​

// b) continue Statement
// Used to skip the current iteration and continue with the next one.

// Example:

// c
// for (int i = 1; i <= 10; i++) {
//    if (i == 5)
//        continue;
//    printf("%d ", i);
// }
// When i == 5, the printf statement is skipped, and the next iteration begins.​

// Key Difference between break and continue
// Feature	break	continue
// Function	Terminates the loop	Skips current iteration
// Execution after use	Exits loop immediately	Moves to next iteration
// Common use	Exit early	Skip a condition case
// ​

// 4. Best Practices for Using Control Structures
// Always use curly braces {} even for single-line statements to improve readability and prevent logical errors.

// Use meaningful indentation and comments to clarify intention.

// Avoid deep nesting of loops or if-statements by breaking code into separate functions.

// Implement testing and debugging for all control flow paths to ensure correctness.

// Keep logic clean, simple, and modular for better maintainability.​

// Conclusion
// // Control structures form the foundation of program logic in C.

// By mastering conditional and looping constructs such as if-else, for, while,
// and jump statements like break and continue, developers can efficiently handle decision-making,
//  repetition, and dynamic flow control in their programs.​