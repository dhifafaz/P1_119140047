// NIM: 119140047
// Nama : DHIFAF ATHIYAH ZHABIYAN
// Tanggal : 05 NOV 2020
// Deskripsi : P1_SOAL 1
#include <iostream>
using namespace std;

int kuadrat (int *a, int b)
{
    if (b==0) return 1;
    else return *a * kuadrat(a,b-1);
}

int main ()
{
    int n , m;
    cin >> n >> m ;
    cout << kuadrat(&n, m) << endl;
}