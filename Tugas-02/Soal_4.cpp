#include <iostream>
using namespace std;

int main()
{
	int n;
	int x[10];
	cout << "Masukkan Jumlah Data : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Masukkan Data ke - " << i+1 << " : ";
		cin >> x[i];
	}
	cout << "Data Sebelum di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
	cout << endl;

	int insert;
	int j;
	for (int i = 1; i < n; i++)
	{
		insert = x[i];
		j = i-1;
		while ((j >= 0) && (x[j] > insert))
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = insert;
	}

	cout << "Data setelah di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	return 0;
}
