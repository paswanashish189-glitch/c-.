#include<iostream>
using namespace std;
int main(){
float bs,DA,HRA,otherAllowances,grosssalary;
cout<<"Enter the basic salary:";
cin>>bs;
DA=(bs/100)*40;
HRA=(bs/100)*20;
otherAllowances=(bs/100)*10;
grosssalary=bs+DA+HRA+otherAllowances;
cout<<"\n"<<grosssalary;



}
