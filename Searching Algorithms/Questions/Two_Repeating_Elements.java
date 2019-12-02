import java.util.Scanner;
public class Two_Repeating_Elements{
    public static void main(String[] args){
        int n,i,j;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        n=s.nextInt();
        System.out.println("Enter the elements in the array:");
        int arr[]=new int[n];
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    System.out.println(arr[i]+" is one such element");
                }
            }
        }
    }
}
        
