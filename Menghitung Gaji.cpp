#include <iostream>
using namespace std;
int main (){
  
  double gaji_karyawan;
  double umr_daerah;
  
  //input
  cout << " Gaji Karyawan : ";
  cin >> gaji_karyawan;
  cout << " UMR Daerah    : ";
  cin >> umr_daerah;
  
  //output
if (gaji_karyawan>umr_daerah){
cout<<"Gaji anda diatas umr";
} else if (gaji_karyawan<umr_daerah){
cout<<"Gaji anda dibawah umr";
} else if (gaji_karyawan==umr_daerah){
cout<<"Gaji anda setara umr";
}
  return 0;
}