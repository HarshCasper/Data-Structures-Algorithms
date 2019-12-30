import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Complete the function
            if(!(a != null && b != null)) return false;
    String aa = a.toLowerCase().trim();
    String bb = b.toLowerCase().trim();

    boolean rtn = true;

    while(!aa.isEmpty()){
        char temp = aa.charAt(0);
        aa = aa.replaceFirst(temp+"","");
        bb = bb.replaceFirst(temp+"","");
        if(aa.length() != bb.length()){
            rtn = false;
            break;
        }
    }
    return rtn;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
