import java.util.*;

public class LBA36Q2
{
    public static boolean StrCmpX(String src, String dest)
    {
        int iCnt=0;
        
        if(src.length()!=dest.length())
        {
            return false;
        }
        for(iCnt=0;iCnt<src.length();iCnt++)
        {
            if(src.charAt(iCnt)!=dest.charAt(iCnt))
            {
                return false;
            }
        }
        return true;
    }
    public static void main (String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str1=null, str2=null;
        boolean bRet=false;

        System.out.println("Enter first string:");
        str1=sobj.nextLine();

        System.out.println("Enter second string:");
        str2=sobj.nextLine();

        bRet=StrCmpX(str1,str2);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}