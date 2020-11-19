// NIM: 119140047
// Nama : DHIFAF ATHIYAH ZHABIYAN
// Tanggal : 05 NOV 2020
// Deskripsi : P1_SOAL 3
 #include <iostream>
 using namespace std;

 int i;
 int CekPrima (int* n)
 {
     if (i==1) return 1;
     else if (*n%i==0) return 0;
     else 
     {
         i=i-1;
         return CekPrima (n);
     }
 }


 int main (){
     int banyak, n, inp, boool;
     cin >> banyak;
     string hasil [banyak];
     
     for (int a=0; a<banyak; a++)
     {
         cin >> inp;
         i=inp/2;
         boool = CekPrima (&inp);
         if (boool ==1) hasil[a]="prima";
         else hasil[a]="komposit";
     }

     for (int a=0; a<banyak; a++)
     {
         cout << hasil[a] << endl;
     }
     return 0;
 }

