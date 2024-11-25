/*Print the sum, difference, and product of two complex numbers 
by creating a class named  Complex ; with separate functions for 
each operation whose real and imaginary parts are entered by the user.*/
#include<iostream>
#include<cmath>
using namespace std;
class complex
{
    private:
    double real,imag;
    public:
    complex(double r=0,double i=0):real(r),imag(i){}
    complex add(const complex&other)
    {
        return complex(real + other.real,imag + other.imag);
    }
    complex subtract(const complex & other)
    {
        return complex(real - other.real,imag - other.imag);

    }
    complex muultiply(const complex&other)
    {
        return complex(real*other.real - imag*other.imag,real*other.imag + imag*other.real);
    }
    void display()const
    {
        cout<<real;
        if(imag>=0)
        {
            cout<<" + "<<imag<<"i"<<endl;
        }
        else{
            cout<<" - "<<-imag<<"i"<<endl;
        }
    }
};
int main()
{
    double real1,real2,imag1,imag2;
    cout<<"Enter the real part of first complex number= ";
    cin>>real1;
    cout<<"Enter the imagenary part of first complex number ";
    cin>>imag1;
    complex num1(real1,imag1);
    cout<<"Enter the real part of second complex number= ";
    cin>>real2;
    cout<<"Enter the imagenary part of second complex number ";
    cin>>imag2;
    complex num2(real2,imag2);
    complex sum =num1.add(num2);
    complex difference = num1.subtract(num2);
    complex product = num1.muultiply(num2);
    cout<<"\n sum";
    sum.display();
    cout<<"Diffrernce:";
    difference.display();
    cout<<"product:";
    product.display();
    return 0;
}