#include <iostream>
using namespace std;
struct SalesRecord{
string month;
float amount;
};
int main(){
  SalesRecord sales[12];
cout<<"Enter sales data for each month: ";

for(int i= 0;i<12;i++){
cout<<"Month "<<i+1<<" name: ";
cin>>sales[i].month;
cout<<"Sales Amount: ";
cin>>sales[i].amount;
}
for(int i=0;i<12;i++){
  for(int j=i+1;j<12;j++){
    if(sales[i].amount>sales[j].amount){
       int maxsales = sales[i].amount;
      string maxmonth = sales[i].month;
    }
  }
for(int i=0;i<12;i++){
  for(int j=i+1;j<12;j++){
    if(sales[i].amount<sales[j].amount){
       int minsales = sales[i].amount;
      string minmonth = sales[i].month
    }
  }
cout<<"Month with maximum sales: "<<maxmonth<<" with "<<maxsales<<" amount";
cout<<"Month with minimum sales: "<<minmonth<<" with "<<minsales<<" amount";
return 0;
}








