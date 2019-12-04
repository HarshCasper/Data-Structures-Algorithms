import java.util.Scanner;
import java.util.Arrays;
public class Two_Elements2{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n,k,flag=0,temp;
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(int i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        Arrays.sort(arr);
        System.out.println("Enter the element:");
        k=s.nextInt();
        int i=0,j=n-1;
        while(i<j){
            temp=arr[i]+arr[j];
            if(temp==k){
                System.out.println("Items found are: "+i+" "+j);
                flag=1;
                break;
            }
            else if(temp<k){
                i=i+1;
            }
            else{
                j=j-1;
            }
        }
                
            
        if(flag==0){
            System.out.println("Items not found");
        }
    }
}
