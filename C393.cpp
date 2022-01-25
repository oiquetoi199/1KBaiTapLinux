// hoan vi va xu ly ma tran
#include "nhapxuat.h"

void nhapTuDong(int a[][MAX], int, int);
void swap(int& ,int&);
void doiCho2Cot(int a[][MAX], int, int);

int main()
{
    int a[MAX][MAX];
    int row = 4, col = 5;
    nhapTuDong(a, row, col);
    xuatMang(a, row, col);
    doiCho2Cot(a, row, col);
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

void doiCho2Cot(int a[][MAX], int row, int col)
{
    int cotCanDoi1, cotCanDoi2;
    cout << "Nhap cot can doi : ";
    cin >> cotCanDoi1;
    cout << "Nhap cot can doi : ";
    cin >> cotCanDoi2;
    
    for (int i = 0; i < row; i++)
    {
        swap(a[i][cotCanDoi1] ,a[i][cotCanDoi2]);
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}