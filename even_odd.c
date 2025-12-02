#include <stdio.h>

int main() {
 printf("Check your number is Even or Odd \n Enter your number here: ");
 int d;
 scanf("%d", &d);
 int q = d/2;
 //divisor = 2; 
 int p = q*2;
 int r = d - p;
 
// printf("%d", r);

 if(r <= 0){
 printf("Thats a Even Number");
 } else{
 printf("This is Odd");
 }

    return 0;
}