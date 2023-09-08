
#include <iostream>
#include <vector>

class Solution 
{
	public:
		std::vector<int> twoSum(std::vector<int>& nums, int target)
		{
			int size = nums.size();;
			int i = 0;
			int j = 0;
			
			while (i < (size - 1))
			{
				j = i + 1;
				while (j < size)
				{
					if (nums[i] + nums[j] == target)
						return {i, j};
					j++;
				}
				i++;
			}
			return {};
		}
};

int main()
{
	int arrayNum[] = {9, 8, 15};
	int x = sizeof(arrayNum) / sizeof(arrayNum[0]);
	std::cout << x << std::endl;

	
	std::vector<int> nums = {2, 4, 1, 8, 9};
	int target = 5;
	Solution A;
	std::vector<int> result = A.twoSum(nums, target);
	if (result.size() == 2)
		std::cout << "Indices: " << result[0] << ", "
			<< result[1] << std::endl;
	else
		std::cout << "Np two numbers found that add up to the target." << std::endl;
	return (0);
}