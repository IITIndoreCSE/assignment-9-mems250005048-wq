#include <iostream>
using namespace std;
struct Item{
int id;
float cost;
};
int main(){
  Item items[6];
items[0]={109,69};
items[1]={100,43.5};
items[2]={110,69.5};
items[3]={150,50.5};
cout<<"Items with cost greater than 50:\n";
for(int i=0;i<6;i++){
if (items[i].cost>50){
cout<<"Item ID: "<<items[i].id<<", Cost: "<<items[i].cost<<endl;
}
}
return 0;
}
