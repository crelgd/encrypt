#include <fstream>
#include "file.h"

string getFileContent(string file)
{
    string line;
    string content;

    ifstream source(file);
    if (source.is_open()) {
        while (getline(source, line)) {
            content = content + line + "\n";
        } return content;
    }
}

string encrypt(string plaintext, int key) {
    string ciphertext = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            char c = (toupper(plaintext[i]) - 'A' + key) % 26 + 'A';
            ciphertext += c;
        } else {
            ciphertext += plaintext[i];
        }
    }
    return ciphertext;
}
