import java.util.Scanner;
public class odd{
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
        int count=0,index=-1;
        for(i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count%2==1){
                index=arr[i];
                break;
            }
        }
        System.out.println(index);
    }
}
