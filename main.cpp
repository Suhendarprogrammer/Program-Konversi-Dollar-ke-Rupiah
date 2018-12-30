#include <iostream>
#include <conio.h>
#define kurs 15221
using namespace std;
int main ()
{
    int dollar,rupiah;
    cout<<"*********PROGRAM KONVERSI DOLLAR KE RUPIAH********\n";
    cout<<"==================================================\n";
    cout<<"\nMasukkan Jumlah Dollar : $";
    cin>>dollar;
    cout<<"==================================================\n";
    rupiah=dollar*kurs;
    cout<<"Konversi Dollar Ke Rupiah Adalah : Rp. "<<rupiah<<"\n";
    return 0;
}
