import java.util.*;
import LB.Matrix1;

class MyMatrix extends Matrix1 {
    public MyMatrix(int A, int B) {
        super(A, B);
    }

    public void ReverseCol() {
        int j = 0;
        for (j= 0; j < Arr.length; j++) {
            int start = 0;
            int end = Arr[j].length - 1;

            while (start < end) {
                int temp = Arr[j][start];
                Arr[j][start] = Arr[j][end];
                Arr[j][end] = temp;

                start++;
                end--;
            }
        }

    }
}

public class LBA47Q3 {
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

        mobj.ReverseCol();

        System.out.println("Matrix after RowReverse is:");
        mobj.Display();

        mobj = null;
        System.gc();
    }
}
