import java.util.*;

public class LBA36Q4
{
    public static String StrRevTogX(String str)
    {
        StringBuilder reversed= new StringBuilder();

        int iCnt=0;
        char currentChar='\0';

        for(iCnt=(str.length()-1);iCnt>=0;iCnt--)
        {
            currentChar=str.charAt(iCnt);

            if(Character.isUpperCase(currentChar))
            {
                currentChar=Character.toLowerCase(currentChar);
            }
            else if(Character.isLowerCase(currentChar))
            {
                currentChar=Character.toUpperCase(currentChar);
            }
            reversed.append(currentChar);
        }
        return reversed.toString();
    }
    public static void main (String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        String str1=null;
        String reverseStr=null;

        System.out.println("Enter string:");
        str1=sobj.nextLine();

        reverseStr=StrRevTogX(str1);

        System.out.println(reverseStr);

    }
}