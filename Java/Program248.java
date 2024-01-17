import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int CountEven()
    {
        int i=0, j=0;
        int iFrequency=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]%2==0)
                {
                    iFrequency++;
                }
            }
        }
        return iFrequency;
    }

    public int CountOdd()
    {
        int i=0, j=0;
        int iFrequency=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]%2!=0)
                {
                    iFrequency++;
                }
            }
        }
        return iFrequency;
    }
}

class Program248
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0, iRet1=0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        iRet=mobj.CountEven();
        System.out.println("Frequency of even elements is:"+iRet);

        iRet1=mobj.CountOdd();
        System.out.println("Frequency of odd elements is:"+iRet1);

        mobj = null;
        System.gc();
    }
}