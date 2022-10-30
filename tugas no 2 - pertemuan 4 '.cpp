#include <iostream>
using namespace std;

int main () {
      string username, password;

  cout<<"Masukkan username : ";
  cin>>username;
  cout<<"Masukkan password : ";
  cin>>password;


  if(username=="niel"&&password=="nielawikwok")
    cout<<"Login Berhasil";
  else if ( username == "niel" && password != "nielawikwok")
    cout<<"Username Benar, Password Anda Salah!!!, Silakan Coba Lagi";
  else if ( username != "niel" && password =="nielwikwok")
    cout<< "Username Salah!!!";
  else
    cout<< "Anda Gagal Login, Username dan Password Salah!!!";


  return 0;
}
