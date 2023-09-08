
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
	{
		int max = INT_MIN;
		int answer = 0;
		int size = 0;
		
		size = prices.size();
		size--;
		while (size >= 0)
		{
			if (prices[size] > max)
				max = prices[size];
			else
			{
				if (max - prices[size] > answer)
					answer = max - prices[size];
			}
			size--;
		}
		return (answer);
	}
};

//8 7 5 4 6 3 

int main()
{
	// vector<int> prices = {6, 8, 4, 11};
	// vector<int> prices = {8, 6, 1, 4};//8 6 4 1- i 3 //4
	// vector<int> prices = {7,6,4,3,1};
	vector<int> prices = {1,2};
	Solution A;
	int i = 0;

	i = A.maxProfit(prices);
	std::cout << i << std::endl;
}
