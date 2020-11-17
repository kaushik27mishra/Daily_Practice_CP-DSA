class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxOfLeft[n];
        int minOfRight[n];
        maxOfLeft[0]=arr[1];
        for(int i=1;i<n;i++) {
            maxOfLeft[i]=max(maxOfLeft[i-1],arr[i]);
        }
        
        minOfRight[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--) {
            minOfRight[i]=min(minOfRight[i+1],arr[i]);
        }
        
        int res=0;
        for(int i=0;i<n;i++) {
            if(maxOfLeft[i]<=minOfRight[i])
                res++;
        }
        return res+1;
    }
};