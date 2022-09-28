#include <iostream>
using namespace std;

	float luas_lingkaran (int r) {
		float phi=3.14, luas;
		luas=phi*r*r;
		return luas;
}

	float keliling_lingkaran(int r) {
		float phi=3.14,keliling;
		keliling=2*phi*r;
		return keliling;
		
	}

int main ()
{
	cout<< "menghitung luas * kelilling lingkaran" << endl;
	
	int r;
	cout<<"masukan jari jari=";
	cin>>r;
	
	cout<< "luas lingkatran=" <<luas_lingkaran (r) <<endl;
	cout<< "luas keliling=" <<keliling_lingkaran(r) <<endl;
}
