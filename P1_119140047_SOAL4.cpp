// NIM: 119140047
// Nama : DHIFAF ATHIYAH ZHABIYAN
// Tanggal : 05 NOV 2020
// Deskripsi : P1_SOAL 4

#include <iostream> 
using namespace std;

void balik (int *A)
{
    if (*A%10==*A)
    {
        *A= *A * 10;
    }
    else
    {
       *A = (*A%10) * 10 + *A/10;
    }
}

void urut (int a[], int n)
{
    int i,j;    
    //sorting
     for (i=0; i<n; i++)
    {
        for (j=n-1; j>i; j--)
        {
            if((a[j]%100) < (a[j-1]%100))
            {
                //if (a[j]<)
                swap(a[j-1], a[j]);
                             
            }          
        }            
    }

}
int main () {
    int N;
    cin >> N;
    int X[N], i=0;
    while (i<N)
    {
        cin >> X[i];
        balik (&X[i]);
        i++; 
    }
    urut (X, N);
    i=0;
    while (i<N)
    {
        balik (&X[i]);
        cout  << X[i] << endl;
        i++;
    }
    return 0;
}