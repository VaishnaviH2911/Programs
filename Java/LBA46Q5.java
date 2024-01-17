import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void SwapRows() {
        int i = 0, j = 0;
        int temp = 0;

        for (i = 0; i < Arr.length - 1; i += 2) {
            for (j = 0; j < Arr[i].length; j++) {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
    }
}

public class LBA46Q5 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        mobj.SwapRows();

        System.out.println("Matrix after swapping consecutive rows:");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}
