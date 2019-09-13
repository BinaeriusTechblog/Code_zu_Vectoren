#include <iostream>
#include <vector>
#include <string>
using namespace std; 
int main()
{
	cout << "Willkommen im Wunschzettelprogramm :) #Weihnachtsmann & CoKG "<<endl<<endl; 
	//statischer Vector 
	vector<string>Wunsch(3);
	string Name; 
	cout << "Wie heist du mein Kind? Bitte gebe deinen Namen ein: ";
	cin >> Name; 
	cout << "Lieber "<<Name<<", bitte gebe deinen ersten Wunsch ein: ";
	cin >> Wunsch[0];
	cout << "Lieber " << Name << ", bitte gebe deinen zweiten Wunsch ein: ";
	cin >> Wunsch[1];
	cout << "Lieber " << Name << ", bitte gebe deinen dritten Wunsch ein: ";
	cin >> Wunsch[2];
	cout << endl<<"Lieber " << Name << ", der Weihnachtsmann hat folgende Wuensche erhalten: "<<endl<<endl;
	cout << "Der/Die " << Name << " hatte als ersten Wunsch sich " << Wunsch[0] << " gewuenscht." << endl;
	cout << "Der/Die " << Name << " hatte als zweiter Wunsch sich " << Wunsch[1] << " gewuenscht." << endl;
	cout << "Der/Die " << Name << " hatte als letzten und dritten Wunsch sich " << Wunsch[2] << " gewuenscht." << endl;


	return 0; 
}