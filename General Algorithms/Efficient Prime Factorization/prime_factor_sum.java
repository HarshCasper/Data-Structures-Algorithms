/* 

Input Format

On the first line there is a single integer , the number of test cases.
lines follow, each containing one integer , the number to factorize.

Output Format

In order to spend more time coding an efficient algorithm than messing with effective input reading and 
output writing, your output must contain EXACTLY ONE NUMBER. This number should be the sum of the elements
of prime factorizations of all  numbers you're given. See the sample for clarity.

Sample Input

5  
6  
9  
12  
17  

Sample Output

35   */

import java.util.Scanner;
public class prime_factor_sum{
    static long count(int n){
        long flag=0;
        while(n%2==0){
            flag=flag+2;
            n=n/2;
        }
        for(int i=3;i<=Math.sqrt(n);i=i+2){
            while(n%i==0){
                flag=flag+i;
                n=n/i;
            }
        }
        if(n>2){ flag=flag+n; }
        return flag;   
    }
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
        long sum=0;
        System.out.println("The output is:");
        for(i=0;i<n;i++){
            sum=sum+count(arr[i]);
        }
        System.out.print(sum);
    }
}
