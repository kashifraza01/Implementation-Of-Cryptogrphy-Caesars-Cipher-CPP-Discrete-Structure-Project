#include <iostream> // For input/output operations
#include <string> // To use the string class
using namespace std; // Avoids having to write std:: before standard functions
// Function to encrypt a string using Caesar Cipher
string encrypt(string text, int shift) {
 string result = ""; // Variable to store the encrypted result
 // Loop through each character in the input string
 for (char c : text) {
 if (isalpha(c)) { // Check if the character is a letter
 // Determine if the character is uppercase or lowercase
 char base = isupper(c) ? 'A' : 'a';
 // Shift the character and wrap it around the alphabet
 result += char((c - base + shift) % 26 + base);
 } else {
 // If not an alphabet, keep the character unchanged
 result += c;
 }
 }
 return result; // Return the final encrypted string
}
// Function to decrypt a Caesar Cipher encrypted string
string decrypt(string text, int shift) {
 // Decrypt by applying encryption with the reverse shift
 return encrypt(text, 26 - shift);
}

int main() {
 string message; // Variable to hold user input message
 int shift; // Variable to hold shift value
 cout << "=== Caesar Cipher Encryption ===" << endl;
 // Get the message from the user
 cout << "Enter a message: ";
 getline(cin, message); // Read the full line including spaces
 // Get the shift value from the user
 cout << "Enter shift value (1-25): ";
 cin >> shift;
 // Validate the shift value
 if (shift < 1 || shift > 25) {
 cout << "Invalid shift. Must be between 1 and 25." << endl;
 return 1; // Exit the program with an error code
 }
 // Encrypt the message using Caesar Cipher
 string encrypted = encrypt(message, shift);
 cout << "Encrypted message: " << encrypted << endl;
 // Decrypt the message back to original

 string decrypted = decrypt(encrypted, shift);
 cout << "Decrypted message: " << decrypted << endl;
 return 0; // Exit the program successfully
}