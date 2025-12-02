#include <stdio.h>

int main(){
printf("Find maximum of three numbers.\nEnter your first number: ");
 int a;
 scanf("%d", &a);
 printf("Now enter second number: ");
 int b;
 scanf("%d", &b);
 printf("And final, Enter your third digit: ");
 int c;
 scanf("%d", &c);
 
 if(a > b && a > c){
 printf("A is greater");
 } if(b > a && b > c){
 printf("B is greater");
 } else{
 printf("C is greater");
 }


return 0;
}