#include <stdio.h>
#include <stdlib.h>

int x,y,z;

int main(){
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Address of z: %p\n", &z);

    int* A = (int*)malloc(100*sizeof(int));
    int* B = (int*)malloc(100*sizeof(int));
    int* C = (int*)malloc(100*sizeof(int));

    printf("Address of A: %p\n", &A);
    printf("Address of B: %p\n", &B);
    printf("Address of C: %p\n", &C);

    return 0;
}