public class Solution {

        public static void main(String[] args){
            Student s = new Student();
            Class student = s.getClass();
            Method[] methods = student.getDeclaredMethods();

            ArrayList<String> methodList = new ArrayList<>();
            for(Method o : methods){
                methodList.add(o.getName());
            }
            Collections.sort(methodList);
            for(String name: methodList){
                System.out.println(name);
            }
        }

    }
