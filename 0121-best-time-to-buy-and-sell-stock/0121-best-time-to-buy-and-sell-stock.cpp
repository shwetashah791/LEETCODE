class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX; //Initialize minprice to a large value
        int maxProfit=0;   //Initialize max profit to 0
        for(int price:prices){
            if(price<minPrice){
                minPrice=price;  //Update min price if lower price id found

            }
            else if(price-minPrice>maxProfit){
                maxProfit=price-minPrice; //Update max profit if a higher profit is found
            }
        }
        return maxProfit;
    }
};