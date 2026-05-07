#include<iostream>
using namespace std;
int main(){
int Math_marks,Chemistry_marks,Physics_marks,English_marks;
cout<<"Enter the Math marks:";
cin>>Math_marks;

cout<<"Enter the Chemistry marks:";
cin>>Chemistry_marks;

cout<<"Enter the Physics marks:";
cin>>Physics_marks;

cout<<"Enter the English marks:";
cin>>English_marks;

int percentage= (Math_marks+Chemistry_marks+Physics_marks+English_marks)/4;


cout<<"Total percentage"<<percentage<<endl;


}
