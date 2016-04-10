#include <iostream>
#include <cmath>
#include <iomanip>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int times, K, C, S;
	int loopcount = 1;
	cin >> times;
	while(times--)
	{
		cin >> K >> C >> S;

		if(C == 1)
		{
			if(K > S)
			{
				cout << "Case #" << loopcount << ": " << "IMPOSSIBLE" << endl;
			}
			else
			{
				cout << "Case #" << loopcount << ": ";
				for(int i = 0; i < K - 1; i++)
				{
					cout << i + 1  << " ";
				}
				cout << K << endl;
			}
		}

		else
		{
			if(K > S + 1)
			{
				cout << "Case #" << loopcount << ": " << "IMPOSSIBLE" << endl;
			}
			else
			{
				cout << "Case #" << loopcount << ": ";
				for(int i = 1; i < K - 1; i++)
				{
					cout << i + 1  << " ";
				}
				cout << K << endl;
			}
		}

		loopcount++;
	}



	return 0;
}