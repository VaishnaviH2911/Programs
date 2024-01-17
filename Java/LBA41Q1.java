import java.util.*;
import java.io.*;

public class LBA41Q1
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter file name which you want to open:");
        String FileName=sobj.nextLine();

        try
        {
            File fobj=new File(FileName);

            if(fobj.exists())
            {
                System.out.println("File Exists");

                System.out.println("File opened successfully");
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