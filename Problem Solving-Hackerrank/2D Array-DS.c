// https://www.hackerrank.com/challenges/2d-array/problem

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,a[10][10],i,j,max=-36985247,ar=0;;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        ar=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        if(ar>max){
            max=ar;
        }
        }
    }
    printf("%d",max);
    return 0;

}
