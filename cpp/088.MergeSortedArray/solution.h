#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m+n;
        while(m > 0 || n > 0) {
            while (m > 0) {
                if (n > 0 && nums1[m-1] < nums2[n-1]) break;
                else nums1[--index] = nums1[--m];
            }
            while (n > 0) {
                if (m > 0 && nums2[n-1] < nums1[m-1]) break;
                else nums1[--index] = nums2[--n];
            }
        } 
    }
};
