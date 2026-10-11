# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

//custom comparator practice in STL
bool myComp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first)  return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(),vec.end(),myComp);

    for (auto nums :vec)
    {
       cout << nums.first << " " << nums.second << endl;
    }
    return 0;
}