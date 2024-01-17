import java.util.*;

class Matrix
{
    int i=0, j=0;
    
    public void Display(int Arr[][])
    {
        System.out.println("Entered elements are:");

        for( i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Sum(int Arr[][])
    {
        int sum=0;
        for( i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                sum=sum+Arr[i][j];
            }
        }
        return sum;
    }
}
public class Program239
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iRow=0;
        int iCol=0;

        System.out.println("Enter no.of rows:");
        iRow=sobj.nextInt();

        System.out.println("Enter no.of columns:");
        iCol=sobj.nextInt();

        int Arr[][]=new int[iRow][iCol];
        int i=0;
        int j=0;

        System.out.println("Enter the elements:");
        //    1     2    3
        for( i=0;i<iRow;i++)//outer
        {
            for(j=0;j<iCol;j++)//inner
            {
                Arr[i][j]=sobj.nextInt();//4
            }
        }

        int iRet=0;

        Matrix mobj=new Matrix();
        mobj.Display(Arr);

        iRet=mobj.Sum(Arr);

        System.out.println("Sum is:"+iRet);

    }
}
