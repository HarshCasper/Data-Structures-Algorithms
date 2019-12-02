import java.util.Scanner;
public class odd1{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n,i;
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        System.out.println("Enter the elements in the array:");
        int arr[]=new int[n];
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int index=0;
        for(i=0;i<n;i++){
            index=index^arr[i];
        }
        System.out.println(index);
    }
}
