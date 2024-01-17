import java.util.*;

public class Program152
{
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        String str=null;

        System.out.println("Enter your name:");
        str=sobj.nextLine();

        System.out.println("Your name is:"+str);
        
        sobj.close();
    }
}

