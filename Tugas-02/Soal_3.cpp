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
	int j = n-1;
	bool found = false;
	int idx;
	int mid;
	while ((i <= j) && (!found))
	{
		mid = (i + j)/2;
		if (x[mid] == y)
			found = true;
		else
		{
			if (x[mid] < y)
				i = mid + 1;
			else
				j = mid - 1;
		} 
			
	}

	if (found)
		idx = mid+1;
	else
		idx = 0;

	cout << "Yang dicari berada di urutan : " << idx << endl; 

	return 0;
}

