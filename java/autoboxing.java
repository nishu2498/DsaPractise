import java.io.*;
class autoboxing{

public static void main(String args[]) {
 int x1 = 10;
 Integer x2 = x1;// autoboxing primitive int converting to wrapper integer
 int x3 = x2; // auto-unboxing wrapper integer converting to primitive int
 System.out.println(x1);
 System.out.println(x2);
 System.out.println(x3);
    
}
}
