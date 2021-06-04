import java.io.*;
import java.util.Scanner;
public class buffreader {
    public static void main(String args[]) throws IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter string");
        String s = br.readLine();
        System.out.println("you have entered: "+s);

        System.out.println("enter integer");
        int a = Integer.parseInt(br.readLine());
        System.out.println("you have entered: "+a);

    }
    
}
class scanreader{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println("you have entered: "+s);

        int x = sc.nextInt();
        System.out.println("you have entered: "+x);

        float  f = sc.nextFloat();
        System.out.println("you have entered: "+f);

    }
}
