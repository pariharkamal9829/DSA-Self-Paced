// Rest of the code is already given as Driver Codefrfae

class Solution
{
    public:
    long long minCost(long long arr[], long long n) {
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(long long i=0;i<n;i++)
        pq.push(arr[i]);
    long long sum = 0;  
    while(pq.size() != 1){
        long long one = pq.top();
        pq.pop();
        long long two= pq.top();
        pq.pop();
        pq.push(one+two);
        sum += one+two;
    }
    return sum;  
    }
};



