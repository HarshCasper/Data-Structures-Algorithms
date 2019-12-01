import java.util.Scanner;
public class linear{
    public static void main(String[] args){
        int n,i;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements you are going to enter into the array:");
        n=s.nextInt();
        int a[]=new int[n];
        System.out.println("Enter the elements:");
        for(i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        int search;
        System.out.println("Enter the element you wish to find:");
        search=s.nextInt();
        int flag=0,pos=0;
        for(i=0;i<n;i++){
            if(a[i]==search){
                flag=1;
                pos=i+1;
                break;
            }
        }
        if(flag==0){
            System.out.println("Element has not been found in the array");
        }
        else{
            System.out.println("Element has been found at position: "+pos+" in the array");
        }
    }
}
        
        
