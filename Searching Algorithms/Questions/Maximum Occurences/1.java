import java.util.Scanner;
public class maximum{
    public static void main(String[] args){
        int n;
        System.out.println("Enter the number of elements:");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements:");
        for(int k=0;k<n;k++){
            arr[k]=s.nextInt();
        }
        int counter=0,max=0,index=0;
        for(int i=0;i<n;i++){
            counter=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    counter++;
                }
            }
            if(counter>max){
                max=counter;
                index=arr[i];
            }
        }
        System.out.println("The number that occurs the most is "+index);
    }
}
