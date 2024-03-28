
#include <iostream>

using namespace std;
class Polinom {
 int grad;
 int *coef;
 public:
 Polinom(int n);
 Polinom(Polinom& P);
 ~Polinom()
 { 
     delete[] coef; 
     
 };
 int operator[] (int i) const 
 {
 return ((0<=i && i<=grad) ? coef[i] : 0);
 };
 Polinom& operator +(Polinom& P);
 friend Polinom& operator*(Polinom& P1, Polinom& P2);
 friend istream& operator>> (istream& is, Polinom& P);
 friend ostream& operator<< (ostream& os, Polinom& P);
};
Polinom::Polinom(int n) {
grad = n; coef = new int[n + 1];
}
 
Polinom::Polinom(Polinom& P) {
 grad = P.grad;
 coef = new int[grad + 1];
 for (int i = 0; i <= grad; i++)
 coef[i] = P.coef[i];
}

int max(int x, int y) {
 return ((x > y) ? x : y);
}


Polinom& Polinom::operator +(Polinom& P) {
 Polinom *T;
 int i;
 T = new Polinom(max(grad, P.grad));
 for (i = 0; i <= T->grad; i++)
 T->coef[i] = (*this)[i] + P[i];
 for (i = T->grad; i >= 0 && !T->coef[i]; i--);
 T->grad = i;
 return *T;
}

Polinom& operator *(Polinom& P1, Polinom& P2) {
 int i,j;
 Polinom *r;
    r=new Polinom(P1.grad+P2.grad);
	for (i=0;i<=P1.grad;i++)
	 for(j=0;j<=P2.grad;j++) 
		 r->coef[i+j]+=P1.coef[i]*P2.coef[j];
	return *r;
}

istream& operator >> (istream& is, Polinom& P){
 for (int i = 0; i <= P.grad; i++) {
 is >> P.coef[i];
 }
 return is;
}

ostream& operator<< (ostream& os, Polinom& P) {
 for (int i = P.grad; i >= 0; i--)
 if (P.coef[i]) {
     if (i != P.grad)
 os << ((P.coef[i] > 0) ? '+' : ' ');
 os << P.coef[i] << "*x^" << i;
 }
 os << endl;
 return os;
}
int main() {
 int x,y;
 cin>>x;
 Polinom p1(x);
 cin >> p1;
 cin>>y;
 Polinom p2(y);
 cin >> p2;
 Polinom  buff=p1+p2;
 cout <<buff;
 Polinom inm=p1*p2;
 cout<<inm;
}