/*
- LOGIN 3X KESALAHAN
- MASUK KE FORM MENU
- INVENTORI TOKO BUKU
- TAMPIL
=> BANYAK DATA (CONTOH 2)
----------------------------------------------------------------------
|  NO  |  KODE  |  JUDUL BUKU  |  JENIS  |  HARGA SATUAN  |  JUMLAH  |
----------------------------------------------------------------------   
|  1   |  K032
|  2   |  K056
----------------------------------------------------------------------
- EXIT
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

struct{
    char kode[20], judul[20], jenis[20];
    int harga, jumlah;
} data[100]; 
int a, c, DataIn, DataKe;

void move()
{
  cout<<"\n";
}

login_user()
{
  char user[30], pass[30];
  char tempChar = ' ';
  int x = 0, attempts = 0;
  bool isLogin = false;

  cout<<"========================== \n";
  cout<<"       LOGIN USER \n";
  cout<<"========================== \n";
  move();

  while((isLogin == false) && (attempts < 3)) {
    cout<<"Masukkan username : ";
    cin>>user;
    cout<<"Masukkan password : ";

    x = 0;
    while(x <= 9) {
      pass[x] = getch();
      tempChar = pass[x];

      if(tempChar == 13) {
         break;
      } else {
         cout<<"*";
      }
      x++;
    }

    pass[x] = '\0';
    x = 0;

    if( (strcmp(user, "admin") == 0) && (strcmp(pass, "admin") == 0) ) {
      isLogin = true;
    } else {
      move();move();
      cout<<"\a\a\a\a";
      cout<<"[ USERNAME ATAU PASSWORD ANDA SALAH! ]\n";
      move();
      attempts+=1;
    }

    if(attempts == 3){
      clrscr();
      cout<<"[ ANDA TELAH 3X GAGAL ]\n";
      cout<<"Silahkan tekan [ENTER] untuk keluar \n";
      getch();
    }
  }

  return isLogin;
}

main(){
    int pilih, lop, tempData;
    char out;

    if(login_user() == true) {
      lop = 1;
      while(lop < 3){

      clrscr();
      cout<<"\n============== PILIHAN MENU ==============";
      cout<<"\n1. Masukkan data";
      cout<<"\n2. Lihat Data";
      cout<<"\n3. Keluar";
      cout<<"\n\nMasukkan Pilihan : "; cin>>pilih;

        if(pilih == 1){
            clrscr();

            if (DataIn > 0)
            {
              tempData = DataIn;
            } else {
              tempData = 0;
            }

            cout<<"\nJumlah Data Yang Akan di input : "; cin>>DataIn;

            for( c = tempData; c < DataIn + tempData; c++ ){
               DataKe = DataKe + 1;
               cout<<"\nData ke - "<<DataKe<<endl;
               cout<<"Kode    : ";cin>>data[a].kode;
               cout<<"Judul   : ";cin>>data[a].judul;
               cout<<"Jenis   : ";cin>>data[a].jenis;
               cout<<"Harga   : ";cin>>data[a].harga;
               cout<<"Jumlah  : ";cin>>data[a].jumlah;
               a++;
            }
            lop = 1;
            clrscr();
        }
        else if(pilih == 2){
            clrscr();
            int b, no;
            cout<<"\n============== MENAMPILKAN DATA ==============\n\n";
            no = 0;
            for( b=0; b<a; b++ ){
               no = no + 1;
               cout<<"Data ke "<<no<<endl;
               cout<<"----------------------------------------------\n";
               cout<<"Kode    : "<<data[b].kode<<endl;
               cout<<"Judul   : "<<data[b].judul<<endl;
               cout<<"Jenis   : "<<data[b].jenis<<endl;
               cout<<"Harga   : "<<data[b].harga<<endl;
               cout<<"Jumlah  : "<<data[b].jumlah<<endl;
               cout<<"----------------------------------------------\n\n";
            }
            cout<<"==============================================\n";
            getch();
            lop = 1;
            clrscr();

        }else{
            clrscr();
            cout<<"APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
            cout<<"      [Y]           [N]"<<endl;
            cout<<"              ";cin>>out;
            if(out == 'y'|| out == 'Y'){
               exit(0);
               lop = 4;
            }else{
               clrscr();
               lop = 1;
            }
        }
      }
    }
}
