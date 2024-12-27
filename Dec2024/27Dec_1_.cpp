//container with most water

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int lp = 0, rp = height.size() - 1;
        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);

            int area = w * ht;
            max_water = max(max_water, area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return max_water;
    }
};

int main(){
    Solution solution;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int result = solution.maxArea(height);

    cout<<"container with most water contains = ";
    cout<<result<<" ";
    cout<<endl;
    return 0;

}