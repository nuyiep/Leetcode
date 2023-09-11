
#include <string>
#include <iostream>
using namespace std;

class Solution 
{
	public:
		bool isPalindrome(string s) 
		{
			int i = 0;
			int len = s.length();
			string after_trim;

			while (i < len)
			{
				if (isalpha(s[i]) == 1)
					after_trim.push_back(s[i]);
				i++;
			}
			len = after_trim.length();
			i = 0;
			len--;
			int end = len;
			while (i < end)
			{
				if (tolower(after_trim[len]) != tolower(after_trim[i]))
				{
					std::cout << "after_trim[len]: " << after_trim[len] << endl;
					std::cout << "after_trim[i]: " << after_trim[i] << endl;
 					return (false);
				}
				i++;
				len--;
			}
			return (true);
		}
};

int main()
{
	string s = "race a car";
	// string s = "A man, a plan, a canal: Panama";
	Solution A;

	bool x = A.isPalindrome(s);
	cout << boolalpha << x << endl;
}
