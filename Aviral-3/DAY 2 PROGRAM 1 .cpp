
#include<bits/stdc++.h> 
using namespace std; 

bool isReversible(string str) 
{ 
	int i = 0, j = str.length()-1; 

	
	while (i < j) 
	{ 
		if (str[i] != str[j]) 
			return false; 
		i++; 
		j--; 
	} 
	return true; 
} 

int main() 
{ 
string str="aba"; 
if (isReversible(str)) 
	cout << "YES"; 
else
	cout << "NO"; 
return 0; 
} 

   


 
