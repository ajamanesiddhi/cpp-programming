#include<iostream>
using namespace std;
int main()
{
float length,breadth,area,perimeter;
cout<<"enter length and breadth:";
cin>>length>>breadth;
area=length*breadth;
perimeter=2*(length+breadth);
cout<<"area="<<area<<endl;
cout<<"perimeter="<<perimeter;
return 0;
}
