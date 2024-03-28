#include <iostream>
using namespace std;

class Complex
{
  
float re, im;

public:
Complex ()
  {				
    re = 0.0;
    
im = 0.0;
  
} 
Complex (float r, float i)
  {				
    re = r;
    
im = i;
  
} 
Complex (Complex & obj)
  {				
    re = obj.re;
    
im = obj.im;
  
} 
  void print ();
  
friend Complex operator- (Complex, Complex);
friend Complex operator* (Complex, Complex);
friend Complex operator/ (Complex, Complex);
  ~Complex ()
  {
  }				
};


void
Complex::print ()
{
    if(im!=1)
  
cout << re << "+ i" << im << endl;

else 
cout << re << "+ i"<<endl;

} 

Complex operator- (Complex x, Complex y) 
{
  
Complex z;
  
z.re = x.re - y.re;
  
z.im = x.im - y.im;
  
return z;

}

Complex operator* (Complex c1, Complex c2) 
{
  
Complex tmp;
  
tmp.re = (c1.re * c2.re) - (c1.im * c2.im);
  
tmp.im = (c1.re * c2.im) + (c2.re * c1.im);
  
return tmp;

}

Complex operator/ (Complex c1, Complex c2)
{
  
Complex tmp;
  
tmp.re = (c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im);
  
tmp.im = (c1.im * c2.re - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im);
  
return tmp;

}

int
main ()
{
float a,b,c,d; 
cin>>a>>b>>c>>d;
Complex c1(a,b);	
  Complex
  c2(c,d);			
  Complex
    c3;				
  Complex
    c4;
    Complex
    c5;				
  Complex
    c6;
    
  
  
c4 = c1 - c2;

c5 = c1 * c2;

c6 = c1 / c2;
  
c4.print ();
c5.print ();
c6.print ();
  
return 0;

}
