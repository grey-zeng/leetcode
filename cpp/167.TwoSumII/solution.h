#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lo=0, hi=numbers.size()-1;
        while (lo<=hi) {
            int sum = numbers[lo] + numbers[hi];
            if (sum == target) return vector<int>({lo+1, hi+1});
            else if (sum < target) lo ++;
            else hi--;
        }
        return vector<int>();
    }


    vector<int> twoSum_search(vector<int>& numbers, int target) {
        vector<int> res;
        for (int i=0; i<numbers.size(); i++) {
            int j = search(numbers, target-numbers[i]);
            if (j>0 && j!=i) {
                res.push_back(min(i,j)+1);
                res.push_back(max(i,j)+1);
                return res;
            }
        }
        return res;
    }
private:
    int search(vector<int>& numbers, int target) {
        int lo=0, hi=numbers.size()-1;
        while (lo <= hi) {
            int mid = lo + (hi-lo)/2;
            if (numbers[mid] == target) return mid;
            else if (numbers[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};
