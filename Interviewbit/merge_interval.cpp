/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool cmp(Interval a,Interval b) {
    if(a.start!=b.start) {
        return a.start<=b.start;
    }
    else {
        return a.end<=b.end;
    }
}
 
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> res;
    sort(A.begin(),A.end(),cmp);
    res.push_back(A[0]);
    for(int i=1;i<A.size();i++) {
        if(res[res.size()-1].end<A[i].start) {
            res.push_back(A[i]);
        }
        else {
            res[res.size()-1].end=max(res[res.size()-1].end,A[i].end);
        }
    }
    
    return res;
}
