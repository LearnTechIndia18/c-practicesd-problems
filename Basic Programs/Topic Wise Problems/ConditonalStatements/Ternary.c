#include <stdio.h>

int main() {
  int age;

  // take input from users

  scanf("%d", &age);  printf("Enter your age: ");

  // ternary operator to find if a person can vote or not
  (age >= 18) ? printf("You can vote") : printf("You cannot vote");

  return 0;
}