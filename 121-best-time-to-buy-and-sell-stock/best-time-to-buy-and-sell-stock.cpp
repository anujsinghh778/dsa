class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=i+1;
        int profit = 0;
        int maxprofit = 0; 
        while(j<prices.size()){
            profit=prices[j]-prices[i];
            maxprofit=max(profit,maxprofit);
            if(profit<=0){
                i=j;
                j++;
            }
            else{
                j++;
            }
        }
        return maxprofit;
    }
};
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int i = 0;
//         int maxprofit = 0;

//         for(int j = 1; j < prices.size(); j++) {
//             if(prices[j] < prices[i]) {
//                 i = j;
//             }
//             else {
//                 maxprofit = max(maxprofit, prices[j] - prices[i]);
//             }
//         }

//         return maxprofit;
//     }
// };