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

	int imaks;
	int temp;
	for (int i = n-1; i >= 1; i--)
	{
		imaks = 0;
		for (int j = 1; j <= i; j++)
		{
			if (x[j] > x[imaks])
				imaks = j;
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp;
	}

	cout << "Data setelah di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	return 0;
}
