// Rest of the code is already given as Driver Code

#include <vector>
#include <queue>

using namespace std;

struct Compare {
    bool operator()(const vector<int>& p1, const vector<int>& p2) {
        return p1[0] > p2[0];
    }
};

class Solution {
public:
    vector<int> mergeKArrays(vector<vector<int>>& arr, int K) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq;
        vector<int> indices(K, 0);  // Keep track of the current index for each array
        
        for (int i = 0; i < K; i++) {
            pq.push({arr[i][0], i, 0});
        }
        
        vector<int> ret;
        while (!pq.empty()) {
            vector<int> m = pq.top();
            pq.pop();
            
            int value = m[0];
            int arrayIndex = m[1];
            int currentIndex = m[2];
            
            ret.push_back(value);
            
            if (currentIndex + 1 < K) {
                pq.push({arr[arrayIndex][currentIndex + 1], arrayIndex, currentIndex + 1});
            }
        }
        
        return ret;
    }
};
