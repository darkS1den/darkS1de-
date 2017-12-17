#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	char *strinp = new char [501];
	char *str2 = new char [501];
	int *out = new int [501];
	cout << "Enter string\n";
	gets(strinp);
	
	int num = 0;
	for (int i = 0; i < strlen(strinp); i++)
	{
		if(strchr(str2, strinp[i]) == NULL)
		{
			str2[num] = strinp[i];
			num++;
		}	
	}
	
	for (int i = 0; i < strlen(str2); i++)
		out[i] = 0;
	
	int k = 0;
	for (int i = 0; i < strlen(str2) ; i++)
		for (int j = 0; j < strlen(strinp) ; j++)	
			if(str2[i] == strinp[j])
				out[i] += 1;	
			
	for (int i = 0; i < strlen(str2); i++)
		cout  << "\n" << str2[i] << " - " << out[i];
		
	delete[]strinp;
	delete[]str2;
	delete[] out;
	return 0;
}

