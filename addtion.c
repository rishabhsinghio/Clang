#include <stdio.h>

int main(){
 int a;
  printf("Welcome to C programming \n Addition of two numbers \n Enter first number:");
  scanf("%d", &a);

 int b;
  printf("Enter your second number:");
  scanf("%d", &b);

 int c = a + b;
 printf("Yay! Here is your result:");
 printf("%d", c);

return 0;
}