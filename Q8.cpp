#include<iostream>
using namespace std;
int main(){
float rate,time, principal,interest;
cout<<"Enter the rate:";
cin>>rate;
cout<<"Enter the time:";
cin>>time;
cout<<"Enter the principal:";
cin>>principal;
interest=(principal*rate*time /100);
cout<<interest;
}
