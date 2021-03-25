class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        int char1[26]={0}, char2[26]={0};
        if(s1.length()!=s2.length())
            return false;
        for(int i=0; i<s1.length(); i++){
            char1[s1[i]-'a'] += 1;
        }
        for(int i=0; i<s2.length(); i++){
            char2[s2[i]-'a'] += 1;
        }
        for(int i=0; i<26; i++)
            if(char1[i]!=char2[i])
                return false;
        return true;
    }
};
