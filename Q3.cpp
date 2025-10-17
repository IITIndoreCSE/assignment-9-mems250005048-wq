include <iostream>
using namespace std;
struct Point{
flooat x;
float y;
};
int main(){
  Point points[7];
  int a=0;
for(int i =1,i<8, i++){
  cout<<"Point "<<i;
  for(int i=0;i<7;i++){
cin>>points[i];
}
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
