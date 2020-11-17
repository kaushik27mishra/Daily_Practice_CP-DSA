class Solution {
private:
    vector<int> vi, vo;
    
public:
    
    Solution(vector<int> nums) {
        vi = vo = nums;
    }

    vector<int> reset() {
        return vi = vo;
    }

    vector<int> shuffle() {
        int i = 0, j = 0;
        for (i = vi.size() - 1; i > 0; --i) {
            j = rand() % (i + 1);
            swap(vi[i], vi[j]);
        }
        return vi;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */