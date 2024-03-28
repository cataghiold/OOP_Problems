#include <iostream>

using namespace std;

class forma
{
  float raza;
public:
    forma ();
  float aria (float);
  float aria (float,float);
};
forma::forma ()
{
  float aria = 0;
}

float
forma::aria (float r)
{
  raza = r;
  return (3.14 * raza * raza);
}
float
forma::aria (float L, float l)
{
    return(L*l);    
}

int
main (void)
{
  forma c;
  float x,a,b;
  cin >> x >> a >> b;
  cout << "Aria cercului este = " << c.aria (x) << endl;
  cout << "Aria dreptunghiului este = " << c.aria (a,b) << endl;
}
