#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main () {
	cout << "Input amout of teams: ";
	int n;
	cin >> n;
	cin.ignore();

	cout << "Input team names. Each from new line:\n";
	string *teams = new string [n];
	for (int i = 0; i < n; ++i) {
		cout << " > ";
		getline(cin, teams[i]);
	}
		
	int **res = new int*[n];
	for (int i = 0; i < n; ++i)
		res[i] = new int[n];
		
		
	int a = teams[0].length();
	char *space = new char[a];
	for (int i = 0; i < a; ++i)
		space[i] = ' ';
		
	cout << "Input matches results? (y/n)\n";
	char ch;
	while (true) {
		cin >> ch;
		if (ch == 'Y' || ch == 'y') {
			cout << "    ";
			for (int i = 0; i < n; ++i)
				cout << "  " << i << " | ";
				cout << endl;
			for (int i = 0; i < n; ++i) {
				cout << "  " << i << " | ";
				for (int j = 0; j < n; ++j)
					cin >> res[i][j];
			}
			break;
		}
		else if (ch == 'N' || ch == 'n') {
			for (int i = 0; i < n; ++i)
				for (int j = 0; j < n; ++j)
					res[i][j] = rand()%4;
			for (int i = 0; i < n; ++i)
				res[i][i] = 0;
				
			cout << "    ";	
			for (int i = 0; i < n; ++i)
				cout << i+1 << " | ";
				cout << endl;
			for (int i = 0; i < n; ++i) {
				cout << i+1 << " | ";
				for (int j = 0 ; j < n; j++) {
					cout << res[i][j] << "   ";
				}		
			cout << endl;
			}
			break;	
		}
	}
	cout << endl;
	
	int k = 0 , b = 1;
	for (int i = 0 ; i < n; i++) {
		for (int count = k ; count < (n - 1); count++) {	
			cout << "   " << teams[i] << " - " << teams[count+1] << "   " <<  res[i][b] << " - " << res[b][i] << "\n";
			b++;
		}
	b = 1;
	b += i + 1;
	k++;
	}
	
	delete[] teams;
	for (int i = 0 ; i < n; ++i)
		delete[] res [i];
	delete[] res;

	return 0;
}		







