#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

template<class dataType>
void nhapMang(dataType a[][MAX], int row, int col);

template<class dataType>
void xuatMang(dataType a[][MAX], int row, int col);
#include "nhapxuat.tpp"