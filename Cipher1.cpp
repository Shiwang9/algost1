#include <iostream>
#include <math.h>
#include<conio.h>
#include<string.h>

using namespace std;

void encrypt (string ptext, int k)
{
	cout<<"The cipher text is: ";
	for ( int i = 0 ; i < ptext.length(); i++)
  { 

         if (isupper(ptext[i]))
     {
		 ptext[i]= ((ptext[i]+k-65)%26 +65);
         cout<< ptext[i] ;
     }
         else if (islower(ptext[i]))
     {
		 ptext[i] = ((ptext[i]+k-97)%26 +97);
         cout<< ptext[i] ;
     }
		 else
    {
		 cout<< ptext[i] ;
	}
  }
}

void decrypt (string ctext, int k)
{
	cout<<"The plain text is: ";
	for ( int i = 0 ; i < ctext.length(); i++)
  { 

         if (isupper(ctext[i]))
     {
		 ctext[i]= (((ctext[i]-k-65)+26)%26 +65);
         cout<< ctext[i] ;
     }
         else if (islower(ctext[i]))
     {
		 ctext[i] = (((ctext[i]-k-97)+26)%26 +97);
         cout<< ctext[i] ;
     }
		 else
    {
		 cout<< ctext[i] ;
	}
  }
}

int main()
{
    int n,k;
    cout << "Hey Hi! Let' cipher! But you gotta tell me two things." << endl;
    cout<< "How many ciphers will you create?"<<endl;
    cin>> n;
    cout<< "How many letters you wanna shift the plaintext to?"<<endl;
    cin>> k;
    string ctext[n],ptext[n];
    
	    for(int i=0;i<n;i++)
	    {
	    cout<< "Enter the "<<i+1<<" plaintext: ";
	    cin>> ptext[i];
	    encrypt(ptext[i],k);
	    cout<<endl;
	    }
    
	        for(int i=0;i<n;i++)
	    {
	    cout<< "Enter the "<<i+1<<" ciphertext: ";
	    cin>> ctext[i];
	    decrypt(ctext[i],k);
	    }
	return 0;
}


