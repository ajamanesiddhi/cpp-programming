#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
     void input()
     {
        cout<<"Enter real and imagenery part:";
        cin>>real>>imag;
     }
     Complex add(Complex c)
     {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
     }
     Complex sub(Complex c)
     {
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
     }
     void display()
     {
        cout<<real<<"+"<<imag<<"i";
     }
    };
    int main()
    {
        Complex c1,c2,c3;

         c1.input();
         c2.input();

         c3=c1.add(c2);
         cout<<"Addition=";
         c3.display();

        c3=c1.sub(c2);
        cout<<"\nSubstraction=";
        c3.display();

        return 0;
    }


     
