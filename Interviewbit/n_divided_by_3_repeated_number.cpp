int Solution::repeatedNumber(const vector<int> &arr) {
    int count1 = 0, count2 = 0; 
    int first=INT_MAX ,second=INT_MAX    ; 
    int n=arr.size();
    for (int i = 0; i < n; i++) { 
  
        if (first == arr[i]) 
            count1++; 
        else if (second == arr[i]) 
            count2++; 
        else if (count1 == 0) { 
            count1++; 
            first = arr[i]; 
        } 
        else if (count2 == 0) { 
            count2++; 
            second = arr[i]; 
        } 
        else { 
            count1--; 
            count2--; 
        } 
    } 
  
    count1 = 0; 
    count2 = 0; 
  
    for (int i = 0; i < n; i++) { 
        if (arr[i] == first) 
            count1++; 
  
        else if (arr[i] == second) 
            count2++; 
    } 
  
    if (count1 > n / 3) 
        return first; 
  
    if (count2 > n / 3) 
        return second; 
  
    return -1; 
}
