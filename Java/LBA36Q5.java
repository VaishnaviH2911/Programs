import java.util.*;

public class LBA36Q5
{
    public static boolean StrPallindrome(String str)
    {
        int left=0;
        int right=str.length()-1;

        str=str.toLowerCase();

        while(left<right)
        {
            if(str.charAt(left)!=str.charAt(right))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    public static void main (String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str1=null;
        boolean bRet=false;

        System.out.println("Enter string:");
        str1=sobj.nextLine();

        bRet=StrPallindrome(str1);

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