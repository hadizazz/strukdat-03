/*
Nama		: Hadiza Cahya Firdaus
Npm			: 140810180042
Tanggal		: 13/03/2019	
Deskripsi	: exercise-01	
*/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct{
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s){
	cout<<"Input Segiempat "<<endl;
	cout<<"Masukkan Panjang\t:";cin>>s->panjang;
	cout<<"Masukkan Lebar\t	:";cin>>s->lebar;
	cout<<endl;
}
float keliling(segiempat s){
	return((2*s.lebar)+(2*s.panjang));
}
float luas(segiempat s){
	return(s.lebar*s.panjang);
}
float diagonal(segiempat s){
	float diag=(s.lebar*s.lebar)+(s.panjang*s.panjang);
	diag=sqrt(diag);
	return(diag);
}
void print(segiempat s){
	cout<<"Panjang\t\t\t:"<<s.panjang<<endl;
	cout<<"Lebar\t\t\t:"<<s.lebar<<endl;
	cout<<"Diagonal\t\t:"<<diagonal(s)<<endl;
	cout<<"Luas\t\t\t:"<<luas(s)<<endl;
	cout<<"Keliling\t\t:"<<keliling(s)<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
   
}


