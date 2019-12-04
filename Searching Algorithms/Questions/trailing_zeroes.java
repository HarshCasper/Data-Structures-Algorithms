// Count trailing zeroes in factorial of a number

import java.util.Scanner;
public class trailing_zeroes{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=s.nextInt();
        int i,count=0;
        for(i=5;n/i>=1;i=i*5){
            count=count+(n/i);
        }
        System.out.println("The number of trailing zeroes are "+count);
    }
}
        
