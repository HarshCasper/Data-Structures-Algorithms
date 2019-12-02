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
        int i,max=0,maxIndex;
        for(i=0;i<n;i++){
            if(arr[i]/n>max){
                max=arr[i]/n;
            }
            maxIndex=i;
        }
        System.out.println("The number that occurs the most is "+arr[max]);
    }
}
