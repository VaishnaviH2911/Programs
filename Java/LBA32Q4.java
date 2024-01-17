import java.util.*;

public class LBA32Q4
{
    public static boolean ChkVowel(String str)
    {            
        char Arr[]=str.toCharArray();
        int i=0;
        int iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u')||(Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U'))
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        boolean iRet=false;
        String str=null;

        System.out.println("Enter the string:");
        str=sobj.nextLine();

        iRet=ChkVowel(str);

        if(iRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}