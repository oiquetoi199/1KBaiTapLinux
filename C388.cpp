#include "nhapxuat.h"
#include <cmath>

// Kiem tra so nguyen to
bool kiemTraNguyenTo(int n)
{
    if (n == 1 || n == 0)
    {
        return 0;
    }
    for (int i = 2 ; i <= sqrt(n); i++)
    {
        if (n % i == 0)    
        return 0;
    }
    return 1;
 }

// Liet ke cac dong co nhieu so nguyen to nhat
void lietKeDongNguyenTo(int a[][MAX], int row, int col)
{
    int soLuongNguyenToMax = 0;    
    // So luong so nguyen to nhieu nhat trong cac dong
    int dem;
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (kiemTraNguyenTo(a[i][j]) == 1)
                dem++;
        }
        if (dem > soLuongNguyenToMax)
            soLuongNguyenToMax = dem; 
    }
    
    // in ra cac dong co so luong so nguyen to nhieu nhat
    // neu khong co so nguyen to thi in ra khong co
    if (soLuongNguyenToMax == 0)
    {
        cout << "Khong ton tai so nguyen to trong mang \n";
        return;
    }

    cout << "Cac dong co so luong so nguyen to nhieu nhat la ";
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (kiemTraNguyenTo(a[i][j]) == 1)
                dem++;
        }
        if (dem == soLuongNguyenToMax)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = col = 4;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    lietKeDongNguyenTo(a, row, col);
    return 0;
}