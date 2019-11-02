//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
int n,i=1,j=1;
    cin>>n;
    int a[n][n];
        for(i=1;i<n+1;i++){
            for(j=1;j<n+1;j++){
                if(j==((n+1)/2)||i==((n+1)/2))
                cout<<"*"<<" ";
            else if((i+j)==(n+1))
                cout<<"*"<<" ";
                else if(i==j)
                    cout<<"*"<<" ";
                else
                    cout<<"."<<" ";
            }
            cout<<endl;
        }
     return 0;
}
