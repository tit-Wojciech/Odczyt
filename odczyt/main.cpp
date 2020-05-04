#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

fstream odczyt;
int a, b=0, c, n, w;
double T[50];

int main()
{
    cout<<"co chcesz zrobic"<<endl<<"1-sprawdzic czy liczby sa parzyste"<<endl<<"2-posortowac liczby"<<endl;
    cin>>w;
    switch (w)
    {
   case 1:
       odczyt.open("liczby.txt", ios::in);
       while (odczyt.good())
       {odczyt>>a;
        if(a%2==0) b++;
        else c++;}
        cout<<"Liczb nieparzystych jest :"<<c<<endl<<"Liczb parzystych :"<<b;
        odczyt.close();
       break;
   case 2:
       odczyt.open("liczby.txt", ios::in);
        while (odczyt.good())
        {
            odczyt>>T[b];
            b++;
        }
        odczyt.close();
        sort(T,T+50);
        for (int i=0;i<50;i++)
        {cout<<T[i]<<", ";}
       break;
    default:
        cout<<"Zla wartosc"<<endl;
        break;
    }
    return 0;
}
