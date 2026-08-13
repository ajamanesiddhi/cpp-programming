#include<iostream>
using namespace std;
class Circle
{
    public:
    float radius;
    void accept()
    {
        cout<<"Enter radius:";
        cin>>radius;
}
void calculate()
{
    float area,circumference;
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    cout<<"Area="<<area<<endl;
    cout<<"circymference="<<
    circumference<<endl;
}
};
int main()
{
    Circle c;
    c.accept();
    c.calculate();
    return 0;
}