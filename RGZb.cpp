#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;
int main() {
	
	cout << "A palindrome is a word, phrase, number "
	"or other sequence of characters\n"
	"which reads the same backward as forward\n\nEnter the string.\n";
	string pal;	
	const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	short r, i, j;	
	int input , status = 0;
	
	do {
			if (status != 0) {
			cout << "Menu:\n";
			cout << "1. Check if the string is a palindrome.\n";
			cout << "2. Make a palindrome from the input data (Method 1).\n";
			cout << "3. Make a palindrome from the input data (Method 2).\n";
			cout << "4. Show entered palindrome.\n";
			cout << "5. Re-enter the palindrome.\n";
			cout << "6. Clear screen.\n";
			cout << "7. Exit.\n\n";
			cin >> input;
			cin.ignore();
			}  else input = 5;
			
			switch (input) {
				case 1: {
					string mirror = pal;
					for (int i = 0 , end = pal.size(); i < pal.size(); i++ , end--) 
						mirror[i] = pal[end-1];
					if (pal == mirror)
						cout << "This line is a palindrome." << endl;
					else 
						cout << "This line isn't a palindrome." << endl;
					break;	
				}
				
				case 2: {
					string str = pal;
					string strM = pal;
					string min;
					for (int i = 0 , end = str.size(); i < str.size(); i++ , end--)
						strM[i] = pal[end-1];
					for (int i = 0 , j = 0; ;i++)
						if (str[i] == strM[j])
						{
							for (j = 0; j < str.size(); j++)
								min += strM[j];
							break;	
						} 	else {
						  		min += str[i];
							}
					cout << min << " - created by a minimal size palindrome." << endl;
					break;
				}
				
				case 3: {
					string str = pal;
					string strM = str;
					for (int i = 0 , end = str.size(); i < str.size(); i++ , end--) strM[i] = pal[end-1];
					for (int i = 0; i < pal.size(); i++){
						str = pal;
						for (int j = i; j < pal.size(); j++){
							str += strM[j];
							string mirror = str;
							for (int i = 0 , end = str.size(); i < str.size(); i++ , end--) mirror[i] = str[end-1];
							if (str == mirror) cout << str << "  ";
						}
					}
					cout << " - shows all possible palindromes ";
					cout << endl;
					break;
				}
				
				case 4: {
					cout << pal << " - Entered palindrome\n";
					break;
				}
				
				case 5: {
					getline(cin , pal);
					cout << "\n";
					if (pal.empty()) {
						srand(time(0));
						for (i = 0; i < 20; ++i) {
							r = rand()%2;
							for (j = 0; j < r; ++j) {
								pal += charset[rand()%62];
							}	
						}	
						cout << pal << "\n\n";					
					}
					status += 1;
					break;
				}
				
				case 6: {
					system("cls");				
					break;
				}
				
				case 7: {
					cout << "Shutdown..." << endl;
					return 0;
				}
				
				default: {
					cout << "Sorry , but you need select one of the available options.";
					break;
				}
				
					break;
			}	
	} while (input+1);
}
