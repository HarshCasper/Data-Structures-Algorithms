// https://www.hackerrank.com/challenges/arrays-ds/problem

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,c,n,a[1000],t=0;
    scanf("%d",&n);
    c=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[c];
        a[c]=t;
        c--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
