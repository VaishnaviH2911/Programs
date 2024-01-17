import java.util.*;
import java.util.*;
import java.io.*;

public class Program210
{
    public static void main(String arg[]) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the name of the file:");
        String FileName=sobj.nextLine();

        try
        {
            FileInputStream fobj=new FileInputStream(FileName);
            byte Arr[]=new byte[100];
            
            int b=fobj.read(Arr);
            String str=new String(Arr);

            System.out.println(str);
           
            fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }  

}
