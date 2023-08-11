#include <stdio.h>
#include <stdlib.h>

int x,y,z;

int wryyy(int n){
    if(n==0){
        return 0;
    }
    int kkk;
    printf("Address of local variable kkk: %p\n", &kkk);
    return wryyy(n-1);
}

int main(){
    wryyy(3);
    printf("\n");
    printf("Address of global variable x: %p\n", &x);
    printf("Address of global variable y: %p\n", &y);
    printf("Address of global variable z: %p\n", &z);
    printf("\n");
    int* A = (int*)malloc(100*sizeof(int));
    int* B = (int*)malloc(100*sizeof(int));
    int* C = (int*)malloc(100*sizeof(int));

    printf("Address of A: %p\n", A);
    printf("Address of B: %p\n", B);
    printf("Address of C: %p\n", C);

    return 0;
}