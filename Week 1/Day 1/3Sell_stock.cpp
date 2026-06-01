#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mincost=prices[0];
        int maxprofit=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]<mincost){
                mincost=prices[i];
            }else{
                profit=prices[i]-mincost;
            }
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};