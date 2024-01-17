import java.util.*;

public class Program153
{
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name:");
        str=sobj.nextLine();

        System.out.println("Your name is:"+str);
        System.out.println("Length of ur name is:"+str.length());

        sobj.close();
    }
}

