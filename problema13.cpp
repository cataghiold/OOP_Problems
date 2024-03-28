#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
	int pl, pe, rez;
	Student()
	{
		pl = pe = rez = 0;
	}
	void adaugare(int pl1, int pe1, int rez1)
	{
		pl = pl1; pe = pe1; rez = rez1;
	}
};
class Roman : virtual public Student
{
public:
	int plr, per, rezr;
	Roman()
	{
		plr = per = rezr = 0;
	}
	virtual int rezultat1() = 0;
};
class Strain : virtual public Student
{
public:
	int pls, pes, rezs;
	Strain()
	{
		pls = pes = rezs = 0;
	}
	virtual int rezultat2() = 0;
};
class Rezultat : public Roman, public Strain
{
public:
	int rezultat1()
	{
		if (pl + pe >= 50)
			return pl + pe;
		else
			return 0;
	}
	int rezultat2()
	{
		if (rez >= 50)
		{
			if (pl + pe >= 50)
				return pl + pe;
			else
				return 0;
		}
		else
			return 0;
	}
};
int main()
{
	char v[50][15], nume[15], cnp[15];
	int p1, p2, rezz, i = 0, n = 0, a[100] = { 0 }, b[100] = { 0 };
	while (cin >> nume)
	{
		cin >> cnp;
		cin >> p1 >> p2 >> rezz;
		strcpy(v[i], nume);
		n++;
		Rezultat r;
		r.adaugare(p1, p2, rezz);
		if (cnp[0] == '7' || cnp[0] == '8')
			a[i] = r.rezultat2();
		else
			a[i] = r.rezultat1();
		b[i] = r.pe;
		i++;
	}
	for (int j = 0; j < n - 1; j++)
	{
		for (int t = j + 1; t < n; t++)
		{
			if (a[j] < a[t])
			{
				char aux[15];
				strcpy(aux, v[j]);
				strcpy(v[j], v[t]);
				strcpy(v[t], aux);
				int auxx = a[j];
				a[j] = a[t];
				a[t] = auxx;
				int aux2 = b[j];
				b[j] = b[t];
				b[t] = aux2;
			}
		}
	}
	for (int j = 0; j < n - 1; j++)
	{
		for (int t = j + 1; t < n; t++)
		{
			if (a[j] == a[t])
			{
				if (b[j] < b[t])
				{
					char aux[15];
					strcpy(aux, v[j]);
					strcpy(v[j], v[t]);
					strcpy(v[t], aux);
					int auxx = b[j];
					b[j] = b[t];
					b[t] = auxx;
				}
			}
		}
	}
	for (int j = 0; j < n; j++)
		cout << v[j] << endl;
}