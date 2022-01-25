#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int row, int col)
{
    int temp = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = temp;
            temp++;
        }
    }
}

void dichLenXoayVong(int a[][MAX], int row, int col)
{
    int temp;
    for (int i = 0; i < col; i++)
    {
        temp = a[0][i];
        for (int j = 0; j < row; j++)
        {
            a[j][i] = a[j + 1][i];
            if (j == row - 1)
            {
                a[row - 1][i] =  temp;
            }
        }
    }
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 4;
    col = 5;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    dichLenXoayVong(a, row, col);
    cout << "Mang sau khi dich len xoay vong la \n";
    xuatMang(a, row, col);
    return 0;
}