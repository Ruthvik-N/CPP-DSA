# include <iostream>
# include  <algorithm>
# include <vector>
using namespace std;

int maxProfitStock(vector<int> &price ){
  int bestBuy = price[0] , maxProfit = 0;

  for (int i = 1; i < price.size(); i++)
  {
    if (price[i] > bestBuy)
    {
       maxProfit = max(maxProfit,price[i]- bestBuy);
    }
    bestBuy = min(bestBuy, price[i]);
  }
  return maxProfit;
}


int main(){
   vector<int>mystock = {2,5,8,1,5,7,4};
    cout<< "Maximum profit that can be earned is : " <<  maxProfitStock(mystock) <<endl;
    return 0;
}

