#include <iostream>
#include <cmath>
#include <iomanip>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void cleardata(vector<int> &data)
{
	for(int i = 2; i < data.size()-2;i++)
	{
		data[i] = 0;
	}
}

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
		cout << "Case #" << loopcount << ": " << endl;
		for (int i = 0; i < N; i++)
		{
			if(i == 0 || i == 1 || i == N-2 || i == N-1)
			{
				data.push_back(1);
			}
			else
			{
				data.push_back(0);
			}
		}
		for(int i = 0; i < 9; i++)
		{
			divisor.push_back(i+3);
		}

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

		for(int i = 2; i < N - 4; i++)
		{
			data[i] = 1;
			data[i+1] = 1;

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
			cleardata(data);

			if(count == J)
			{
				break;
			}
		}

		if(count == J)
		{
			break;
		}

		for(int i = 2; i < N - 6; i++)
		{
			for(int j = i + 2; j < N - 4; j++)
			{
				data[i] = 1;
				data[i+1] = 1;
				data[j] = 1;
				data[j+1] = 1;

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
				cleardata(data);

				if(count == J)
				{
					break;
				}
			}

			if(count == J)
			{
				break;
			}	
		}

		if(count == J)
		{
			break;
		}


		for(int i = 2; i < N - 8; i++)
		{
			for(int j = i + 2; j < N - 6; j++)
			{
				for(int k = j + 2; k < N - 4; k++)
				{
					data[i] = 1;
					data[i+1] = 1;
					data[j] = 1;
					data[j+1] = 1;
					data[k] = 1;
					data[k+1] = 1;

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
					cleardata(data);

					if(count == J)
					{
						break;
					}

				}

				if(count == J)
				{
					break;
				}
				
			}

			if(count == J)
			{
				break;
			}	
		}

		if(count == J)
		{
			break;
		}



		loopcount++;
		vector<int> del1;
		data.swap(del1);
		vector<int> del2;
		divisor.swap(del2);
	}



	return 0;
}