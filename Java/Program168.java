//Hexadecimal
import java.util.*;

public class Program168
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int iNo=0;
        int iMask=0X00000100;
        int iResult=0;

        System.out.println("Enter number:");
        iNo=sobj.nextInt();

        iResult =iNo & iMask;

        if(iResult==iMask)
        {
            System.out.println("9th bit is ON");
        }
        else
        {
            System.out.println("9th bit is OFF");
        }
    }
}


/* 
0000 0000 0000 0000 0000 0001 0000 0000
0    0    0    0    0    1    0    0
0X00000100
*/