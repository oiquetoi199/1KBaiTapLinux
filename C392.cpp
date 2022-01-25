// hoan vi va xu ly ma tran
#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int, int);
void swap(int& ,int&);
void doiCho2Dong(int a[][MAX], int, int);

int main()
{
    int a[MAX][MAX];
    int row = 4, col = 5;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    doiCho2Dong(a, row, col);
    xuatMang(a, row, col);
    return 0;
}

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

void doiCho2Dong(int a[][MAX], int row, int col)
{
    int dongCanDoi1, dongCanDoi2;
    cout << "Nhap dong can doi : ";
    cin >> dongCanDoi1;
    cout << "Nhap dong can doi : ";
    cin >> dongCanDoi2;
    
    for (int i = 0; i < col; i++)
    {
        swap(a[dongCanDoi1][i], a[dongCanDoi2][i]);
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}