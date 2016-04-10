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
	int times;
	int loopcount = 1;
	cin >> times;
	string temp;
	getline(cin,temp);
	while(times--)
	{
		string s;
		getline(cin,s);
		vector<char> data;
		for(int i = 0; i < s.size(); i++)
		{
			data.push_back(s[s.size()-1-i]);
		}

		int state = 0;
		int num = 0;
		int i = data.size() - 1;
		while(1)
		{
			if(i == -1)
			{
				break;
			}
			if(data[i] == '+')
			{
				switch(state)
				{
					case 0: state = 1; break;
					case 1: break;
					case 2: num += 2; state = 1;break;
					case 3: state = 4;break;
					case 4: break;
					default: break;
				}
			}
			else
			{
				switch(state)
				{
					case 0: state = 3; break;
					case 1: state = 2; break;
					case 2: break;
					case 3: break;
					case 4: num += 1; state = 2;break;
					default: break;
				}
			}

			if(i == 0)
			{
				switch(state)
				{
					case 1: break;
					case 2: num += 2; break;
					case 3: num++; break;
					case 4: num ++; break;
					default: break;
				}
				break;
			}
			i--;
		}

		cout << "Case #" << loopcount << ": " << num << endl;
		loopcount++;


		vector<char> del;
		data.swap(del);
	}



	return 0;
}