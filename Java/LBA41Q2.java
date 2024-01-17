import java.util.*;
import java.io.*;

public class LBA41Q2
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter file name which you want to create:");
        String FileName=sobj.nextLine();

        try
        {
            File fobj=new File(FileName);

            boolean bRet=false;

            bRet=fobj.createNewFile();

            if(bRet==true)
            {
                System.out.println("File created successfully");
            }
            else
            {
                System.out.println("Unable to create file");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured");
        }
        
    }
}