#include<iostream>
#include<cmath>
#include<iomanip>
#include<set>
using namespace std;
int main()  
{
	int times;
	cin >> times;
	int loopcount = 1;
	while(times--)
	{
		int N;
		int sum = 0;
		cin >> N;
		set<int> data;

		int cycle = 1;
		for(int i = 0; i < 101; i++)
		{
			sum += N;
			int num = 0;
			int temp = sum;
			if(temp == 0)
			{
				data.insert(0);
			}
			while(temp)
			{
				data.insert(temp%10);
				temp /= 10;
			}

			if(data.size() == 10)
			{
				cout << "Case #" << loopcount << ": " << sum << endl;
				break;
			}
		}

		if(data.size() < 10)
		{
			cout << "Case #" << loopcount << ": INSOMNIA" << endl;
		}

		loopcount++;

	}

	return 0;  
}