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

	int y;
	cout << "Masukkan yang dicari : ";
	cin >> y;

	int i = 0;
	bool found = false;
	int idx;
	while ((i < n) && (!found))
	{
		if (x[i] == y)
			found = true;
		else
			i++;
	}
	if (found)
		idx = i+1;
	else
		idx = 0;

	cout << "Yang dicari berada di urutan : " << idx << endl; 

	return 0;
}
