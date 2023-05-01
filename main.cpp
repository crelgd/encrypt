#include <iostream>
#include <fstream>
#include <string>
#include "file.h"

using namespace std;

int main(int argc, char *argv[])
{
    string encrypto = encrypt(argv[1], 3);

    cout << encrypto << endl;
}
