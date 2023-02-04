#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // 1. Declare 4 variables: two of type int and two of type float
	int int_num1, int_num2;
    float float_num1, float_num2;

    // 2. Read 2 lines of input from stdin and initialize your 4 variables
    scanf("%d %d", &int_num1, &int_num2);
    scanf("%f %f", &float_num1, &float_num2);

    // 3. Use the + and - operator and print the result
    printf("%d %d\n", int_num1 + int_num2, int_num1 - int_num2);
    printf("%.1f %.1f", float_num1 + float_num2, float_num1 - float_num2);

    return 0;
}