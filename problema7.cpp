#include <iostream>

using namespace std;

class Masina
{
public:
  double pret, autonomie;
    Masina ()
  {
    pret = 0;
    autonomie = 0;
  }
  Masina (double p, double a)
  {
    pret = p;
    autonomie = a;
  }
};

class Baterie
{
public:
  double capacitate, durata;
    Baterie ()
  {
    capacitate = 0;
    durata = 0;
  }
  Baterie (double c, double d)
  {
    capacitate = c;
    durata = d;
  }
};

class MasinaElectrica:public Masina, public Baterie
{
public:
  double pretMasina ()
  {
    return pret + durata * 12;
  }
  double autonomieMasina ()
  {
    return (capacitate * durata) / 100;
  }
};

int
main ()
{
  MasinaElectrica m;
  cin >> m.pret >> m.autonomie >> m.capacitate >> m.durata;
  cout << m.pretMasina () << endl << m.autonomieMasina ();
  return 0;
}
