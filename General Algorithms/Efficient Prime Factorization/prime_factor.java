// Java Program to calculate the Prime Factors of a Number

import java.util.Scanner;
public class prime_factor{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=s.nextInt();
        System.out.println("The Prime Factors are:");
        while(n%2==0){
            System.out.print("2, ");
            n=n/2;
        }
        for(int i=3;i<=Math.sqrt(n);i++){
            while(n%i==0){
                System.out.print(i+" ");
            }
        }
        if(n>2){
            System.out.print(n);
        }
    }
}
