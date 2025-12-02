//Count digits of a number

#include <stdio.h>

int main(){
printf("Enter number to count digits: ");
int a;
scanf("%d", &a);

int i = 0;
while (a>0){
 a = a/10;
 i++;
}
printf("There are total %d digits in the number.", i);

return 0;
}