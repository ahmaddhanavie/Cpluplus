/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika

    Program menghitun rata-rata dari n bilangan yang diinputkan
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

main()
{
    float n, jumlah, rata;
    int ganjil, genap, bil;

    cout<<"Masukkan banyak bilangan : ";
    cin>>n;
    jumlah = 0;
    ganjil = 0;
    genap = 0;

    for(int i=0; i<n; i++)
    {
        cout<<"Masukkan bilangan ke-"<<i+1<<" : ";
        cin>>bil;
        if(bil % 2 == 0) {
            genap = genap + 1;
        } else {
            ganjil = ganjil + 1;
        }
        jumlah = bil + jumlah;
    }

    rata = jumlah / n;
    cout<<"Rata-rata dari "<<n<<" bilangan yang diinputkan adalah "<<rata;
    cout<<"\n";
    cout<<"Banyak bilangan genap ada "<<genap<<" buah "<<endl;
    cout<<"Banyak bilangan ganjil ada "<<ganjil<<" buah "<<endl;
    getch();
}
