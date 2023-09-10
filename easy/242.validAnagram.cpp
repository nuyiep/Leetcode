
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) 
	{
		int s_len = s.length();
		int t_len = t.length();

		if (s_len != t_len)
			return (false);
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return (s == t);
    }
};
int main()
{
	Solution A;
	string s = "aacc";
	string t = "ccac";
	bool x;
	
	x = A.isAnagram(s, t);
	std::cout << "x: " << x << std::endl;
}
