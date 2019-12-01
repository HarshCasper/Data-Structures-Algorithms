import java.util.Scanner;
public class binary_search{
    public static void main(String[] args){
        int first,last,mid=0,n,i,element,flag=0;
        Scanner s=new Scanner(System.in);
        System.out.print('\u000C');
        System.out.println("Enter the number of elements you are going to enter:");
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in sorted order:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        System.out.println("Enter the element that you wish to search:");
        element=s.nextInt();
        first=0;
        last=n-1;
        while(first<=last){
            mid=(first+last)/2;
            if(arr[mid]==element){
                flag=1;
                break;
            }
            else if(element>arr[mid]){
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        if(flag==1){
            System.out.println("Element is present at "+(mid+1)+" position");
        }
        else{
            System.out.println("Element is not present");
        }
    }
}
        
