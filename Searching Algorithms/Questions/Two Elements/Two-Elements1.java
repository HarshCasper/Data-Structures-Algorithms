import java.util.Scanner;
public class Two_Elements{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n,k,flag=0;
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(int i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        System.out.println("Enter the element:");
        k=s.nextInt();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[i]+arr[j]==k){
                    System.out.println("Items found: "+arr[i]+" "+arr[j]);
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            System.out.println("Items not found");
        }
    }
}
