template <class dataType>
void nhapMang(dataType a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

template <class dataType>
void xuatMang(dataType a[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(6) << a[i][j] << " ";
        }
        cout << endl;
    }
}