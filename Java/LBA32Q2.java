import java.util.*;

public class LBA32Q2
{
    public static int CountSmall(String str)
    {            
        char Arr[]=str.toCharArray();
        int i=0;
        int iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='a')&&(Arr[i]<='z'))
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

        iRet=CountSmall(str);

        System.out.println("Number of small letters are:"+iRet);

        sobj.close();
    }
}