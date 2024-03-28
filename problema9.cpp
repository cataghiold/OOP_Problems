#include <iostream>

using namespace std;

class Poligon_Regulat {
 public:
 double b,h;
 Poligon_Regulat()
 {
     b=0;
     h=0;
 }
void get(double baza, double inaltime)
 {
     b=baza;
     h=inaltime;
 }
 
};


class Triunghi: public Poligon_Regulat {
    public:
 double arie_tr()
    {
        return b*h/2;
    }
};


class Dreptunghi: public Poligon_Regulat {
    public:
 double arie_dr()
    {
        return b*h;
    }
};
int main () {
 double baza, inaltime;
 cin>>baza>>inaltime;
 Triunghi t;
 Dreptunghi d;
  Poligon_Regulat *q=&d;
 q->get(baza, inaltime);
  cout<<d.arie_dr()<<endl;
 Poligon_Regulat *p=&t;
 p->get(baza,inaltime);
 cout<<t.arie_tr()<<endl;

 
}