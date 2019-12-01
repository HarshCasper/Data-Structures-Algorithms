import java.util.Scanner;
public class ordered_linear{
    public static void main(String[] args){
        System.out.print('\u000C'); //Clear Screen Command in Java
 
        int n,i,flag=0,element,pos=-1;
        Scanner S=new Scanner(System.in);
        System.out.println("Enter the number of elements that has to be searched (they should be in sorted order):");
        n=S.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=S.nextInt();
        }
        System.out.println("Enter the element that has to be searched in the array:");
        element=S.nextInt();
        for(i=0;i<n;i++){
            if(arr[i]==element){
                flag=1;
                pos=i+1;
                break;
            }
            if(arr[i]>element){
                break;
            }
        }
        if(flag==1){
            System.out.println("Element exists in the array at position "+pos);
        }
        else{
            System.out.println("Element does not exist in the array");
        }
    }
}
        
            
