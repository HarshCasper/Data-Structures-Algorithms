/* Given an array arr[] of N elements. The good value of an element arr[i] is the number of valid indices j<i such that 
arr[j] is divisible by arr[i].

Input: arr[] = {9, 6, 2, 3}
Output: 2
9 doesn’t has any element on its left.
6 doesn’t divide any element on its left.
2 divides 6.
3 divides 6 and 9.



Input: arr[] = {8, 1, 28, 4, 2, 6, 7}
Output: 3

*/


import java.util.Scanner;
public class max_count{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements in the array:");
        int n=s.nextInt();
        int i;
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
        int count=0,maxCount=0,j;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<i;j++){
                if(arr[j]%arr[i]==0){
                    count++;
                }
            }
            maxCount=Math.max(count,maxCount);
        }
        System.out.println("The maximum count is "+maxCount);
    }
}
