#include <iostream>
#include <ctime>
using namespace std;
#define N 10

void criaMapa(string mapa[N][N]){
    int randomX, randomY;

     for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            mapa[i][j] = "";
        }
    }
    
    srand(time(NULL));
        for (int gravetos = 0; gravetos < 15; gravetos++){
            randomX = rand()%10;
            randomY = rand()%10;
            if (mapa[randomY][randomX] == ""){
                mapa[randomY][randomX] = "G";
            } else {
                gravetos--;
            }
        }
        for (int pedras = 0; pedras < 10; pedras++){
            randomX = rand()%10;
            randomY = rand()%10;
            if (mapa[randomY][randomX] == ""){
                mapa[randomY][randomX] = "P";
            } else {
                pedras--;
            }
        }
        for (int arvores = 0; arvores < 10; arvores++){
            randomX = rand()%10;
            randomY = rand()%10;
            if (mapa[randomY][randomX] == ""){
                mapa[randomY][randomX] = "a";
            } else {
                arvores--;
            }
        }
        for (int animais = 0; animais < 10; animais++){
            randomX = rand()%10;
            randomY = rand()%10;
            if (mapa[randomY][randomX] == ""){
                mapa[randomY][randomX] = "b";
            } else {
                animais--;
            }
        }
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (mapa[i][j] == "")
                {
                    mapa[i][j] = "+";
                }
                
            }
        }

    }

void exibeMapa(string mapa[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }
}

void movePlayer(string mapa[N][N], int playerX, int playerY, string &itemAnterior, int inventario[]) {
    string move;
    cin >> move;

    mapa[playerY][playerX] = itemAnterior;

    if (move == "w" && playerY > 0) {
        playerY--;
    } else if (move == "s" && playerY < N-1) {
        playerY++;
    } else if (move == "a" && playerX > 0) {
        playerX--;
    } else if (move == "d" && playerX < N-1) {
        playerX++;
    }
    else {
        cout << "Movimento invalido!" << endl;
    }

    if (mapa[playerY][playerX] != "+") {
        cout << "deseja pegar o item? (s/n): ";
        string resposta;
        cin >> resposta;
        if (resposta == "s") {
            cout << "Item coletado: " << mapa[playerY][playerX] << endl;
            if (mapa[playerY][playerX] == "G") {
                inventario[1]++;
            } else if (mapa[playerY][playerX] == "P") {
                inventario[2]++;
            } else if (mapa[playerY][playerX] == "a") {
                inventario[3]++;
            } else if (mapa[playerY][playerX] == "b") {
                inventario[4]++;
            }
        }
    }

    itemAnterior = mapa[playerY][playerX];
    
    mapa[playerY][playerX] = "<";
}

int main() {

    bool fim = false;
    int playerX = N/2, playerY = N/2;
    int inventario[5] = {0, 0, 0, 0, 0}; 
    string mapa[N][N];

    criaMapa(mapa);
    string itemAnterior = mapa[N/2][N/2];
    mapa[playerY][playerX] = "<"; 

    while (fim == false) {
        exibeMapa(mapa);
        movePlayer(mapa, playerX, playerY, itemAnterior, inventario); 
    }
    return 0;
}