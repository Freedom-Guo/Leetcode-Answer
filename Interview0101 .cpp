class Solution {
public:
    bool isUnique(string astr) {
        int char_[26]={0};
        for(int i=0; i<astr.length(); i++)
        {
            char_[astr[i]-'a'] += 1;
        }
        for(int i=0; i<26; i++)
            if(char_[i]>1)
                return false;
        return true;
    }
};
