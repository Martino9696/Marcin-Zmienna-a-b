#include <iostream>

void swap (int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("SWAP EXAMPLE\n\n");
    int a = 2;
    int b = 5;

    printf("Befor SWAP:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int temp = a;
    a = b;
    b = temp;
//swap(a, b);
//swap2(&a, &b);

    printf("\n");
    printf("After SWAP:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}