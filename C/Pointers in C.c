#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int num_a = *a, num_b = *b;

    *a = num_a + num_b;

    if (num_a > num_b)
        *b = num_a - num_b;
    else
        *b = num_b - num_a;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}