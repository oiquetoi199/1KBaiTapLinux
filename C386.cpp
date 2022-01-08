#include "nhapxuat.h"

void cotTongNhoNhat(int a[][MAX], int row, int col)
{
    int tongCot;
    int tongCotMin = 0;
    // Coi tong cot nho nhat la tong cot 1
    for (int i = 0; i < row; i++)
    {
        tongCotMin += a[i][1];
    }
   
    // tim tong cot nho nhat
    for (int i = 0; i < col; i++)
    {
        tongCot = 0;
        for (int j = 0; j < row; j++)
        {
            tongCot += a[j][i];
        }
        if (tongCot < tongCotMin)
            tongCotMin = tongCot;
    }

    // Liet ke cac cot co tong = min
    int temp;
    cout << "Cac cot co tong nho nhat la : ";
    for (int i = 0; i < col; i++)
    {
        temp = 0; 
        for (int j = 0; j < row; j++)
        {
            temp += a[j][i];
        }
        if (temp == tongCotMin) 
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    cotTongNhoNhat(a, row, col);
    return 0;
}
