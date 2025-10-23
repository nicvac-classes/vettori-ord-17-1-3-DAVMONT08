#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int i, n, j, k, p, d, inizio, fine, medio, x;
    float indice;
    bool scambio;
    cout << "inserisci random?" << endl;
    cin >>n;
    i=0;
    p=0;
    d=0;
    vector<int>vd[n];
    vector<int>vp[n];
    while (i<n)
    {
        x = rand()%(n*10)+1;
        if(x%2 == 0)
        {
           vp[p] == x;
           p=p+1;
        }
        else
        {
           vd[d] == x;
           d = d+1;
        }
        i=i+1;
    }
    i=0;
    scambio = true;
    while (i<=p-1 and scambio)
    {
        j=0;
        scambio = false;
        while (j<=(p-2)-i)
        {
            if (vp[j] > vp[j+1])
            {
                t = vp[j];
                vp[j] = vp[j+1];
                vp[j+1] = t;
                scambio = true;
            }
            j=j+1:
        }
        i=i+1;
    }
    j=0;
    cout << "numeri pari:" << endl;
    while (j<p)
    {
        cout << vp[j] << endl;
        j=j+1;
    }
    i=0;
    scambio = true;
    while (i<=d-1 and scambio)
    {
        j=0;
        scambio = false;
        while (j<=(d-2)-i)
        {
            if (vd[j] > vd[j+1])
            {
                t = vd[j];
                vd[j] = vd[j+1];
                vd[j+1] = t;
                scambio = true;
            }
            j=j+1:
        }
        i=i+1;
    }
    j=0;
    while (j<d)
    {
        cout << vd[j] << endl;
        j=j+1;
    }
    vector<int>v3[p+d];
    k=0;
    j=0;
    i=0;
    while (i<p and j<d)
    {
        if (vp[i]> vd[j])
        {
            v3[k] = vd[j];
            j=j+1;
        }
        else
        {
        v3[k] = vp[i];
        i=i+1;
        }
        k=k+1;
    }
    if (i<p)
    {
        while (i<p)
        {
            v3[k] = vp[i];
            i=i+1;
            k=k+1;
        }
    }
    else
    {
        while (j<d)
        {
            v3[k] = vd[j];
            j=j+1;
            k=k+1;
        }
    }
    k=0;
    cout << "merge dei due vettori:" << endl;
    while (k< (p+d))
    {
        cout << v3[k] << endl;
        k=k+1;
    }
    cout << "inserire valore" << endl;
    cin >> k;
    indice = -1;
    i=0;
    inizio =0;
    fine = (p+d) -1;
    while ( indice =-1 and i<=(p+d) -1)
    {
        medio = inizio + (fine-inizio)/2;
        if (v3[medio] == k)
        {
            indice = medio;
        }
        else
        {
            if (v3[medio] >k)
            {
                fine = medio-1;
            }
            else 
            {
                inizio = medio +1;
            }
        }
        i=i+1;

    }
    if (indice =-1)
    {
        cout << "valore non trovato" << endl;
    }
    else 
    {
        cout << "il valore " << k << " è stato trovato nella cella " << indice << endl;
    }
    cout << " controlli effettuati:" << i+1 << endl;




    
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
