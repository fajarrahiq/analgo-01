#include <iostream> 
#include <string.h> 
#include <stdio.h> 

using namespace std;

// Banyak laki-laki dan perempuan
#define N 5 
// fungsi returns true jika wanita lebih suka pria 'm1' daripada pria 'm'

bool wPrefersM1OverM(int prefer[2 * N][N], int w, int m, int m1)
{
	// meeriksa w memilih m daripada dengan tunangan m1 
	for (int i = 0; i < N; i++)
	{
		if (prefer[w][i] == m1)
			return true;

		if (prefer[w][i] == m)
			return false;
	}
}

void stableMarriage(int prefer[2 * N][N])
{
	int wPartner[N];
	bool mFree[N];

	// Initialize all men and women as free 
	memset(wPartner, -1, sizeof(wPartner));
	memset(mFree, false, sizeof(mFree));
	int freeCount = N;

	// While there are free men 
	while (freeCount > 0)
	{
		// Pick the first free man (we could pick any) 
		int m;
		for (m = 0; m < N; m++)
			if (mFree[m] == false)
				break;

		// One by one go to all women according to m's preferences. 
		// Here m is the picked free man 
		for (int i = 0; i < N && mFree[m] == false; i++)
		{
			int w = prefer[m][i];
			if (wPartner[w - N] == -1)
			{
				wPartner[w - N] = m;
				mFree[m] = true;
				freeCount--;
			}
			else // If w is not free 
			{
				// Find current engagement of w 
				int m1 = wPartner[w - N];

				// If w prefers m over her current engagement m1, 
				// then break the engagement between w and m1 and 
				// engage m with w. 
				if (wPrefersM1OverM(prefer, w, m, m1) == false)
				{
					wPartner[w - N] = m;
					mFree[m] = true;
					mFree[m1] = false;
				}
			} // End of Else 
		} // End of the for loop that goes to all women in m's list 
	} // End of main while loop 


	// Print the solution 
	cout << "Woman Man" << endl;
	for (int i = 0; i < N; i++)
		cout << " " << i + N << "\t" << wPartner[i] << endl;
}

// Driver program to test above functions 
int main()
{
	/*
	0 victor, 1 wyat, 2 xavier, 3 yancey, 4 zeus
	5 amy, 6 bertha, 7 clare, 8 diane, 9 erika
	*/
	int prefer[2 * N][N] = { 
		{6,5,8,9,7},
		{8,6,5,7,9},
		{6,9,7,8,5},
		{5,8,7,6,9},
		{6,8,5,9,7},
		{4,0,1,3,2},
		{2,1,3,0,4},
		{1,2,3,4,0},
		{0,4,3,2,1},
		{3,1,4,2,0}
	};
	stableMarriage(prefer);
	return 0;
}

