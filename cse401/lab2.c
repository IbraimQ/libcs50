
#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("Please Input three Numbers: "); // to display message on screen
    scanf("%d %d %d", &a, &b, &c); // to read input from keyboard

    if(a > b && a > c) // use of if-else-if statement and logical operators
        max = a;
    else if(b > a && b > c)
        max = b;
    else
        max = c;

    printf("\nThe maximum of %d, %d, %d is = %d\n", a, b, c, max); // to display output

    return 0;
}
