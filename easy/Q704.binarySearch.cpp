
#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
	public:
		int search(vector<int>& nums, int target) 
		{
			int left = 0;
			int end = nums.size() - 1;
			int mid = (left + end) / 2;

			if (end == 0 && nums[0] == target)
				return (0);
			if (end == 1) 
			{
				if (nums[0] == target)
					return (0);
				if (nums[1] == target)
					return (1);
			}
			if (end == 2) 
			{
				if (nums[0] == target)
					return (0);
				if (nums[1] == target)
					return (1);
				if (nums[2] == target)
					return (2);
			}
			while (left <= end)
			{
				if (target < nums[mid])
				{
					end = mid - 1;
					mid = (left + end) / 2;
				}
				else if (target > nums[mid])
				{
					left = mid + 1;
					mid = (left + end) / 2;
				}
				else if (target == nums[mid])
					return (mid);
			}
			return (-1);
		}
};

int main()
{
	vector<int> nums = {-1, 0, 3, 5, 9, 12, 15};
	// vector<int> nums = {5, 6, 7};
	int target = 9;
	int result;

	Solution A;
	result = A.search(nums, target);
	std::cout << "Result: " << result << std::endl;
}

/* Notes */
/**
 * @brief The while loop can only handle 4 or more numbers and above
 * Hence we need to hard code when there are only 1, 2 or 3 elements
 * Using this code for my Ford-Johnson algorithm too 
 */
