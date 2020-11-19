// NIM: 119140047
// Nama : DHIFAF ATHIYAH ZHABIYAN
// Tanggal : 05 NOV 2020
// Deskripsi : P1_SOAL 2

#include <iostream>
using namespace std;

int Akar (int ats, int bwh, int*n)
{
    if (bwh <= ats)
    {
        int tgh = (bwh + ats)/2;

        if ((tgh * tgh) <= *n && ((tgh + 1)* (tgh + 1)> *n))
        {
            return tgh;
        } 
        else if (tgh * tgh < *n)
        {
            return Akar(ats, tgh+1, n);
        }
        else return Akar(tgh-1, bwh, n);
    }
    return bwh;
}

int main ()
{
    int input, temp=0;
    cin >> input;

    int sum = 1;
    while (temp < input)
    {
        if (sum!=input)
        {    
            if (sum%2!=0)
            {
                cout << sum ;
                temp += sum;
            } 
            else  cout << "+" ;           
        }  
        sum +=1;
    }
    cout << " = ";


    cout << Akar(input,0, &input) << "^2";
}