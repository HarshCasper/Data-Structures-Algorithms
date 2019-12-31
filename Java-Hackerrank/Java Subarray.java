import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) 
{

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];

        for(int k = 0; k < n; ++k){
            arr[k] = in.nextInt();
        }

        long sumFel = 0; //The sum of the first elements regarding the step
        long temp = sumFel;
        int step = 0;
        int k = 0;
        int prev = 0;
        int count = 0;

        while (step < n){
            sumFel = temp;
            sumFel += arr[step];
            temp = sumFel;
            ++step;
            if(sumFel < 0){
                ++count;
            }
            for (k = step, prev = 0; k < n; ++k, ++prev){
                sumFel -= arr[prev];
                sumFel += arr[k];
                if(sumFel < 0){
                    ++count;
                }
            }
        }
        System.out.println(count);
}
}

