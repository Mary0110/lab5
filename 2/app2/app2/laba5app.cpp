/*���  ���������  �����������  ������� B�� N���������  �����  �����  ���������,
����������� �� ������� sin(Bi)*cos(Bi). 
����������� ������� ��������� ������ ��� �������� 
���  ������  ��  �������  �������.  �����������  ������  �����������,  
����� ��������� ������ ���� �������.*/
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

