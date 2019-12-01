#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[1000],i,n,num,flag=0;
  printf("Enter the number of elements that are to be entered into the array: \n");
  scanf("%d",&n);
  printf("Enter the elements in the array: \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element that has to be searched in the array: \n");
  scanf("%d",&num);
  for(i=0;i<n;i++){
    if(arr[i]==num){
      flag=1;
      printf("The element has been found at %d position",i+1);
      return 0;
    }
  }
  if(flag==0){
    printf("The element is not present in the array \n");
  }

return 0;
  
}
