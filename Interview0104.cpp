class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char, int> a;
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(a.find(s[i])!=a.end())
                a[s[i]] += 1;
            else
                a.insert(pair<char, int>(s[i], 1));
        }
        map<char, int>::iterator  it;
        for (it = a.begin(); it != a.end(); ++it){
            if(it->second%2 == 1)
                count += 1;
        }
        return (count<=1);
    }
};
