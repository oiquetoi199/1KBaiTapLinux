#include "nhapxuat.h"

int main()
{
    int a[MAX][MAX];
    int row, col;
    row = 3, col = 3;
    nhapMang(a, row, col);
    xuatMang(a, row, col);
    return 0;
}