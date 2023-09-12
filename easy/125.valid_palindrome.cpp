
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
				if (isalnum(s[i])) //cannot equal 1 because it returns non-zero value
					after_trim.push_back(s[i]);
				i++;
			}
			len = after_trim.length();
			i = 0;
			int end = len - 1;
			while (i < len)
			{
				if (tolower(after_trim[i]) != tolower(after_trim[end]))
 					return (false);
				i++;
				end--;
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
