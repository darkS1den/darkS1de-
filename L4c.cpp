#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	
	cout << "Enter string.\n";
	char *inp = new char [501];
	gets(inp); 
	int len = strlen(inp); 
	int *count = new int [501];   
	for (int i = 0; i < len; i++) 
		count[i] = 0;	

		
	int j = 0, max;  
	for (int i = 1; i < len; ++i) 
		if (inp[i-1] == inp[i])
			count[j] += 1; 
			else j++;	
					
	max = count[0];		
	for (int i = 0 ; i < len; i++)	
		if (count[i] > max)	
			max = count[i];
			 
	cout << "The largest number of identical characters located in series : " << max + 1;
			 
	delete []inp;
	delete []count;		 
	return 0;
}

