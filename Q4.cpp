#include <iostream>
using namespace std;
struct SalesRecord{
string month;
float amount;
};
int main(){
  SalesRecord sales[12];
  string maxmonth;
  float maxsales;
  string minmonth;
  float minsales;
cout<<"Enter sales data for each month: "<<endl;

for(int i= 0;i<12;i++){
cout<<"Month "<<i+1<<" name: ";
cin>>sales[i].month;
cout<<"Sales Amount: ";
cin>>sales[i].amount;
}
for(int i=0;i<12;i++){
 
    if(sales[i].amount>maxsales){
       maxsales = sales[i].amount;
       maxmonth = sales[i].month;
    }
  
  }
for(int i=0;i<12;i++){
  
    if(sales[i].amount<minsales){
        minsales = sales[i].amount;
       minmonth = sales[i].month;
    
  }
}
cout<<"Month with maximum sales: "<<maxmonth<<" with amount "<<maxsales<<endl;
cout<<"Month with minimum sales: "<<minmonth<<" with amount "<<minsales;
return 0;
}









