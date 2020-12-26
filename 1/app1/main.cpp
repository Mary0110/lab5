/*Составить   программу   для   вычисления
 произведения одномерных динамических  массивов  (векторов)nxxxX,,,21и   nyyyY,,,21.
Элементы  вектора nxxxX,,,21ввести  с  клавиатуры,
а  элементы  вектора Yвычислить по формуле )1,0tg(1,0iyi, где i= 1,2,...,n,   n= 10.
Вывести на экран значение произведенияи элементы вычисленного вектора Y.*/
#include <iostream>
#include <stdio.h>
#include "header.h"

using namespace std;

int main()
{

    double* x = new double[10];
    double* y = new double[10];
    double* m = new double[10];
    int j;
    cout << "Enter x[i]:"<< endl;  //array X input
    for(j = 0; j < 10; j++)
    {
        cin >> x[j];
    }

    for(int i = 0; i < 10; i++)    //calculating array Y elements
    {
       y[i] = calc_Y(i);
       cout << "y[" << i << "]=" << y[i] << ' ';   //Y elements output
    }

    cout << endl<< "product:"<<endl;    // product of arrays output

    for(int i = 0; i < 10; i++)
    {
       m[i] = x[i] * y[i];
       cout <<m[i] << ' ';
    }
  delete [] x;
  delete [] y;
  delete [] m;

    return 0;
}
