//3. Дан двумерныйдинамическиймассив целых чисел.Значения элементов данного массива ввести   с   клавиатуры.
// Создать   динамический   массив   из   элементов, расположенных  в  четных  столбцах  данного  массива  и  имеющих  нечетное  значение.
//Вычислить среднее арифметическое элементов динамического массива.Вывести результат на экран.Использовать функции.
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double average (int* a, int c);
    cout<< "enter array size"<<endl;
    int n, m;
    cin>>n>>m;

    int** arr1 = new int* [n];    //array 1
    for (int i = 0; i < n; ++i)
    {
        arr1[i]= new int[m];
    }

    int* arr2 = new int[100];    //array 2

    cout<<"enter array"<<endl;
    for (int i = 0; i < n; i++)   //array 1 input
    {
        for(int j = 0; j < m; j++)
            cin >> arr1[i][j];
    }
    int counter = 0;
    for (int i = 1; i < n; i+=2)   //array 2 input
    {
        for(int j = 0; j < m; j++)
        {
            if (arr1[i][j] % 2 == 1)
            {
                arr2[counter] = arr1[i][j];
                counter++;
            }
        }
    }
    cout<< "average=" << average(arr2, counter);  //average value output

    delete [] arr2;
    for(int i = 0; i < n; i++)
        delete [] arr1[i];
    delete [] arr1;
    return 0;
}
double average (int* a, int c)      //calculate average value
{
    double s = 0;
    for(int i = 0; i < c; i++)
    {
        s+=a[i];
    }
    s/=c;
    return s;
}
