import java.util.*;
public class modular{
    static int power(int x,int y,int p){
        int res=1;
        x=x%p;
        while(y>0){
            if(y%2==1){
                res=(res*x)%p;
            }
            y=y/2;
            x=(x*x)%p;
        }
        return res;
    }
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the values of X, Y and P:");
        int x=s.nextInt();
        int y=s.nextInt();
        int p=s.nextInt();
        int result=power(x,y,p);
        System.out.println("The Final Result is "+result);
    }
}
