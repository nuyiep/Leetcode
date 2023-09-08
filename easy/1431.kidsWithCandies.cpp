
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        std::vector<int>::iterator it;
        std::vector<bool> boolOutput;
        int largest = 0;

        for (it = candies.begin(); it != candies.end(); it++)
        {
            if (*it > largest)
                largest = *it;
        }
        for (it = candies.begin(); it != candies.end(); it++)
        {
            if ((*it + extraCandies) < largest)
                boolOutput.push_back(false);
            else
                boolOutput.push_back(true);
        }
        return (boolOutput);
    }
};

int main()
{
	Solution A;
	vector<int> candies = {2,3,5,1,3};
	vector<bool>::iterator it;
	vector<bool> boolOutput = A.kidsWithCandies(candies, 3); 
	for (it = boolOutput.begin(); it != boolOutput.end(); it++)
		std::cout << std::boolalpha << *it << ' ';
	
	std::cout << std::endl;
}
