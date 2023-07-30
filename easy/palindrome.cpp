
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
		
		std::string words = std::to_string(x);
		int i = 0;
		int length = 0;
		int mid = 0;
		length = words.length();
		if (words[0] == '-')
			return (false);
		if (length % 2 == 0) //even number
		{
			mid = length / 2; 
			while (i < mid)
			{
				if (words[i] != words[length -1])
					return (false);
				i++;
				length = length - 1;
			}
			return (true);
		}
		//odd number 123 4 321 = 7+1/2=4 
		mid = (length + 1) / 2;
		i = 0;
		while (i < mid)
		{
			if (words[i] != words[length -1])
				return (false);
			i++;
			length = length - 1;
		}
		return (true);
    }
};

int main()
{
	int x = 123;
	std::string words = std::to_string(x);
	std::cout << words << std::endl;
	int length = words.length();
	std::cout << length << std::endl;
	int y = 0;
	Solution A;
	if (A.isPalindrome(y) == false)
		std::cout << "Is not a palindrome" << std::endl;
	else
		std::cout << "Is a palindrome" << std::endl;
}