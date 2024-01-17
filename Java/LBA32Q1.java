import java.util.*;

public class LBA32Q1
{
    public static int CountCapital(String str)
    {
        char Arr[]=str.toCharArray();
        int i=0;
        int iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;
        String str=null;

        System.out.println("Enter the string:");
        str=sobj.nextLine();

        iRet=CountCapital(str);

        System.out.println("Number of capital letters are:"+iRet);

        sobj.close();
    }
}