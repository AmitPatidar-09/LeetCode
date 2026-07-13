class KthLargest {
public:
    int x;
    priority_queue<int, vector<int>, greater<int>> pq;

    KthLargest(int k, vector<int>& nums) {
        x = k;

        for(int x : nums) {
            pq.push(x);

            if(pq.size() > k)
                pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);

        if(pq.size() > x)
            pq.pop();

        return pq.top();
    }
};