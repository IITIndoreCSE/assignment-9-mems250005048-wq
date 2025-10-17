#include <iostream>
using namespace std;
struct Color{
int red;
int green;
int blue;
};
int main(){
  Color colors[5];
colors[0]={128,0,0};
colors[1]={128,128,0};
colors[2]={0,128,0};
colors[3]={128,0,128};
colors[4]={255,255,0};
for(int i=0;i<3;i++){
colors[i].red=255;
colors[i].green=255;
colors[i].blue=255;
}
for(int i=0;i<5;i++){
cout<<"Red: "<<colors[i].red<<" Green: "<<colors[i].green<<" Blue: "<<colors[i].blue<<endl;
}
return 0;
}
