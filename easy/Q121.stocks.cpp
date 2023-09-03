
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
	{
        int i = 0;

		i = 0;
		int lowest = prices[0];
		int length = prices.size();
		while (i < length)
		{
			if (prices[i] < lowest)
				lowest = prices[i];
			i++;
		}
		i = 0;
		int lowestIndex = 0;
		while (i < length)
		{
			if (prices[i] == lowest)
			{
				lowestIndex = i;
				break ;
			}
			i++;
		}
		i = lowestIndex;
		if ((lowestIndex + 1) == length )
			return (0);
		i++;
		int highestValue = prices[i];
		i++;
		while (i < length)
		{
			if (prices[i] > highestValue)
				highestValue = prices[i];
			i++;
		}
		return (highestValue - lowest);
    }
};

//8 7 5 4 6 3 

int main()
{
	// vector<int> prices = {6, 8, 4, 11};
	// vector<int> prices = {8, 6, 1, 4};//8 6 4 1- i 3 //4
	// vector<int> prices = {7,6,4,3,1};
	vector<int> prices = {7,1,5,3,6,4};
	Solution A;
	int i = 0;

	i = A.maxProfit(prices);
	std::cout << i << std::endl;

}
