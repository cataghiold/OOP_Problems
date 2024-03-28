# OOP_Problems

1. 
Calculați aria unui cerc și a unui dreptunghi folosind supraîncărcarea funcției arie.

Se vor utiliza concepte de clasă și obiect.

Afisarea se va face cu 2 zecimale in cazul numerelor rationale.

Date de intrare:

raza

latura

inaltimea

Date de iesire:

arie cerc

arie dreptunghi

Exemplu:

Date de intrare:

1

5

8

Date de iesire:

3.14

40


2.
Determinați diferența, produsul și împărțirea a două numere complexe folosind supraîncărcarea operatorilor prin funcții prietene.

Se vor utiliza concepte de clasă și obiect.

Date de intrare:

parte reala nr1

parte imaginara nr1

parte reala nr2

parte imaginara nr2

Date de iesire:

diferenta

produsul

rezultatul impartirii

Exemplu:

3

4

2

2

Date de iesire:

1+i2

-2+i14

1.75+i0.25


3.
Scrieți un program care permite incrementarea părții reale a unui număr complex de N ori, N dat de la tastatură, prin supraîncărcarea operatorului ++ prin funcții membre.

Se vor utiliza concepte de clasă și obiect.

Date de intrare:

N

parte reala

parte imaginara

Date de iesire:

noul numar complex obtinut

Exemplu:

2

2

2

Date de iesire:

4+i2


4.
Fie clasa Polinom care implementeaza notiunea de polinom. Clasa are ca date private urmatoarele date: grad (gradul polinomului) si coef (coeficientii polinomului).


Determinati suma si produsul a doua polinoame.

Se vor utiliza urmatoarele supraincarcari: operator indexare, operatori aritmentici, operatori citire si afisare in stream.

Nerespectarea cerinței atrage anularea punctajului!

Date de intrare:

Gradul primului polinom
Coeficientii primului polinom

Gradul celui de-al doilea polinom
Coeficientii celui de-al doilea polinom

Date de iesire:
Suma
Produsul

Exemplu
Date de intrare:
1
1 2
2
3 4 4

Date de iesire:
4*x^2+6*x^1+4*x^0
8*x^3+12*x^2+10*x^1+3*x^0


5.
Fie clasa Numar_Mare care implementează noțiunea de număr mare. Clasa are ca date private variabila cifre (reține cifrele numărului) și nr_cifre (reține câte cifre are numărul). Să se implementeze următoarele operații:

- determinați suma a două numere mari

- comparați cele două numere și îl afisați pe cel mai mare

- afișați primele 3 cifre ale celui mai mare număr

Se vor utiliza următoarele supraîncărcări: operator indexare, operator aritmetic, operator relațional, operatori de citire și afișare în stream.

Nerespectarea cerinței atrage anularea punctajului!

Date de intrare:

Numărul de cifre ale primului număr

Cifrele

Numărul de cifre ale celui de-al doilea număr

Cifrele

Date de ieșire:

Suma

Numărul cel mai mare

Primele cifre ale celui mai mare număr

Exemplu

Date de intrare:

3

3 2 1

2

1 4

Date de ieșire:

335

321

3

2

1


6.
Se consideră o clasă de bază Forma având ca date membre coordonatele a 4 puncte în plan xA yA xB yB xC yC xD yD. implementați clasele derivate Pătrat (derivată din Forma) și Dreptunghi (derivată din Forma). Adăugați funcțiile Arie(), Perimetru() și TipForma() pentru fiecare clasa derivată.

Se vor utiliza concepte de clasă și obiect.

Date de intrare:

Coordonatele punctelor

Date de iesire:

Aria

Perimetrul

Tipul formei

Exemplu:

Date de intrare:

1 1

4 1

4 3

1 3

Date de iesire:

6

10

Dreptunghi


7.
Se definește o clasă Masina pentru caracterizarea unei mașini prin pret și autonomie. Se definește o a doua clasă Baterie definită prin capacitate și durată de viata. Pe baza acestor clase să se deriveze o clasă MasinaElectrica. În funcţia main, după iniţializarea unui obiect din clasa MasinaElectrica, se vor calcula folosind funcții membre:

-             prețul după urmatoarea formulă preț=pret_masina+durata_viata*12,

-             autonomia după următoarea formulă autonomie=(capacitate*durata_viata)/100.

Se vor utiliza concepte de clasă și obiect.

Nu se acroda punctaj pentru nerespectarea cerintei!

Date de intrare:
pret_masina autonomie
capacitate durata de viata

Date de iesire:
pret masina electrica
autonomie masina electrica

Exemplu

Date de intrare:
100 1000
2200 3

Date de iesire:
136
66


8.
Se definește o clasă Student cu date membre protejate nume, facultate, medie. Datele sunt protejate. Din clasa student se derivează clasa Absolvent. Datele membre pentru absolvent sunt: Licenta. Data este privata. Un student nu poate fi absolvent daca nu are licenta, are media mai mica de 6 sau nu este inmatriculat la ETTI. Să se citească informațiile despre fiecare student și apoi să se afișeze dacă este absolvent.

Se vor utiliza concepte de clasă și obiect.

Nu se acroda punctaj pentru nerespectarea cerintei!

