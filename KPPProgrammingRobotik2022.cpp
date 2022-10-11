// NAMA		: Malvin Leonardo Hartanto
// NRP		: 5025221033
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>
using namespace std;

int mencari_vo(int vo);

#define GRAVITASI 10
#define SUDUT 45

int main() 
{
	int vtan_awal, vawal;
	
	here:
  	cin >> vtan_awal;
  		
  	vawal = mencari_vo(vtan_awal);
  	
  	float rad = SUDUT * (M_PI / 180);	
	float jarak = ((vawal * vawal) * sin(2 * rad)) / GRAVITASI;
	jarak = trunc(jarak);
  	
  	float vtan_akhir = sqrt((GRAVITASI / sin(2 * rad)) * jarak);
  	
  	if(vtan_akhir <= 10)
		vtan_akhir += 1;
	else if(vtan_akhir <= 20)
		vtan_akhir += 3;
	else if(vtan_akhir <= 30)
		vtan_akhir += 5;
  	
  	if(vtan_awal > 30 || vtan_akhir > 30)
  		goto here;
  	
  	cout << jarak << " " << vtan_akhir << endl;
  
    return 0;
}

int mencari_vo(int vo)
{	
	if(vo <= 10)
		vo -= 1;
	else if(vo <= 20)
		vo -= 3;
	else if(vo <= 30)
		vo -= 5;
	
	return vo;
}
