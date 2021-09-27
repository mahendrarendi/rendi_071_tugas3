
#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel
    string nama;
    char golongan;
    int jam_kerja, upah, ttl_upah
    ;
    
    // tentukan input
    cout<<"Nama = "; getline(cin, nama);
    cout<<endl;
    cout<<"Golongan = "; cin>> golongan;
    cout<<endl;
    cout<<"Jumlah jam kerja = "; cin>>jam_kerja;
    cout<<endl;
    
    //tentukan golongan upah
    switch(golongan){
        case 'A' : upah = 5000;
        break;
        case 'B' : upah = 7000;
        break;
        case 'C' : upah = 8000;
        break;
        case 'D' : upah = 10000;
        break;
    }
    
    // kalkulasi total upah
    ttl_upah = jam_kerja * upah;
    
// cek apakah jam kerja lebih dari 48 jam
  if ( (jam_kerja - 48) > 0 ) {
     ttl_upah = ttl_upah + ((jam_kerja - 48)*4000);
  }
 
  // proses output
   cout << endl;
   cout << nama << " menerima upah Rp." << ttl_upah << " per minggu";
   cout << endl;
   cout<<"\ndevelop @mahendrarendi";

    return 0;
}
