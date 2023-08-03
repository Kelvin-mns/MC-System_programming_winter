#include <stdio.h>

// function to swap the two number
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int num1, num2;

    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);

    // displaying number befor swapping
    print("Befor Swapping: num1 is: %d, num2 is %d\n", num1, num2);

    // calling the user defined function swap()
    swap(&num1, &num2);

    // dispiaying number after swapping
    printf("After Swapping: num1 is: %d, num2 is %d\n", num1, num2);

    return 0;
}