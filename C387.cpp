#include "nhapxuat.h"

void dongCoNhieuSoChanNhat(int a[][MAX], int row, int col)
{
    // Coi dong co so luong chan nhieu nhat la dong 1
    int chanMax = 0;
    for (int i = 0; i < col; i++)
    {
        if (a[1][i] %2 == 0)
        chanMax++;
    }
    
    // Tim so luong so chan nhieu nhat trong dong
    int dem;
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] %2 == 0) 
                dem++;
        }
        if (chanMax < dem)
            chanMax = dem;
    }

    // Liet ke cac dong co so luong so chan = chanMax (cac dong co nhieu so chan nhat)
    // Neu nhu tat cac cac dong deu khong co so chan thi in ra la khong co so chan

    if (chanMax == 0)
    {
        cout << "Khong co gia tri chan trong mang !!!\n";
        return;
    }

    cout << "Cac dong co nhieu so chan nhat la : ";
    for (int i = 0; i < row; i++)
    {
        dem = 0;
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] %2 == 0)
                dem++;
        }
        if (chanMax == dem)
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
    dongCoNhieuSoChanNhat(a, row, col);
    return 0;
}