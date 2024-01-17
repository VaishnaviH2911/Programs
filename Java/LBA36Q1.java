import java.util.*;

public class LBA36Q1
{
    public static String StrNCatX(String src,String dest,int iCnt)
    {
        String StrConcat=null;

        if(iCnt<=dest.length())
        {
            StrConcat=src+dest.substring(0,iCnt);
            return StrConcat;
        }
        else
        {
            return src+dest;
        }
        
    }
    public static void main (String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str1=null, str2=null;
        String sRet=null;
        int N=0;

        System.out.println("Enter first string:");
        str1=sobj.nextLine();

        System.out.println("Enter second string:");
        str2=sobj.nextLine();

        System.out.println("Enter the value of N:");
        N=sobj.nextInt();

        sRet=StrNCatX(str1,str2,N);

        System.out.println(sRet);
    }
}