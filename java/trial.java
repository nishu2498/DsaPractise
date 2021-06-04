import java.io.*;
class Point{
    int x;
    int y;
}
class trial{
    public static void main(String[] args) {
        Point p = new Point();
        p.x = 10;
        p.y = 20;
        System.out.println(p.x+" "+p.y);

        int x1 = 10;
        int x2 = x1;
        x2 = 20;
        System.out.println(x1);
        System.out.println(x2);

        Point p2 = p;
        System.out.println(p.x);
        System.out.println(p2.y);
        
        
        
        /*int age = 21;
        String name = "Nishant";
        float weight= 77.5f;
        boolean isMarried = false;
        byte marks = 90;
        long views = 1000000000;
        char gender = 'M';


        System.out.println(age);
        System.out.println(name);
        System.out.println(weight);
        System.out.println(isMarried);
        System.out.println(marks);
        System.out.println(views);
        System.out.println(gender);*/


    }

}