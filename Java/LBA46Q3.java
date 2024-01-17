import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public int MaxDiagonal() 
    {
        int i = 0, j = 0;

        int dMax=Arr[i][i];

        for (i = 0; i < Arr.length; i++) 
        {
            for (j = 0; j < Arr[i].length; j++) 
            {
                if(i==j && Arr[i][j]>dMax) 
                {
                    dMax=Arr[i][j];
                }
            }
        }
        return dMax;
    }
}

public class LBA46Q3 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.MaxDiagonal();

        System.out.println("Maximum number from diagonal is:" + iRet);

        mobj = null;
        System.gc();
    }
}
