#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
  void getStudentInfo ();
  void printStudentInfo ();
protected:
    string nume, facultate;
  int medie;
};
class Absolvent:public Student
{
public:
  void getAbsolventInfo ();
  void printAbsolventInfo ();
private:
    bool licenta;
};
void
Student::getStudentInfo ()
{
  cin >> nume >> facultate >> medie;
}

void
Absolvent::getAbsolventInfo ()
{
  try
  {
    if (medie >= 6)
      {
	licenta = true;
      }
    else
      {
	licenta = false;
      }
  }
  catch (const char *err)
  {
    cerr << err << endl;
    exit (-1);
  }
}

void
Student::printStudentInfo ()
{
  cout << "Medie " << medie << endl;
}

void
Absolvent::printAbsolventInfo ()
{
  if (licenta && facultate == "ETTI")
    {
      cout << "DA" << endl;
    }
  else
    {
      cout << "NU" << endl;
    }
}

int
main ()
{
  Absolvent A;
  A.getStudentInfo ();
  A.getAbsolventInfo ();
  A.printAbsolventInfo ();
  return 0;
}
