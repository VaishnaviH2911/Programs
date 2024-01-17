import java.util.*;
import java.io.*;

public class LBA41Q4
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter file name:");
        String FileName=sobj.nextLine();

        try
        {
            File fobj=new File(FileName);

            if(fobj.exists())
            {
                System.out.println("Size of file is:"+fobj.length()+"bytes");
            }
            else
            {
                System.out.println("File does not exist.");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured");
        }
    }
}