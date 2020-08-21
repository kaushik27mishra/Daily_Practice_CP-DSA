class Solution {
public:
    string toGoatLatin(string S) {
        string result;
        string append = "maa", w;
        istringstream line(S);
        while (line >> w) {
            if (!isVowel(w[0])) {
                w += w[0];         
                w.erase(0, 1);     
            }
            w += append;           
						
            result += w + " ";     
            append += 'a';         
        }
        result.erase(result.size()-1, 1); 
        return result;
    }
    
    bool isVowel(char s) 
    {
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'
          || s=='A' || s=='E' || s=='I' || s=='O' || s=='U')
            return true;
        return false;
    }
};