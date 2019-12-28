import java.util.*;
import java.io.*;



class Java_Datatypes{
    public static void main(String []argh)
    {



        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {
            try
            {
                long x=sc.nextLong();
                System.out.println(x+" can be fitted in:");
                if (x>=Integer.MIN_VALUE && x<=Integer.MAX_VALUE)
                {
                    if(x>=Short.MIN_VALUE && x<=Short.MAX_VALUE)
                        {
                            if(x>=Byte.MIN_VALUE && x<=Byte.MAX_VALUE)
                            {
                                System.out.println("* byte");
                            }
                            System.out.println("* short");
                        }
                    System.out.println("* int");
                }
                System.out.println("* long");
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}
