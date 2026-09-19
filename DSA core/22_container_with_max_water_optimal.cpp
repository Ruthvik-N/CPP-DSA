# include <iostream>
# include <algorithm>
# include  <vector>
using namespace std;

//time complexity -- 0(n)
int contMaxWater (vector<int>cont, int n){
  int lp = 0,rp = cont.size()-1;
  int maxWater = 0,areaWater = 0;
  int width,height;
  while (lp < rp)
  {
    width = rp - lp; 
    height = min(cont[lp],cont[rp]);
    areaWater = width * height ; 
    maxWater = max(areaWater,maxWater);

    cont[lp] < cont[rp] ? lp++ : rp-- ;

  }
  return maxWater;
}

int main(){
    vector<int>myWt = {2,6,3,7,8,3,5};
    int n = myWt.size();
     cout << "Max water stored is : " << contMaxWater(myWt,n) << endl;
     
 return 0;
}