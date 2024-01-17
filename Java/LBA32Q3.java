import java.util.*;

public class LBA32Q3
{
    public static int CountDiff(String str)
    {
        int iDiff=0;

        char Arr[]=str.toCharArray();
        int i=0;
        int cCnt=0;

        char Brr[]=str.toCharArray();
        int j=0;
        int sCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                cCnt++;
            }
        }

        for(j=0;j<Arr.length;j++)
        {
            if((Arr[j]>='a')&&(Arr[j]<='z'))
            {
                sCnt++;
            }
        }
        iDiff=(sCnt-cCnt);
        return iDiff;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;
        String str=null;

        System.out.println("Enter the string:");
        str=sobj.nextLine();

        iRet=CountDiff(str);

        System.out.println("Diffrence between capital and small letter is:"+iRet);

        sobj.close();
    }
}