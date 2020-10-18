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
    cout << "Você passou " << --pac << " pacotes" << endl;
    if (argc > 1) {
        system((string("sudo dpkg -i ") + argv[1]).c_str());
        system("sudo apt install -f -y");
    }
    system("clear");
    system("echo Obrigado $USER por usar o dapt!\n");
    /*for (int c = 0; c < argc; ++c) {
        cout << argv[c] << endl;
    }*/
    return 0;
}


