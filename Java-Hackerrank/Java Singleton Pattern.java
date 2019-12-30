import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.lang.reflect.*;

class Singleton {
    
    public String str;
    private static Singleton singleton;
    
    private Singleton() {}
    public static getSingleInstance() {
        
        if(singleton == null) {
            singleton = new Singleton();
        }
        
        return singleton;
    }
}
