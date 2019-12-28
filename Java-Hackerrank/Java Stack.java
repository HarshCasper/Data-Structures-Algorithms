import java.util.*;
class Solution{

public static void main(String []argh)
{
    Scanner sc = new Scanner(System.in);
    while (sc.hasNext()) {
        boolean valid = true;
        String input=sc.next();
        Stack<String> st = new Stack<String>();
        for(int i = 0; i<input.length(); i++){
            if(input.charAt(i) == '{' || input.charAt(i) == '(' || input.charAt(i) == '[' ){
                st.push(String.valueOf(input.charAt(i)));
            }
            else{
                try{
                    String para = st.pop();
                    if(input.charAt(i) == '}'){
                        if(!(para.equals("{"))){
                            valid = false;
                            break;
                        }
                        if(input.charAt(i) == ')'){
                            if(!(para.equals("("))){
                                valid = false;
                                break;
                            }
                        }
                        if(input.charAt(i) == ']'){
                            if(!(para.equals("["))){
                                valid = false;
                                break;
                            }
                        }

                    }
                }catch(Exception e){
                    valid = false;
                }
            }
        }
        if(valid && st.isEmpty()){
            System.out.println("true");
        }else{
            System.out.println("false");
        }        
    }

}
}
