import java.util.*;
import java.io.*;

public class LBA41Q5
{
    public static void main(String arg[]) 
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the name of the file:");
        String FileName=sobj.nextLine();

        try
        {
           System.out.println("Enter data that you want to write in the file:");
           String Data=sobj.nextLine();

           FileOutputStream fobj=new FileOutputStream(FileName,true);//write data at the end of file

           byte arr[]=Data.getBytes();//convert string into bytes

           fobj.write(arr);
           fobj.close();
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    }  

}
