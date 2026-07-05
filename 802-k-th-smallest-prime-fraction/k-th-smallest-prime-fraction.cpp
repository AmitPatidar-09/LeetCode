class Solution {
public:
    typedef pair<double,pair<int,int>> pp;
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pp>pq;
        int n = arr.size();
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                pq.push({arr[i]*1.0 / arr[j], {arr[i],arr[j]}});

                if(pq.size() > k)
                pq.pop();
            }
        }

        auto x = pq.top().second;
        return {x.first,x.second};
    }
};