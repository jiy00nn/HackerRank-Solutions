#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int result = 0;

    result = result + n%10;
    do{
        n = n/10;
        result = result + n%10;
    } while (n >= 10);

    printf("%d", result);

    return 0;
}