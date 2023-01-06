/*
1833. Maximum Ice Cream Bars
Medium

It is a sweltering summer day, and a boy wants to buy some ice cream bars.

At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as possible. 

Return the maximum number of ice cream bars the boy can buy with coins coins.

Note: The boy can buy the ice cream bars in any order.
*/

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int i, n = costs.size(), sum = 0;
    for(i = 0; i < n; i++){
        sum += costs[i];
        if(sum > coins){
            break;
        }
    }
    return i;
} 
