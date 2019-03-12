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

	int maks = x[0];
	int i = 1;
	while (i <= n)
	{
		if (x[i] > maks)
			maks = x[i];
		i++;
	}
	cout << "Maksimum Number : " << maks << endl;

	return 0;
}
