#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();  
        for (int i=0; i<n; i++) {
            if (cost[i] > gas[i]) continue;
            int res = gas[i] - cost[i];
            for (int j=(i+1)%n; j!=i && res>=0; j=(j+1)%n) {
                res += (gas[j] - cost[j]);     
            }
            if (res >= 0) return i;
        }
        return -1;
    }

    int canCompleteCircuit_simple(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total(0), subsum(INT_MAX), start(0);
        for(int i = 0; i < n; ++i){
            total += gas[i] - cost[i];
            // 这里就是最巧妙的地方
            if(total < subsum) {
                subsum = total;
                start = i + 1;
            }
        }
        return (total < 0) ?  -1 : (start%n); 
    }
};
