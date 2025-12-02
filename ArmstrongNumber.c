//Armstrong Number

#include <stdio.h>
#include <math.h>

int main() {
//take a input value
    printf("Enter a 2 or more digits number to check if it a Armstrong Number or not. \nEnter the number here: ");
    int a;
    scanf("%d", &a);
    int c = a;
    int d = c;
    int x = 0;
    int y;
    int e;
//count the digits
    int i = 0;
    while (a > 0) {
        a = a/10;
        i++;
    }

//doing the main part of investigating

    int p = 0;
    while (c > 0) {
        y = c%10;
        e = pow(y, i);
        x = x+e;
        c = c/10;
        p++;
    }

    // printf("%d", x);

    //Now checks the number wheather it is Armstrong or not

    if(x == d) {
        printf("The given number is Armstrong Number");
    } else {
        printf("The number isn't a Armstrong Number");
    }


    return 0;
}