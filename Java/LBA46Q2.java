import java.util.*;
import LB.Matrix1;

class LBA46Q2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0, iRet1=0, iNo=0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        System.out.println("Enter number whose frequency has to check: ");
        iNo = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        iRet=mobj.Frequency(iNo);

        System.out.println("Frequency is:"+iRet);
        
        mobj = null;
        System.gc();
    }
}

class MyMatrix extends Matrix1
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Frequency(int iNo)
    {
        int i=0, j=0;
        int iCnt=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i][j]==iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
}




