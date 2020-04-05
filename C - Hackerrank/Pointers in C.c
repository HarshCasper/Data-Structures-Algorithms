// https://www.hackerrank.com/challenges/pointer-in-c/problem

#include <stdio.h>

void update(int *a,int *b) {
    *a=*a+*b;
    *b=abs(*a-(2**b));   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

