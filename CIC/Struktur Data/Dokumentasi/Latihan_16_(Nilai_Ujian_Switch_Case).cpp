/*
    Nama    : Ahmad Hanafi
    Kelas   : TI 1-2
    NIM     : 2017102020
*/

#include <iostream>
#include <stdio.h>
//using namespace std;

main()
{
    int n;
    int nilai[100];
    char index[10];

    cout<<"Masukkan n : ";
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<"Masukkan nilai ujian ke-"<<i+1<<" : ";
        cin>>nilai[i];

        switch(nilai[i]) {
            case 81 ... 100 :
                index[i] = 'A';
                break;
            case 71 ... 80 :
                index[i] = 'B';
                break;
            case 55 ... 70 :
                index[i] = 'c';
                break;
            case 40 ... 54 :
                index[i] = 'D';
                break;
            default :
                index[i] = 'E';
                break;
        }
    }

    cout<<"OUTPUT : \n"<<endl;

    for(int j=0; j<n; j++) {
        cout<<"Nilai ke-"<<j+1<<" => "<<nilai[j]<<" Index "<<index[j]<<endl;
    }
}
