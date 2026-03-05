#include <iostream>
#include <string>
using namespace std;

//function to encrypt a string using Caesar Cipher
string encrypt(string text,int shift){
 string result = "";
 for(char c:text){
     if(isalpha(c)){ //check if the character is a letter
 //determine if the character is uppercase or lowercase
       char base=isupper(c) ? 'A':'a';
 //shift the character and wrap it around the alphabet
        result+=char((c-base+shift)%26+base);
     }else{
 //if not an alphabet,keep the character unchanged
         result+=c;
     }
 }
 return result;
}

//function to decrypt a caesar cipher encrypted string
string decrypt(string text,int shift) {
 //decrypt by applying encryption with the reverse shift
 return encrypt(text,26-shift);
}

int main(){
 string message;
 int shift;
 cout << "=== Caesar Cipher Encryption ===" << endl;
 
 cout << "Enter a message: ";
 getline(cin,message);
 cout << "Enter shift value (1-25): ";
 cin >> shift;
 
 //validate the shift value
 if(shift < 1 || shift>25){
 cout << "Invalid shift. Must be between 1 and 25." <<endl;
 return 1;
 }
 
 //encrypt the message using caesar cipher
 string encrypted=encrypt(message,shift);
 cout<<"Encrypted message: " <<encrypted<<endl;
 
 //decrypt the message back to original
 string decrypted=decrypt(encrypted,shift);
 cout<<"Decrypted message: " <<decrypted<<endl;
 
 return 0;
}
