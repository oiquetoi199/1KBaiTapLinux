//C339 dem so luong so hoan thien tren 1 hang ma tran cac so nguyen
#include "nhapxuat.h"
using namespace std;
#define MAX 100

bool kiemTraHoanThien(int n)
{
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            temp += i;
        }
    }
    if (n == temp)
        return 1;
    return 0;
}

void demSoHoanThienTrong1Hang(int a[][MAX],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        cout << "Cac so hoan thien trong hang i la : ";
        for (int j = 0; j < col; j++)
        {
            if (kiemTraHoanThien(a[i][j]) == 1)            
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 3;
    col = 3;
    nhapMang(a, row, col);
    demSoHoanThienTrong1Hang(a, row, col); 
    return 0;
}