class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,candidate=0;

        //boyer-Moore Voting Algorithm
        for(int num:nums){
            if(count==0){
                candidate=num;
            }
            count+=(num==candidate)?1:-1;
        }
        return candidate;
    }
};