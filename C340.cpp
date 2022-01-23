// C340 dem so luong am trong mot cot
#include "nhapxuat.h"
using namespace std;
#define MAX 100

void demSoLuongAm(float a[][MAX], int row, int col)
{
    int dem;
    for (int i = 0; i < col; i++)
    {
        dem = 0;
        for (int j = 0; j < row; j++)
        {
            if (a[j][i] < 0)
            {
                dem++;        
            }
        }
        cout << "So luong gia tri am trong cot thu " << i << " la " << dem << endl;
        
    }
    
}
int main()
{
    float a[MAX][MAX];
    int row, col;
    row = 3;
    col = 4;
    nhapMang(a, row,col);
    xuatMang(a, row, col);
    demSoLuongAm(a, row, col);
    return 0;
}