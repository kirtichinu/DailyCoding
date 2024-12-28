//jump game

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_ind = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (i > max_ind) {
                return false;
            }
            max_ind = max(max_ind, i + nums[i]);
            if(max_ind >= nums.size()-1)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {2,3,1,0,4};
    vector<int> nums2 = {3,2,1,0,4};

    cout<<(solution.canJump(nums1)? "can jump": "cannot jump")<<endl;
    cout<<(solution.canJump(nums2)? "can jump": "cannot jump")<<endl;

    return 0;
}