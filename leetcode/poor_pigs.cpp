class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int pigs = 0;
        int x = (minutesToTest/minutesToDie) + 1;
        while(pow(x,pigs)<buckets) {
            pigs+=1;
        }
        return pigs;
    }
};