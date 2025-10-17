#include <iostream>
using namespace std;
struct Point{
float x;
float y;
};
int main(){
  Point points[7];
  int a=0;
for(int i =0;i<7;i++){
  cout<<"Point "<<i+1<<" x: ";
  cin>>points[i].x;
  
  cout<<"Point "<<i+1<<" y: ";
  
cin>>points[i].y;



}
for(int i=0;i<7;i++){
if(points[i].x >0 && points[i].y > 0){
a+=1;
}
else{
a+=0;
}
}
cout<<"Number of points in first quadrant: "<<a;
return 0;
}
