
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
class Forma{
public:
    double xA,yA,xB,yB,xC,yC,xD,yD;
    Forma()
    {
        xA=0;yA=0;
        xB=0;yB=0;
        xC=0;yC=0;
        xD=0;yD=0;
    }
    Forma(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
    {
        xA=x1;yA=y1;
        xB=x2;yB=y2;
        xC=x3;yC=y3;
        xD=x4;yD=y4;
    }
    void afis()
    {
        cout<<"Avem forma"<<endl;
    }
};
class dreptunghi:public Forma{
public:
    double l1,l2,l3,l4,l5;
    bool validp;
    dreptunghi()=default;
    bool verif_dr(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
    {
        xA = x1;
        yA = y1;
        xB = x2;
        yB = y2;
        xC = x3;
        yC = y3;
        xD = x4;
        yD = y4;
        return validare_dreptunghi();
    }
    bool validare_dreptunghi()
    {
        l5=(xA-xB)*(xA-xB)+(yA-yB)*(yA-yB);
        l1=sqrt(abs(l5));
        l2=sqrt(abs((((xC-xB)*(xC-xB))+((yC-yB)*(yC-yB)))));
        l3=sqrt(abs((((xC-xD)*(xC-xD))+((yC-yD)*(yC-yD)))));
        l4=sqrt(abs((((xA-xD)*(xA-xD))+((yA-yD)*(yA-yD)))));
        if ((l1==l3)&&(l2==l4) && (l1!=l2) )
        {
            validp=1;
        }
        else
        {
            validp=0;
        }
        return validp;
    }

    void tip_dr()
    {
        if (validp)
            cout<< "Dreptunghi";
    }
    double arie_dr()
    {
        return l1*l2;
    }
    double perimetru_dr()
    {
        return l1+l2+l3+l4;
    }
};
class patrat :public Forma
{
public:
    double l1, l2, l3,l4,l5;
    bool validpr;
    bool verif_pr(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
    {
        xA = x1;
        yA = y1;
        xB = x2;
        yB = y2;
        xC = x3;
        yC = y3;
        xD = x4;
        yD = y4;
        return valid_patrat();
    }
    bool valid_patrat()
    {
        l5=(xA-xB)*(xA-xB)+(yA-yB)*(yA-yB);
        l1=sqrt(abs(l5));
        l2=sqrt(abs((((xC-xB)*(xC-xB))+((yC-yB)*(yC-yB)))));
        l3=sqrt(abs((((xC-xD)*(xC-xD))+((yC-yD)*(yC-yD)))));
        l4=sqrt(abs((((xA-xD)*(xA-xD))+((yA-yD)*(yA-yD)))));
       // cout<<l1<<" "<<l2<<" "<<l3<<" "<<l4<<endl;
        if ((l1==l3)&& (l1==l4) && (l1==l2))
        {
            validpr=1;
        }
        else
        {
            validpr=0;
        }
        return validpr;
    }

          void tip_pr()
    {
        if (validpr)
            cout<< "Patrat";
    }
    double arie_pr()
    {
        return l1*l1;
    }
    double perimetru_pr()
    {
        return l1+l2+l3+l4;
    }


};
int main()
{
    double xA, yA, xB, yB, xC, yC, xD, yD;
    cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
    dreptunghi dr;
    patrat pr;
    if(dr.validp==1)
    if (dr.verif_dr(xA, yA, xB, yB, xC, yC, xD, yD))
    {cout << fixed<<setprecision(2)<<dr.arie_dr() << endl<< dr.perimetru_dr() << endl;
    dr.tip_dr();}

    if(pr.validpr==1)
    if (pr.verif_pr(xA, yA, xB, yB, xC, yC, xD, yD)){
        cout << fixed<<setprecision(2)<<pr.arie_pr() << endl << pr.perimetru_pr() << endl;
        pr.tip_pr();}
}
