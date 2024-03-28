#include<iostream>
#include<math.h>
using namespace std;

class complex 
{
  
  double real;
  
double imag;
  
  public:

    complex (double x = 0, double y = 0);
  
  void afiscomplex ();
  
friend complex operator++ (complex);

};


complex::complex (double x, double y) 
{
  
real = x;
  
imag = y;

} 
void

complex::afiscomplex () 
{
  
if(imag!=1)

cout << real << "+ i" << imag;

else

cout << real << "+ i";

}
complex operator++ (complex x) 
{
  
complex z;
  
z.real =1 + x.real;
  
z.imag = x.imag;
  
return z;

}


int
main (void) 
{
  
double
    x,
    y;
    int i, n;
    
    cin>>n;
  
  cin >> x;
  
  cin >> y;
  
complex z1 (x, y);

for(i=0;i<n;i++)
    z1=++z1;
    
    z1.afiscomplex();
}

