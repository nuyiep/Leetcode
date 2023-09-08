
#include <iostream>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int size = nums.size();
		// std::cout << size << std::endl;
		sort(nums.begin(), nums.end());
		auto i = 0;
		while ((i + 1)< size)
		{
			if (nums[i] == nums[i + 1])
				return (true);		
			// std::cout << nums[i] << std::endl;
			i++;
		}
		return (false);
	}
};

int main()
{
	Solution A;
	int x[] = {1,1,1,3,3,4,3,2,4,2}; //0 is false, 1 is true
	std::vector<int>vec_x(x, x + sizeof(x) / sizeof(x[0])); 
	bool result = A.containsDuplicate(vec_x);
	std::cout  << std::boolalpha << result << std::endl;
	return (0);
}


