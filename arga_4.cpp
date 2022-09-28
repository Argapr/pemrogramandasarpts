#include <iostream>
using namespace std;

int main() 
{
	cout<< "rumus simpel"<< endl ;
	cout << "kehadiran=" ;
	int kehadiran ;
	cin >> kehadiran;
	cout << "tugas=" ;
	int tugas;
	cin >> tugas;
	cout<< "UTS= " ;
	int uts;
	cin >> uts;
	cout<< " UAS= " ;
	int uas;
	cin >> uas;
	int hasil;
	hasil= (uts + uas + kehadiran + tugas)/4;
	cout<< "hasil nilai dari uas,uts,kehadiran&tugas=" << hasil ;
	
}
