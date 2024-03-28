#include <iostream>
#include <iomanip>
using namespace std;

class figura_geometrica {
public:
double L,l,R;
figura_geometrica()
{
L = 0;
l=0;
R=0;
}
virtual void get(double L1,double l1,double r)
{
L = L1;
l=l1;
R=r;
}
virtual double getArie() = 0;

virtual double getPerimetru()=0;
};

class Dreptunghi :public figura_geometrica{
public :
    double L,l;

    void get(double L1,double l1,double r)override
    {
        L=L1;
        l=l1;
    }

    double getArie()override
    {
      return L*l;
    }

    double getPerimetru()override
    {
        return 2*(L+l);
    }
};


class Cerc :public figura_geometrica {
public:
double R;

void get(double L1,double l1,double r)override
{

R= r;

}

double getArie()override
{
return 3.14159265359*R*R;
}

double getPerimetru()override
{
   return 2*3.14159265359*R;
}


};

int main()
{

double L2,l2,r2;
cin >> r2>>l2>>L2;
Cerc c;
Dreptunghi d;
d.get(L2,l2,r2);
c.get(L2,l2,r2);
cout<<fixed<<setprecision(2);
cout<<c.getPerimetru();cout<<endl;
cout<<c.getArie();cout<<endl;
cout<<d.getPerimetru();cout<<endl;
cout<<d.getArie();



}