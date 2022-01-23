#include "nhapxuat.h"

int demChuSo(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

void cotNhieuChuSoNhat(int a[][MAX],int row,int col)
{
    int temp;
    int cotLonNhat;
    int nhieuChuSoNhat = 0;
    for (int i = 0; i < col; i++)
    {
        temp = 0;
        for (int j = 0; j < row; j++)
        {
            temp += demChuSo(a[j][i]);
        }
        if (temp > nhieuChuSoNhat)
        {
            nhieuChuSoNhat = temp;
            cotLonNhat = i;
        }
    }
    cout << "Cot nhieu chu so nhat la cot : " << cotLonNhat << endl;

    
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 4;
    col = 5;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    cotNhieuChuSoNhat(a, row, col);
    return 0;
}