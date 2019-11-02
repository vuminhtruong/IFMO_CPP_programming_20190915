//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
    int n,m,i,j,x,y;
  cin>>n>>m;
  int a[n][m];
  for(x=0;x<n;x++)
      for(y=0;y<m;y++)
          cin>>a[x][y];
      cin>>i>>j;
      for(x=0;x<n;x++){
          swap(a[x][i],a[x][j]);
          for(y=0;y<m;y++){
              cout<<a[x][y]<<" ";
          }
          cout<<endl;
      }
    return 0;
}
