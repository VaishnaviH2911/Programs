import java.util.*;

public class LBA32Q5
{
    public static void Reverse(String str)
    {            
        char Arr[]=str.toCharArray();
        int i=0;
        String rev="";

        for(i=Arr.length-1;i>=0;i--)
        {
            rev=rev+Arr[i];
        }
        System.out.print(rev);
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String str=null;

        System.out.println("Enter the string:");
        str=sobj.nextLine();

        Reverse(str);

        sobj.close();
    }
}