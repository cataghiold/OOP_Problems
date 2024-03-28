#include <iostream>

using namespace std;

class Biblioteca
{
public:
	long long v[1000], k = 0;
	int nr;
	virtual void GetS(long int x, int k)
	{
		v[k] = x;
	}
	virtual void GetN(int x)
	{
		nr = x;
	}
};

class Manuscrise : virtual public Biblioteca
{
public:
	int aux = 0;
	int i, j;
	void AfisH()
	{
		for (i = nr - k - aux + 1; i >= 0; i--)
		{
			if (v[i] == 7)
				cout << "8 ";
			if (v[i] != 0)
				cout << v[i] << " ";
		}
	}
	void Delet()
	{
		for (i = 0; i < nr - k; i++)
		{
			if (v[i] > 9999)
			{
				k++;
				for (j = i; j < nr; j++)
				{
					v[j] = v[j + 1];
				}
				for (j = i - 1; j < nr - 1; j++)
				{
					v[j] = v[j + 1];
				}
				i = i - 2;
				aux = aux + 2;

			}
		}


	}
};

class Literatura : virtual public Biblioteca
{
public:
	int i, j;
	void AfisH()
	{
		for (i = k; i < nr - k; i++)
		{
			cout << v[i] << " ";
		}
	}
	void Delet()
	{
		for (i = 0; i < nr - k; i++)
		{
			if (v[i] > 9999)
			{
				k++;
				for (j = i; j < nr; j++)
				{
					v[j] = v[j + 1];
				}
			}
		}
	}
};

int main()
{
	long int a[1000];
	int n = 0;
	while (cin >> a[n])
	{
		n++;
	}
	Manuscrise p;
	Literatura q;
	Biblioteca* y = &p;
	for (int i = 0; i < n; i++)
	{
		y->GetS(a[i], i);
	}
	y->GetN(n);
	p.Delet();
	p.AfisH();

	cout << endl;

	y = &q;
	for (int i = 0; i < n; i++)
	{
		y->GetS(a[i], i);
	}
	y->GetN(n);
	q.Delet();
	q.AfisH();
	return 0;
}