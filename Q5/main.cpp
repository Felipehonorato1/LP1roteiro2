#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string zeze;
    ifstream arquivo;
    arquivo.open("texto.txt");
    getline(arquivo,zeze);

    ofstream backupfile;
    backupfile.open("backuptexto.txt");
    backupfile << zeze;

    return 0;
}
