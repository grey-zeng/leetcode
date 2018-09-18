#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size(), n= matrix[0].size();
        // 直接两个坐标逼近
        int i = 0, j = n-1;
        while (i < m && j >= 0) {
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] > target) j--;
             else i++;
        }
        return false;


        // 两段二分
        int up=0, down=m-1;
        while(up < down) {
            int mid = up + (down-up)/2;
            if (matrix[mid][0] <= target) {
                if (target <= matrix[mid][n-1]) up = down = mid;
                else up = mid + 1;
            } else down = mid - 1;
        }
        if (up != down) return false;
        int left=0, right=n-1;
        while (left < right) {
            int mid = left + (right-left)/2;
            if (matrix[up][mid] == target) return true;
            else if (matrix[up][mid] > target) right = mid-1;
            else left = mid + 1;
        }
        return matrix[up][left] == target; 
    }
};
