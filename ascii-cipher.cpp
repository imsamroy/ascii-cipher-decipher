#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
  string text;
  cout << "ASCII Cipher Decipher (v1.0.0)" << endl;
  cout << "Enter the text to be ciphered: ";
  getline(cin, text);

  char arr[text.length()];
  int arr2[text.length()];

  fstream asciiFile;
  asciiFile.open("message.txt", ios::out); //write mode
  if (asciiFile.is_open()) {

  for (int i = 0; i < text.length(); i++) {
    arr[i] = text[i];
    arr2[i] = (int)arr[i];
    asciiFile << setfill('0') << setw(3) << arr2[i];
  } }
  asciiFile.close();

  cout << "The message is stored in the file (message.txt) in ASCII format" << endl;
  cout << "Press enter to exit" << endl;
}
