#include <iostream>

using namespace std;

class Biblioteca {
public:
    int l, a[1000];
    Biblioteca()
    {
        l = 0;
    }
    virtual void adaugare(int x) = 0;
    virtual void afisare() = 0;
    virtual void eliminare()=0;
};
class Literatura :virtual public Biblioteca {
public:
    int n, v[1000];
    Literatura()
    {
        n = 0;
    }
    void adaugare(int x)override
    {
        n++;
        for (int i = n - 1; i >= 1; i--) {
            v[i] = v[i - 1];
        }
        v[0] = x;
    }
    void afisare()override
    {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    void eliminare()
    {
        for (int i = 0; i < n; i++) {
            v[i] = v[i + 1];
        }
        n--;
    }
};
class Manuscris :virtual public Biblioteca {
public:
    int m, b[1000];
    Manuscris()
    {
        m = 0;
    }
    void adaugare(int x)override
    {
        b[m++] = x;
    }
    void afisare()override
    {
        for (int i = 0; i < m; i++) {
            cout << b[i] << " ";
        }
    }
    void eliminare()
    {
        for (int i = 0; i < m; i++) {
            b[i] = b[i + 1];
        }
        m--;
    }
};
class Carti_Rare : public Literatura, public Manuscris
{
public:
    int o, t[1000];
    Carti_Rare()
    {
        o = 0;
    }
    void adaugare(int x)override
    {
        if (x >= 100)
        {
            t[o++] = x;
        }
        else
        {
            o++;
            for (int i = o - 1; i >= 1; i--) {
                t[i] = t[i - 1];
            }
            t[0] = x;
        }
    }
    void afisare()override
    {
        for (int i = 0; i < o; i++)
            cout << t[i] << " ";
    }
    void eliminare()override
    {
        
            for (int i = 0; i < o; i++) {
                t[i] = t[i + 1];
            }
        
    }
};

int main()
{
    int i = 0, v[1000], x;
    Manuscris biblioNoua;
    Literatura biblioVeche;
    Carti_Rare carte;
    Biblioteca* p = &biblioNoua;
    Biblioteca* pt = &biblioVeche;
    Biblioteca* ptr = &carte;
    while (cin >> x)
    {
        if (x < 9999)
        {
            p->adaugare(x);
            pt->adaugare(x);
            ptr->adaugare(x);
        }
        else {
            biblioVeche.eliminare();
            biblioNoua.eliminare();
            carte.eliminare();
        }
    }
    pt->afisare();
    p->afisare();
    ptr->afisare();
}