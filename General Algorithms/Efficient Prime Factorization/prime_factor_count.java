// Java Program to calculate the number of Prime Factors of every element in an array of size 'n'

import java.util.Scanner;
public class prime_factor_array{
    static int count(int n){
        int flag=0;
        while(n%2==0){
            flag++;
            n=n/2;
        }
        for(int i=3;i<Math.sqrt(n);i=i+2){
            while(n%i==0){
                flag++;
                n=n/i;
            }
        }
        if(n>2){ flag++; }
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
        System.out.println("The output is:");
        for(i=0;i<n;i++){
            System.out.println(count(arr[i]));
        }
    }
}
        
