import java.util.Scanner;
public class Bitonic_Point{
    static int binary_search(int arr[],int left,int right){
        if(left<=right){
            int mid=(left+right)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid]<arr[mid+1]){
                return binary_search(arr,mid+1,right);
            }
            else{
                return binary_search(arr,left,mid-1);
            }
        }
            return -1;
    }
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int index=binary_search(arr,1,n-2);
        if(index!=-1){
            System.out.println(arr[index]);
        }
    }
}
        
