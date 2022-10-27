include<iostream>
using namespace std;

int main() {

  int data;
  float nilai, jumlah, rata;

  cout <<"\t menghitung jumlah & rata-rata nilai \n\n";

  cout <<" masukkan jumlah data : ";
  cin >>nilai;
  cout <<endl;

  for(int i=1; i <= data ; i++){
    cout << "data nilai ke-" << i << ":";
    cin >> nilai;

    jumlah += nilai;
  }


cout << "\n jumlah semua nilainya :"<<jumlah;

rata=jumlah / data;
cout << "\n nilai rata-rata nya :" <<rata;
}