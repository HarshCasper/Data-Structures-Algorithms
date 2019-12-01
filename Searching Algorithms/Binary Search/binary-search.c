#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[1000],n,i,element;
  int first,last,mid,flag=0;
  printf("Enter the number of elements in the array: \n");
  scanf("%d",&n);
  printf("Enter the elements in the array: \n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element that has to be searched: \n");
  scanf("%d",&element);
  first=0;
  last=n-1;
  while(first<=last){
    mid=(first+last)/2;
      
    if(arr[mid]<element){
      first=mid+1;
    }
    else if(arr[mid]==element){
      flag=1;
      break;
    }
    else{
      last=mid-1;
    }
    
  }
  if(flag==1){
    printf("Element has been found at position %d \n",mid+1);
  }
  else{
      printf("Element has not been found");
  }
  return 0;

}