Date de intrare:
nume
facultate
medie

Date de iesire:
DA - daca este absolvent
NU - daca nu este absolvent


9.
Implementați o clasă Forma. Implementați două clase derivate din clasa de bază: Triunghi și Patrulater. Să se determine aria fiecarui poligon folosind pointeri la clasa de bază.

Se vor utiliza concepte de clasă și obiect.

Nu se acroda punctaj pentru nerespectarea cerintei!

Date de intrare:

baza

înălțimea

Date de ieșire:

arie patrulater

arie triunghi

Exemplu:

Date de intrare:

3

4

Date de ieșire:

12

6


10.
Să se implementeze clasele Cerc și Dreptunghi derivate din clasa de bază FiguraGeometrica. Clasa FiguraGeometrica va fi definită ca și clasă abstractă având declarate metodele getPerimetru() și getAria() ca funcții virtuale pure.

Date de intrare:

Raza

Latura mica

Latura mare

Date de ieșire:

Perimetru cerc

Arie cerc

Perimetru dreptunghi

Arie dreptunghi

Exemplu:

Date de intrare:

1

2

3

Date de ieșire:

6.28

3.14

10

6


11.
Se consideră clasa Biblioteca. Să se deriveze 2 clase,Literatura și Manuscrise. Folosind funcții virtuale pure să se implementeze două metode pentru adăugarea și extragerea cărților din clasele derivate astfel:

-        În Literatura cărțile se adaugă începând cu raftul de jos și se extrag începând cu ultimul raft ocupat

-        În Manuscrise cărțile se adaugă începând cu raftul de sus, în jos, iar extragerea se face începând cu primul raft de sus.

Cărțile sunt cunoscute după primul număr din ISBN (N<9999)

La întâlnirea unui număr > 9999 se va efectua o extragere de carte.

Nu se acroda punctaj pentru nerespectarea cerintei!

Date de intrare:

cărțile

Date de ieșire:

Cărțile din Literatura

Cărțile din Manuscrise

Exemplu:

Date de intrare:

1 2 3 4 10000 5

Date de ieșire:

5 3 2 1

2 3 4 5


12.
Se consideră clasa Biblioteca. Să se deriveze 2 clase,Literatura și Manuscrise. Folosind conceptul de polimorfism să se implementeze două metode pentru adăugarea și extragerea cărților din clasele derivate astfel:

-        În Literatura cărțile se adaugă începând cu raftul de jos și se extrag începând cu ultimul raft ocupat

-        În Manuscrise cărțile se adaugă începând cu raftul de sus, în jos, iar extragerea se face începând cu primul raft de sus.

Să se implementeze o clasă Carti_Rare derivată din Literatura și Manuscrise. Adăugarea cărților în această secțiune se poate face fie adăugând de la raftul de sus în jos sau de la raftul de jos în sus. Extragerea se realizează după aceleași reguli ca și la adăugare.

Cărțile sunt cunoscute după primul număr din ISBN (N<9999)

La întâlnirea unui număr > 9999 se va efectua o extragere de carte. Dacă numărul este par atunci extragerea din Carti_Rare se efectuează începând cu ultimul raft ocupat,. Dacă numărul este impar atunci extragerea din Carti_Rare se efectuează începând cu primul raft de sus. 

La întâlnirea unui număr >= 100 adăugarea în Cărți_Rare se face începând cu raftul de sus, în jos altfel începând cu raftul de jos.

Nu se acroda punctaj pentru nerespectarea cerintei!

Date de intrare:

cărțile

Date de ieșire:

Cărțile din Literatura

Cărțile din Manuscrise

Cărțile din Cărți_Rare

Exemplu:

Date de intrare:

1 2 3 4 10000 5

Date de ieșire:

5 3 2 1

2 3 4 5

5 3 2 1


13.
Un student este definit prin Nume, CNP, punctaj la laborator, punctaj examen și rezultat_Engleza. Pentru a promova, studentul roman are nevoie de minim 50 puncte în total din laborator și examen, în timp ce studentul Erasmus are nevoie inclusiv de testul de la engleza. Dacă testul de la engleză este mai mic de 50 atunci indiferent dacă obține punctaj de promovare (>=50) va primi 0 puncte.

Studenții străini au prima cifră din CNP 7 sau 8.

Afișați studenții în ordinea descrescătoare a mediei. În caz de medii egale, departajarea se va face după rezultatul de la examen.

Date de intrare: Nume, CNP, punctaj laborator, punctaj examen, test engleza

Date de iesire: Studentii ordonati dupa medie

Exemplu:

Date de intrare:

Ion 1234567891011 10 45 0

Maria 2234567891011 45 37 15

Mike 7234567891011 25 25 60

Ela 8454567891011 45 35 45

Date de iesire:

Maria

Ion

Mike

Ela

Explicație: Maria are 82 puncte în total deci promovează. Ion are 55 puncte deci promovează. Ambii sunt români deci testul la engleză nu se ia în considerare.
Mike are 50 puncte la examen și 60 puncte la engleză. Având punctaj la engleză >= 50, acesta promovează.
Ela are 45 puncte la engelză deci punctajul ei este 0.
