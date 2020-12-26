/*Для  заданного  одномерного  массива Bиз Nэлементов  найти  сумму  выражений,
вычисляемых по формуле sin(Bi)*cos(Bi). 
Рекурсивную функцию применять каждый раз отдельно 
для  каждой  из  половин  массива.  Рекурсивные  вызовы  заканчивать,  
когда останется только один элемент.*/
#include <iostream>
#include <cmath>
#include <dll_new.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter n:" << endl;
	cin >> n;
	cout << "Enter array:" << endl;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Sum: " << sum(a, 0, n - 1);
	return 0;
}

