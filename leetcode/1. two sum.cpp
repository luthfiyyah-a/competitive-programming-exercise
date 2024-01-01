#include <vector>
using namespace std;

// 1 Januari 2024
// by: Luthfiyyah hanifah amari

// Complexity: O(n^2)
// *Not an optimal solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    vector<int> result = {i, j};
                    return result;
                }
            }
        }
        return {-1};
    }
};