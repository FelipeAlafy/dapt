//Utilitário para instalar aplicativos via linha de terminal na distribuição Elementary OS
/*
 *  Licença MIT
 *
 *  Copyright (c) 2020 Felipe Alafy
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv){
    int pac = argc;
    cout << --pac << " packages. Installing ..." << endl;
    if (argc > 1) {
        for (int c = 1; c < argc; c++) {
            cout << (string("Installing package: ") + argv[c]).c_str() << endl;
            system((string("sudo dpkg -i ") + argv[c]).c_str());
            system("sudo apt install -f -y");
        }
    }
    system("clear");
    system("echo Thank you $USER for running dapt!\n");
    /*for (int c = 0; c < argc; ++c) {
        cout << argv[c] << endl;
    }*/
    return 0;
}
