#include <iostream>
#include <windows.h>
#include <locale>
#include <string>
#include <ctime>
#define N 10
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese");

    string mapa[N][N];
    int  i, j;
    srand(time(NULL));

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            mapa[i][j] = "";
        }
    }

    for (int G = 0; G < 15; G++){
        int randomX = rand()%10;
        int randomY = rand()%10;

        if (mapa[randomY][randomX] == ""){
            mapa[randomY][randomX] = "\U0001F962";
        }   else {
            G--;
        }
    }

    for (int P = 0; P < 10; P++){
        int randomX = rand()%10;
        int randomY = rand()%10;

        if (mapa[randomY][randomX] == ""){
            mapa[randomY][randomX] = "\U0001F311";
        }   else {
            P--;
        }
    
    }

    for (int A = 0; A < 10; A++){
        int randomX = rand()%10;
        int randomY = rand()%10;

        if (mapa[randomY][randomX] == ""){
            mapa[randomY][randomX] = "\U0001F404";
        }   else {
            A--;
        }
    }

    for (int T = 0; T < 10; T++){
        int randomX = rand()%10;
        int randomY = rand()%10;

        if (mapa[randomY][randomX] == ""){
            mapa[randomY][randomX] = "\U0001F333";
        }   else {
            T--;
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
           if (mapa[i][j] == ""){
                mapa[i][j] = "\U0001F7E9";
            }
        }
    }


    int playerY, playerX, inventario[5] = {0,0,0,0,0}, obj;
    string anterior;
    bool concluido = false;
    playerY = N/2 - 1;
    playerX = N/2 - 1;
    anterior = mapa[playerY][playerX];

        mapa[playerY][playerX] = "\U0001F438";

        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                cout << mapa[i][j] << "\t";
            }
            cout << endl;
        }


    cout << "\nBem-vindo ao mundo quadrado! \nPor favor selecione seu objetivo: ";
    cout << "\n1 - repouso (2 arvores e 1 couro) \n2 - Luz e calor (4 gravetos e 2 pedras) \n3 - comida (1 fruta e 1 carne) \n4 - construção (8 pedras e 4 arvores) \n5 - equipamento (1 espada e 1 escudo)" << endl;
    cout << "Digite o número do objetivo: ";
    cin >> obj;

    while (obj < 1 || obj > 5){
        cout << "Opção inválida! Por favor, escolha um objetivo válido: ";
        cin >> obj;
    }

    cout << "Você escolheu o objetivo: " << obj << endl;

    return 0;
}