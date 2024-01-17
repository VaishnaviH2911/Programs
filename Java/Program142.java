import java.util.*;
import Marvellous.Arithematic;

public class Program142
{
    public static void main(String[] args)
    {
        Scanner sobj= new Scanner(System.in);

        int iNo1=0, iNo2=0;
        int iAns=0;

        System.out.println("Enter first number:");
        iNo1=sobj.nextInt();

        System.out.println("Enter second number:");
        iNo2=sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);

        iAns=aobj.Addition();
        System.out.println("Addition is:"+iAns);
            
    }
}

//1.javac -d . Arithematic.java
//2.javac program142.java
//3.java program142