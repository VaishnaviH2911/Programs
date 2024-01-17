import java.util.*;

public class LBA36Q3
{
    public static boolean StrNCmpX(String src, String dest,int iValue)
    {
        int iCnt=0;
        
        if(src.length()<iValue || dest.length()<iValue)
        {
            return false;
        }
        for(iCnt=0;iCnt<iValue;iCnt++)
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
        int iNo=0;

        System.out.println("Enter first string:");
        str1=sobj.nextLine();

        System.out.println("Enter second string:");
        str2=sobj.nextLine();

        System.out.println("Enter the value of iNo:");
        iNo=sobj.nextInt();

        bRet=StrNCmpX(str1,str2,iNo);

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