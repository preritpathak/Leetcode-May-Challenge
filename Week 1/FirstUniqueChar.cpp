class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> count;
        for(int i = 0; s[i] != '\0'; i++){
             if(count.find(s[i]) == count.end()){
                count.insert({s[i],1});  //Insert the element if it doesn't exist
            }   
            else{
                count[s[i]] += 1;
            }
        }
        for(int i = 0; i < s.size() ; i++){
            if(count[s[i]] == 1) return i;
        }
        return -1;
    }
};
