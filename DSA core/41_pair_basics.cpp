# include <iostream>
# include <vector>
using namespace std;


int main(){
vector<pair<int,char>> studentInfo = {
   {32,'a'},
   {38,'b'},
   {40,'c'},
   {34,'d'},
};
   studentInfo.emplace_back(37,'e');

   for( auto ch : studentInfo){

    cout  << "Student roll no is : " << ch.first << endl;
    cout  << "Student section is : " << ch.second << endl;
   }

return 0;
}
  
