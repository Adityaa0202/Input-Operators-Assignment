// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
using namespace std;
int main(){
   float pi =3.142;
   float r,h;
   cout<<"Enter value of radius:"<<endl;
   cin>>r;
   cout<<"Enter value of height:"<<endl;
   cin>>h;
   float vc= pi*r*r*h;
   cout<<"volume of the cylinder:"<<vc;


}