class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for(int n : nums){
            if(count.find(n) == count.end()){
                count.insert({n,1});  //Insert the element if it doesn't exist
            }   
            else{
                count[n] += 1;   //if the element exists, increment it's count value
            }
            if(count[n] > nums.size()/2) return n;
        }
        return -1;
    }
};
