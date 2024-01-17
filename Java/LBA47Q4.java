import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1
{
    public MyMatrix(int A, int B) 
    {
        super(A, B);
    }

    public boolean ChkIdentity() 
    {
        int i = 0, j = 0;

        for (i = 0; i < Arr.length; i++) 
        {
            for (j = 0; j < Arr[i].length; j++) 
            {
                if ((i == j && Arr[i][j] != 1) || (i != j && Arr[i][j] != 0)) 
                {
                    return false;
                }
            }

        }
        return true;
    }
}

public class LBA47Q4 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        boolean bRet=false;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        bRet=mobj.ChkIdentity();

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
        mobj = null;
        System.gc();
    }
}
