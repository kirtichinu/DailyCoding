//merge sorted array
//merge two sorted arrays without extra space

#include<iostream>
#include<vector>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(m + n);

        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                merged[k++] = nums1[i++];
            } else {
                merged[k++] = nums2[j++];
            }
        }

        while (i < m) {
            merged[k++] = nums1[i++];
        }
        while (j < n) {
            merged[k++] = nums2[j++];
        }
        for (i = 0; i < m + n; i++) {
            nums1[i] = merged[i];
        }
    }
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3;
    int n = 3;

    merge(nums1, m , nums2, n);
    cout<<"merged array = ";
    for(int i=0 ; i< m+n ; i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    return 0;
}