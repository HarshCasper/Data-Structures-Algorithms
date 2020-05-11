// https://codeforces.com/problemset/problem/1234/B1

import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int k=sc.nextInt();
    int no;
    Stack<Integer> phoneConversation=new Stack<Integer>();
    for(int i=0;i<n;i++){
      no=sc.nextInt();
      if(!(phoneConversation.contains(no))){
        if(phoneConversation.size() == k){
          phoneConversation.remove(0);
          phoneConversation.add(no);
        } else {
          phoneConversation.add(no);
        }
      }
      else{
        continue;
      }
    }
    System.out.println(phoneConversation.size());
    String ans="";
    while(!(phoneConversation.isEmpty())){
      ans=ans+phoneConversation.pop()+" ";
    }
    
    System.out.println(ans.trim());
  }
}
