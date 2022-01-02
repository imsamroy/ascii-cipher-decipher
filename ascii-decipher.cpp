#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    fstream asciiFile;
    string asciiStore;

    asciiFile.open("message.txt", ios::in); //read mode
    if (asciiFile.is_open()) {
        getline(asciiFile, asciiStore);
    }

    size_t count = count_if( asciiStore.begin(), asciiStore.end(), []( char c ) { return isdigit( c ); } );
    int x = count/3;
    cout << endl <<"The message is of: " << x << " characters";
    cout << endl << "The message is: ";
    char arr[x];
    int arr2[x];
    string str[asciiStore.length()];
    string s;

    for (int a = 0; a < asciiStore.length(); a++)
    {
        str[a] = asciiStore[a];
    }
    
    for (int i = 0; i < asciiStore.length(); i = i+3)
    {
        string s = str[i] + str[i+1] + str[i+2];
        for (int j = 0; j < 1; j++)
        {
            arr2[j] = stoi(s);
            arr[j] = (char)arr2[j];
            cout << arr[j];
        }
    }
    cout << endl;
    
}