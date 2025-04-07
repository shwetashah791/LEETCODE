class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n,1);

    //first pass: calculate prefix products;
    int prefix=1;
    for(int i=0;i<n;++i){
        answer[i]=prefix;
        prefix*=nums[i];
    }

    //second pass:calculate suffix products and multiply into answer
    
    int suffix=1;
    for(int i=n-1;i>=0;--i){
        answer[i]*=suffix;
        suffix*=nums[i];
    }
    return answer;
    }

};
