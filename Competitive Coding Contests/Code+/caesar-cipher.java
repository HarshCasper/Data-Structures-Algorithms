// https://www.hackerrank.com/contests/code-plus/challenges/caesar-cipher-1

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        int num=0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String str = sc.next();
        int k = sc.nextInt()%26;
        StringBuffer sb = new StringBuffer(str);
        for(int i=0;i<n;i++){
            num=0;
            char ch;
            ch = str.charAt(i);
            if((int)ch >= 65 && (int)ch <= 90)
            {
                num = (int)ch + k;
                if(num>90){
                    num=64+num-90;
                }
                
                sb.setCharAt(i, (char)num);
            }
            if((int)ch >= 97 && (int)ch <= 122)
            {
                num = (int)ch + k;
                if(num>122){
                    num=96+num-122;
                }
                
                sb.setCharAt(i, (char)num);
            }
        }
        
        System.out.println(sb);
        sc.close();
        
    }
}
