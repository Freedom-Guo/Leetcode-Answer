class Solution {
public:
    string replaceSpaces(string S, int length) {
        string result;
        for(int i=0; i<length; i++){
            if(S[i]!=' ')
                result += S[i];
            else
                result += "%20";
        }
        return result;
    }
};
