#include <iostream>
#include <cmath>
#include <iomanip>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef unsigned int UINT32;

bool add(vector<int> &data);
UINT32 data_to_int(vector<int> &data, int t);
int isnotprime(UINT32 num);

int main()
{
	int times, N, J;
	int loopcount = 1;
	int count = 0;
	cin >> times;
	while(times--)
	{
		cin >> N >> J;
		vector<int> data;
		vector<int> divisor;
		cout << "Case #" << loopcount << endl;
		for (int i = 0; i < N; i++)
		{
			if(i == 0 || i == N-1)
			{
				data.push_back(1);
			}
			else
			{
				data.push_back(0);
			}
		}

		while(1)
		{		
			for(int i = 2; i < 11; i++)
			{
				UINT32 num = data_to_int(data, i);
				int inp = isnotprime(num);
				if(inp == 0)
				{
					add(data);
					break;
				}

				divisor.push_back(inp);
			}
			if(divisor.size() == 9)
			{
				for(int i = 0; i < data.size(); i++)
				{
					cout << data[i];
				}
				cout << " ";
				for(int i = 0; i < 8; i++)
				{
					cout << divisor[i] << " ";
				}
				cout << divisor[8] << endl;
				count++;
				
				vector<int> del2;
				divisor.swap(del2);
				
				if(count == J)
					break;
				add(data);
			}

		}


		loopcount++;
		vector<int> del1;
		data.swap(del1);
	}



	return 0;
}

bool add(vector<int> &data)
{
	int carry = 0;
	int i = data.size() - 2;
	while(i)
	{
		carry = data[i];
		data[i] = (data[i] + 1) % 2;
		if(carry == 0)
		{
			break;
		}
		i--;
	}

	if(!i)
	{
		return false;
	}
	return true;
}

UINT32 data_to_int(vector<int> &data, int t)
{
	UINT32 sum = 1;
	for(int i = 1; i < data.size(); i++)
	{
		sum = sum * t + data[i];
	}
	return sum;
}

int isnotprime(UINT32 num)
{
	if(num < 2)
	{
		return 0;
	}
	for(int i = 2; i*i <= num; i++)
	{
		if(num % i == 0)
		{
			return i;
		}
	}

	return 0;
}