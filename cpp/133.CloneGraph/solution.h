#include "../util/graph.h"
#include <map>

class Solution {
public:
    // 使用dfs解法，深度遍历
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if (!node) return NULL;
        if (mp.find(node) == mp.end()) {
            mp[node] = new UndirectedGraphNode(node->label);
            for (auto neigh: node->neighbors)
                mp[node]->neighbors.push_back(cloneGraph(neigh));
        }
        return mp[node];
    }
private:
    map<UndirectedGraphNode*, UndirectedGraphNode*> mp;
};
