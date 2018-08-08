#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> rightV;
        // 找到一个有序队列
        rightV.push_back(height.size()-1);
        for (int j=height.size()-2; j>=0; j--) {
            if (height[j] > height[rightV[rightV.size()-1]]) {
                rightV.push_back(j);
            }
        }
        cout << endl << rightV.size() << endl;           
        int res = (height.size()-1) * min(height[0], height[height.size()-1]); 
        int left = 0, right = height.size()-1;
        while (left < right) { 
            // 递归缩减右队列
            for (int rightIndex: rightV) {
                res = max(res, (rightIndex - left) * min(height[rightIndex], height[left]));
                if (height[rightIndex] > height[left]) break;
            }
            // 缩减左起始坐标
            int prevLeft = height[left];
            while (left < right && height[left] <= prevLeft) {
                left++;
            }
            cout << left << endl;
        }
        
        return res; 
    }

    int maxArea_simple(int[] height)  {
        int maxarea = 0, l = 0, r = height.length - 1;
        while (l < r) {
            maxarea = Math.max(maxarea, Math.min(height[l], height[r]) * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxarea;
    }
};
