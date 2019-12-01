#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[100],n,i,pos=-1,element,flag=0;
  printf("Enter the number of elements you wish to enter: \n");
  scanf("%d",&n);
  printf("Enter the elements which should be in sorted order \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched in the array: \n");
  scanf("%d",&element);
  for(i=0;i<n;i++){
    if(arr[i]==element){
      pos=i+1;
      flag=1;
      break;
    }
    if(element<arr[i]){
      break;
    }
  }
  if(flag==1){
    printf("The elemnent has been found at position %d", pos);
  }
  else{
    printf("The elemnent has not been found");
  }
return 0;
  
}
