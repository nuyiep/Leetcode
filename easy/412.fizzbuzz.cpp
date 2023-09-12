
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Solution 
{
public:
    vector<string> fizzBuzz(int n) 
	{
		vector<string> answer;
		int i = 1;

		while (i <= n)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				answer.push_back("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				answer.push_back("Fizz");
			}
			else if (i % 5 == 0)
			{
				answer.push_back("Buzz");
			}
			else
			{
				string b = to_string(i);
				answer.push_back(b);
			}
			i++;
		}
		return (answer);
    }
};

int main()
{
	Solution A;
	vector<string> printing;

	printing = A.fizzBuzz(15);
	int i = 0;
	while (i < 15)
	{
		cout << printing[i] << endl;
		i++;
	}
}