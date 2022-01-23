// dem so luong duong tren bien ma tran cac so thuc
#include "nhapxuat.h"

void demBienDuong(float a[][MAX], int row, int col)
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == (row - 1))     
        {
            for (int j = 0; j < col; j++)
            {
                if (a[i][j] >= 0)
                {
                    count++;
                }
            }
        }
        else
        {
            if (a[i][0] >=0 || a[i][col -1] >=0)
            {
                count++;
            }
        }
    }
    
    cout << "So gia tri duong tren vien cua ma tran la : " << count << endl;
}
int main()
{
    float a[MAX][MAX];
    int row, col;
    row = 4;
    col = 5;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    demBienDuong(a, row, col);
    return 0;

}