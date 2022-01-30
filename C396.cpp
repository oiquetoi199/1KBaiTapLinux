// dich trai quay vong
#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col);

void dichTraiXoayVong(int a[][MAX], int row, int col);

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 4;
    col = 6;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    dichTraiXoayVong(a, row, col);
    xuatMang(a, row, col);
    return 0;
}

void nhapTuDong(int a[][MAX], int row, int col)
{
    int dem = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = dem;
            dem++;
        }
    }
}

void dichTraiXoayVong(int a[][MAX], int row, int col)
{
    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
            {
                temp = a[i][j];
                a[i][j] = a[i][j + 1];
            }
            else if(j == (col -1))
            {
                a[i][j] = temp;
            }
            else
            {
                a[i][j] = a[i][j + 1];
            }
        }
    }
    
}