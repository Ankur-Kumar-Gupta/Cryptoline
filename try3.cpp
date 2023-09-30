#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <windows.h>
#include<iostream>
using namespace std;
void ascii_art()		//cryptoline
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	cout<<"\n\t";cout<<"**********************************************************************************";cout<<endl;
	cout<<"\t  ";cout<<" _____  ";cout<<" _____  ";cout<<"__   __ ";cout<<" _____  ";cout<<" _____  ";cout<<" _____  ";cout<<" _      ";cout<<" _____  ";cout<<" _   _  ";cout<<" _____  ";cout<<endl;
    cout<<"\t  ";cout<<"/  __ \\ ";cout<<"| ___ \\ ";cout<<"\\ \\ / / ";cout<<"| ___ \\ ";cout<<"|_   _| ";cout<<"|  _  | ";cout<<"| |     ";cout<<"|_   _| ";cout<<"| \\ | | ";cout<<"|  ___| ";cout<<endl;
    cout<<"\t  ";cout<<"| /  \\/ ";cout<<"| |_/ / ";cout<<" \\ V /  ";cout<<"| |_/ / ";cout<<"  | |   ";cout<<"| | | | ";cout<<"| |     ";cout<<"  | |   ";cout<<"|  \\| | ";cout<<"| |__   ";cout<<endl;
    cout<<"\t  ";cout<<"| |     ";cout<<"|    /  ";cout<<"  \\ /   ";cout<<"|  __/  ";cout<<"  | |   ";cout<<"| | | | ";cout<<"| |     ";cout<<"  | |   ";cout<<"| . ` | ";cout<<"|  __|  ";cout<<endl;
    cout<<"\t  ";cout<<"| \\__/\\ ";cout<<"| |\\ \\  ";cout<<"  | |   ";cout<<"| |     ";cout<<"  | |   ";cout<<"\\ \\_/ / ";cout<<"| |____ ";cout<<" _| |_  ";cout<<"| |\\  | ";cout<<"| |___  ";cout<<endl;
    cout<<"\t  ";cout<<" \\____/ ";cout<<"\\_| \\_| ";cout<<"  \\_/   ";cout<<"\\_|     ";cout<<"  \\_/   ";cout<<" \\___/  ";cout<<"\\_____/ ";cout<<" \\___/  ";cout<<"\\_| \\_/ ";cout<<"\\____/  ";cout<<endl;cout<<endl;
    cout<<"\t";cout<<"**********************************************************************************";
    SetConsoleTextAttribute(hConsole, 15);
	cout<<" \n \t \t \t \t \t \t \t \t --> Developed by Ankur";
}
int option()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout<<"\nDo you want to try again (y/n) : ";
	char x[5];
	char str1[] = "yes";char str2[] = "YES";char str3[] = "y";char str4[] = "Y";
	char str5[] = "NO";char str6[] = "no";char str7[] = "N";char str8[] = "n";
	gets(x);
	if((strcmp(x,str1)==0)||(strcmp(x,str2)==0)||(strcmp(x,str3)==0)||(strcmp(x,str4)==0))
	{
		//cout<<"\n Yes";
		return 1;
	}
	else if((strcmp(x,str5)==0)||(strcmp(x,str6)==0)||(strcmp(x,str7)==0)||(strcmp(x,str8)==0))
	{
		//cout<<"\n No";
		return 0;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 12);
		cout<<"\n \n \t >>> Wrong Input <<<";
		return option();
	}
}
int input1()
{
	int c;
	char a;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \n \t Choose the operation you want to perform :";
	cout<<"\n \n \t 1. Encryption \t 2. Decryption \t 0. Exit \n";
	cout<<"\n \n \t Option : \t";
	cin>>c;
	if(cin)
	{
		if(c!=1 && c!=2 && c!=0)
		{	
			SetConsoleTextAttribute(hConsole, 12);
			cout<<"\n  \t >>> Wrong Input <<<";
			return input1();
		}
		return c;
	}
}
int encryption()
{
	int c;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \n \t Choose the method of Encryption :";
	cout<<"\n \n \t 1. Reverse Cipher \t 2. Caesar Cipher \n \t 3. Vigenere Cipher \t 4. Hash Cipher \n \t 9. Back \t \t 0. Exit \n";
	cout<<"\n \n \t Option : \t";
	cin>>c;
	if(c!=1 && c!=2 && c!=3 && c!=4 && c!=9 && c!=0)
	{
		SetConsoleTextAttribute(hConsole, 12);
		cout<<"\n \n \t >>> Wrong Input <<<";
		return encryption();
	}
	return c;
}
int decryption()
{
	int c;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \n \t Choose the method of Decryption :";
	cout<<"\n \n \t 1. Caesar Cipher \t 2. Vigenere Cipher\n \t 3. Scytale Cipher \t 4. Hash \n \t 9. Back \t \t 0. Exit \n";
	cout<<"\n \n \t Option : \t";
	cin>>c;
	if(c!=1 && c!=2 && c!=3 && c!=4 && c!=9 && c!=0)
	{
		SetConsoleTextAttribute(hConsole, 12);
		cout<<"\n \n \t >>> Wrong Input <<<";
		return decryption();
	}
	return c;
}	
string msginput()
{
	int i;
	string msg;
	string computerPrank;
	getline(cin, computerPrank);
	cout<<"\n \t Enter the msg : ";
	getline(cin, msg);
	return msg;
}
void enReverser()
{
	system("CLS");
	ascii_art();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \t Reverse Encryptor :- \n";
	string msg, result;
	char a[1000], b[1000];
	int i, j, n;
	cout<<"\n";
	msg = msginput();
	n = msg.length();
	for(i=0;i<n;i++)
	{
		b[i]=msg[i];
	}
	for(i=(n-1),j=0;i>=0;i--,j++)
	{
		a[j]=b[i];
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	cout<<"\n \t Encrypted msg is : ";
	for(i=0;i<n;i++)
	{
		cout<<b[i];
	}
}
void enCaesar() 
{
	system("CLS");
	ascii_art();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \t Caesar Encryptor :- \n";
	int s;
	string msg;
	string result;
	cout<<"\n \n \t Enter shift (1-25) : ";
	cin>>s;
	msg = msginput();
	for (int i=0;i<msg.length();i++)
	{
		if (isupper(msg[i]))
			result += char(int(msg[i]+s-65)%26 +65);
		else
			result += char(int(msg[i]+s-97)%26 +97);
	}
	cout<<"\n \t Encrypted msg is : "<<result;
}
void enVigenere()
{
	system("CLS");
	ascii_art();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \t Vigenere Encryptor :- \n";
	int k = 0;
	string msg; string sneakyText; string key;
	string computerPrank;
	getline(cin, computerPrank);
	cout << "\n \n \t Enter key : ";
	cin >> key;
	msg = msginput();
	for (int i = 0; i < msg.length(); i++)
	{
		if (msg[i] == 32)
		{
			sneakyText[i] = '\x84';
		}
		else
		{
			sneakyText[i] = (((msg[i] - 97) + (key[k] - 97)) % 26)+97;
			k++;
			if (k == key.length())
			{
				k = 0;
			}
		}
	}
	cout << "\n \t Encrypted msg is : " << sneakyText;
}
void to_hexa(char* input, char* output)
{
   int loop=0;
   int i=0;
   while(input[loop] != '\0'){
      sprintf((char*)(output+i),"%02X", input[loop]);
      loop+=1;
      i+=2;
   }
   output[i++] = '\0';
}
void enHash()
{
	system("CLS");
	ascii_art();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"\n \t Hash Generator :- \n";
	string msg;
	char a[1000]={}, b[1000]={}, m[1000]={}, r[1000]={};
	int i, j, n;
	msg = msginput();
	n = msg.length();
	for(i=0;i<n;i++)
	{
		a[i]=msg[i]+1;
	}
	for(i=(n-1),j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	for(i=0;i<=n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
			a[i]=toupper(a[i]);
		else
			a[i]=tolower(a[i]);
	}
	for(i=0;i<n;i++)
	{
		m[i]=a[i];
	}
	to_hexa(m, r);
	cout<<"\n \t Encrypted msg : "<<r;
}
int main()
{
	repeat:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("CLS");
	string result;
	string msg;
	fflush(stdin);
	int check1,check2,check3,check4,s;
	ascii_art();
	check1 = input1();
	if(check1==1)
	{
		system("CLS");
		ascii_art();
		check2 = encryption();
		switch(check2)
		{
			case 1:
				enReverser();
				getch();
				return 0;
				break;
			case 2:
				enCaesar();
				getch();
				return 0;
				break;
			case 3:
				enVigenere();
				getch();
				return 0;
				break;
			case 4:
				enHash();
				getch();
				return 0;
				break;
			case 9:
				goto repeat;
				break;
			case 0:
				system("CLS");
				ascii_art();
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 10);
				cout<<"\n \n \n \t \t Have a Nice Day !!!";
				getch();
				return 0;
				break;
		}
	}
	else if(check1==2)
	{
		system("CLS");
		ascii_art();
		check3 = decryption();
		switch(check3)
		{
			case 1:
				//reverser();
				getch();
				return 0;
				break;
			case 2:
				//morse();
				getch();
				return 0;
				break;
			case 3:
				cout<<"\n Scytale cipher decryption";
				getch();
				return 0;
				break;
			case 4:
				cout<<"\n hash decryption";
				getch();
				return 0;
				break;
			case 9:
				goto repeat;
				break;
			case 0:
				system("CLS");
				ascii_art();
				//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 10);
				cout<<"\n \n \n \t \t Have a Nice Day !!!";
				getch();
				return 0;
				break;
		}
	}
	else if(check1==0)
	{
		system("CLS");
		ascii_art();
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"\n \n \n \t \t Have a Nice Day !!!";
		getch();
		return 0;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 12);
		cout<<"\n \n \t >>> Wrong Input <<<";
		goto repeat;
	}
	cout<<"\n";
	check4 = option();
	if(check4==1)
	{
		goto repeat;
	}
	else
	{
		system("CLS");
		ascii_art();
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		cout<<"\n \n \n \t \t Have a Nice Day !!!";
	}
	getch();
	return 0;
}
