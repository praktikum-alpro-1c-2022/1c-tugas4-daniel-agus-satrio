#include <iostream>
using namespace std;

int main() {
   cout<<"## Membuat Program Cek Tahun Kabisat ##"<<endl;
   cout<<"======================================="<<endl;

int year;
   cout<< " Input Tahun : ";
   cin>>year;

   if(year % 400 == 0) {
    cout << year << " adalah tahun kabisat "<<endl;
   }
   else if(year % 100 == 0) {
    cout << year << " bukan tahun kabisat "<<endl;
   }
   else if(year % 4 == 0 ) {
    cout << year << " adalah tahun kabisat "<<endl;
   }
   else{
    cout << year << " bukan tahun kabisat "<<endl;
   }

   return 0;

}


