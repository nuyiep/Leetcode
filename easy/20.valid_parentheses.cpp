
#include <string> 
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) 
	{
		int i = 0;
		int length = s.length();
		std::stack<char> A;

		while (i < length)
		{
 			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				A.push(s[i]);
			}
			else //close
			{
				if (A.size() == 0)
					return false;
				char x = A.top();
				if (s[i] == ')')
				{
					if (x != '(')
						return (false);
					else
						A.pop();
				}
				else if (s[i] == '}')
				{
					if (x != '{')
						return (false);
					else
						A.pop();
				}
				else if (s[i] == ']')
				{
					if (x != '[')
						return (false);
					else
						A.pop();
				}
			}
			i++;
		};
		
		if (A.size() != 0)
			return (false);
		return (true);
	};
};

int main()
{
	string A = "{[]}";

	Solution solu;
	bool x = solu.isValid(A);
	std::cout << x << std::endl;
	bool y = true;
	std::cout << "y " << y << std::endl;
}
