#include <iostream>
#include <string>
#include <ctime>
#include <locale>
#define N 10
using namespace std;

int main() {

    system("chcp 65001"); 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int playerX, playerY, playerX2, playerY2, objetivo, invp1[9] = {0}, invp2[9] = {0};

string player = "\U0001F988";
string player2 = "\U0001F419";
string pedra = "\U0001F311";
string graveto = "\U0001F331";
string arvore = "\U0001F333";
string animal = "\U0001F42E";
string monstro = "\U0001F9DF";
string grama = "\U0001F340";
string espada = "\U0001F5E1";
string escudo = "\U0001F6E1";
    string mapa[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mapa[i][j] = " ";
        }
    }

    srand(time(NULL));

    for (int i = 0; i < 15; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = graveto;
        } else {
            i--;
        }
    }
    for (int i = 0; i < 10; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = pedra;
        } else {
            i--;
        }
    }
    for (int i = 0; i < 10; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = arvore;
        } else {
            i--;
        }
    }
    for (int i = 0; i < 10; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = animal;
        } else {
            i--;
        }
    }
    for (int i = 0; i < 5; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = monstro;
        } else {
            i--;
        }
    }
    for (int i = 0; i < 1; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = espada; } 
        else {
            i--;
        }
    }
    for (int i = 0; i < 1; i++) {
        int x = rand() % N;
        int y = rand() % N;
        if (mapa[x][y] == " ") {
            mapa[x][y] = escudo; } 
        else {
            i--;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mapa[i][j] == " ") {
                mapa[i][j] = grama;
            }
        }
    }

    cout << "           _____                    _____                    _____\n";
    cout << "          /\\    \\                  /\\    \\                  /\\    \\\n";
    cout << "         /::\\    \\                /::\\    \\                /::\\    \\\n";
    cout << "         \\:::\\    \\              /::::\\    \\              /::::\\    \\\n";
    cout << "          \\:::\\    \\            /::::::\\    \\            /::::::\\    \\\n";
    cout << "           \\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\\n";
    cout << "            \\:::\\    \\        /:::/__\\:::\\    \\        /:::/__\\:::\\    \\\n";
    cout << "             \\:::\\    \\      /::::\\   \\:::\\    \\      /::::\\   \\:::\\    \\\n";
    cout << "              \\:::\\    \\    /::::::\\   \\:::\\    \\    /::::::\\   \\:::\\    \\\n";
    cout << "               \\:::\\    \\  /:::/\\:::\\   \\:::\\    \\  /:::/\\:::\\   \\:::\\    \\\n";
    cout << " _______________\\:::\\____\\/:::/__\\:::\\   \\:::\\____\\/:::/  \\:::\\   \\:::\\____\\\n";
    cout << " \\::::::::::::::::::/    /\\:::\\   \\:::\\   \\::/    /\\::/    \\:::\\   \\::/    /\n";
    cout << "  \\::::::::::::::::/____/  \\:::\\   \\:::\\   \\/____/  \\/____/ \\:::\\   \\/____/\n";
    cout << "   \\:::\\~~~~\\~~~~~~         \\:::\\   \\:::\\    \\               \\:::\\    \\\n";
    cout << "    \\:::\\    \\               \\:::\\   \\:::\\____\\               \\:::\\____\\\n";
    cout << "     \\:::\\    \\               \\:::\\   \\::/    /                \\::/    /\n";
    cout << "      \\:::\\    \\               \\:::\\   \\/____/                  \\/____/\n";
    cout << "       \\:::\\    \\               \\:::\\    \\\n";
    cout << "        \\:::\\____\\               \\:::\\____\\\n";
    cout << "         \\::/    /                \\::/    /\n";
    cout << "          \\/____/                  \\/____/\n";

    bool concluido1 = false;
    bool concluido2 = false;
    bool falha = false;
    int missoes;
    playerX = playerY = N/2;
    playerX2 = playerY2 = N/2 + 1;
    string anterior1, anterior2, direcao1, direcao2;
    anterior1 = mapa[playerY][playerX];
    anterior2 = mapa[playerY2][playerX2];
    mapa[playerY][playerX] = player;
    mapa[playerY2][playerX2] = player2;
    cout << "|_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
    cout << "Bem-vindo ao Mundo Quadrado!\n";
    
    cout << "Escolha uma missão:\n";
    cout << "1. Luz e calor: 4 braçadas de gravetos e 2 pedras\n";
    cout << "2. Comida: 1 fruta e 1 carne\n"; 
    cout << "3. Construção: 8 pedras e 4 árvores\n";
    cout << "4. Repouso: 2 árvores e 1 couro\n";
    cout << "5. Combate: 1 espada e 1 escudo\n";
    cout << "Digite o número da missão: ";
    cin >> missoes;

    while (!concluido1 && !concluido2) {

        cout << "MAPA: " << endl;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << mapa[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "Inventário Jogador 1: \tInventário Jogador 2:\n";
        cout << "Gravetos: " << invp1[0] << "\t\tGravetos: " << invp2[0] << endl;
        cout << "Pedras: " << invp1[1] << "\tPedras: " << invp2[1] << endl;
        cout << "Árvores: " << invp1[2] << "\tÁrvores: " << invp2[2] << endl;
        cout << "Carne: " << invp1[3] << "\tCarne: " << invp2[3] << endl;
        cout << "Couro: " << invp1[4] << "\tCouro: " << invp2[4] << endl;
        cout << "Espada: " << invp1[5] << "\tEspada: " << invp2[5] << endl;
        cout << "Escudo: " << invp1[6] << "\tEscudo: " << invp2[6] << endl;
        cout << "fruta: " << invp1[7] << "\tfruta: " << invp2[7] << endl;
    
        cout << "Player 1, use A, W, S, D para se mover e I para interagir (Você vence se cumprir o objetivo ou tocar o jogador 2): ";

        cin >> direcao1;

        // MOVIMENTAÇÃO PLAYER 1
        if (direcao1 == "A" || direcao1 == "a") {
            int novoX = playerX - 1;
            int novoY = playerY;
            if (novoX >= 0 && novoX < N) {
                // Coleta item antes de mover
                if (mapa[novoY][novoX] == graveto) invp1[0]++;
                else if (mapa[novoY][novoX] == pedra) invp1[1]++;
                else if (mapa[novoY][novoX] == arvore) invp1[2]++;
                else if (mapa[novoY][novoX] == animal) invp1[3]++;
                else if (mapa[novoY][novoX] == monstro) invp1[4]++;
                else if (mapa[novoY][novoX] == espada) invp1[5]++;
                else if (mapa[novoY][novoX] == escudo) invp1[6]++;
                anterior1 = grama;
                mapa[playerY][playerX] = anterior1;
                playerX = novoX;
                anterior1 = mapa[playerY][playerX];
                mapa[playerY][playerX] = player;
            }
        } else if (direcao1 == "W" || direcao1 == "w"){
            int novoX = playerX;
            int novoY = playerY - 1;
            if (novoY >= 0 && novoY < N) {
                // Coleta item antes de mover
                if (mapa[novoY][novoX] == graveto) invp1[0]++;
                else if (mapa[novoY][novoX] == pedra) invp1[1]++;
                else if (mapa[novoY][novoX] == arvore) invp1[2]++;
                else if (mapa[novoY][novoX] == animal) invp1[3]++;
                else if (mapa[novoY][novoX] == monstro) invp1[4]++;
                else if (mapa[novoY][novoX] == espada) invp1[5]++;
                else if (mapa[novoY][novoX] == escudo) invp1[6]++;
                anterior1 = grama;
                mapa[playerY][playerX] = anterior1;
                playerY = novoY;
                anterior1 = mapa[playerY][playerX];
                mapa[playerY][playerX] = player;
            }
        } else if (direcao1 == "S" || direcao1 == "s"){
            int novoX = playerX;
            int novoY = playerY + 1;
            if (novoY >= 0 && novoY < N) {
                // Coleta item antes de mover
                if (mapa[novoY][novoX] == graveto) invp1[0]++;
                else if (mapa[novoY][novoX] == pedra) invp1[1]++;
                else if (mapa[novoY][novoX] == arvore) invp1[2]++;
                else if (mapa[novoY][novoX] == animal) invp1[3]++;
                else if (mapa[novoY][novoX] == monstro) invp1[4]++;
                else if (mapa[novoY][novoX] == espada) invp1[5]++;
                else if (mapa[novoY][novoX] == escudo) invp1[6]++;
                anterior1 = grama;
                mapa[playerY][playerX] = anterior1;
                playerY = novoY;
                anterior1 = mapa[playerY][playerX];
                mapa[playerY][playerX] = player;
            }
        } else if (direcao1 == "D" || direcao1 == "d"){
            int novoX = playerX + 1;
            int novoY = playerY;
            if (novoX >= 0 && novoX < N) {
                // Coleta item antes de mover
                if (mapa[novoY][novoX] == graveto) invp1[0]++;
                else if (mapa[novoY][novoX] == pedra) invp1[1]++;
                else if (mapa[novoY][novoX] == arvore) invp1[2]++;
                else if (mapa[novoY][novoX] == animal) invp1[3]++;
                else if (mapa[novoY][novoX] == monstro) invp1[4]++;
                else if (mapa[novoY][novoX] == espada) invp1[5]++;
                else if (mapa[novoY][novoX] == escudo) invp1[6]++;
                anterior1 = grama;
                mapa[playerY][playerX] = anterior1;
                playerX = novoX;
                anterior1 = mapa[playerY][playerX];
                mapa[playerY][playerX] = player;
            }
        } else if (direcao1 == "I" || direcao1 == "i") {
            if (mapa[playerY][playerX] == graveto) {
                invp1[0]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == pedra) {
                invp1[1]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == arvore) {
                invp1[2]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == animal) {
                invp1[3]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == monstro) {
                invp1[4]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == espada) {
                invp1[5]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == escudo) {
                invp1[6]++;
                mapa[playerY][playerX] = grama;
            } else if (mapa[playerY][playerX] == player2) {
                cout << "Você encontrou o Jogador 2!" << endl;
                concluido1 = true;
            }
        }

        if (missoes == 1 && invp1[0] >= 4 && invp1[1] >= 2) {
            concluido1 = true;
            cout << "Missão Luz e calor concluída!" << endl;
        } else if (missoes == 2 && invp1[3] >= 1 && invp1[4] >= 1) {
            concluido1 = true;
            cout << "Missão Comida concluída!" << endl;
        } else if (missoes == 3 && invp1[1] >= 8 && invp1[2] >= 4) {
            concluido1 = true;
            cout << "Missão Construção concluída!" << endl;
        } else if (missoes == 4 && invp1[2] >= 2 && invp1[4] >= 1) {
            concluido1 = true;
            cout << "Missão Repouso concluída!" << endl;
        } else if (missoes == 5 && invp1[5] >= 1 && invp1[6] >= 1) {
            concluido1 = true;
            cout << "Missão Combate concluída!" << endl;
        }

        cout << "Player 2, use A, W, S, D para se mover e I para interagir (Você vence se cumprir o objetivo e perde se tocar o jogador 1): ";
        cin >> direcao2;

        // MOVIMENTAÇÃO PLAYER 2
        if (direcao2 == "A" || direcao2 == "a"){
            mapa[playerY2][playerX2] = anterior2;
            playerX2 = playerX2 - 1;
            anterior2 = mapa[playerY2][playerX2];
            mapa[playerY2][playerX2] = player2;
        } else if (direcao2 == "W" || direcao2 == "w"){
            mapa[playerY2][playerX2] = anterior2;
            playerY2 = playerY2 - 1;
            anterior2 = mapa[playerY2][playerX2];
            mapa[playerY2][playerX2] = player2;
        } else if (direcao2 == "S" || direcao2 == "s"){
            mapa[playerY2][playerX2] = anterior2;
            playerY2 = playerY2 + 1;
            anterior2 = mapa[playerY2][playerX2];
            mapa[playerY2][playerX2] = player2;
        } else if (direcao2 == "D" || direcao2 == "d"){
            mapa[playerY2][playerX2] = anterior2;
            playerX2 = playerX2 + 1;
            anterior2 = mapa[playerY2][playerX2];
            mapa[playerY2][playerX2] = player2;
        } else if (direcao2 == "I" || direcao2 == "i") {
            if (mapa[playerY2][playerX2] == graveto) {
                invp2[0]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == pedra) {
                invp2[1]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == arvore) {
                invp2[2]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == animal) {
                invp2[3]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == monstro) {
                invp2[4]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == espada) {
                invp2[5]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == escudo) {
                invp2[6]++;
                mapa[playerY2][playerX2] = grama;
            } else if (mapa[playerY2][playerX2] == player) {
                cout << "O Jogador 1 te encontrou!" << endl;
                concluido1 = true;
            }
        }

            if (missoes == 1 && invp2[0] >= 4 && invp2[1] >= 2) {
                concluido2 = true;
                cout << "Missão Luz e calor concluída!" << endl;
            } else if (missoes == 2 && invp2[3] >= 1 && invp2[4] >= 1) {
                concluido2 = true;
                cout << "Missão Comida concluída!" << endl;
            } else if (missoes == 3 && invp2[1] >= 8 && invp2[2] >= 4) {
                concluido2 = true;
                cout << "Missão Construção concluída!" << endl;
            } else if (missoes == 4 && invp2[2] >= 2 && invp2[4] >= 1) {
                concluido2 = true;
                cout << "Missão Repouso concluída!" << endl;
            } else if (missoes == 5 && invp2[5] >= 1 && invp2[6] >= 1) {
                concluido2 = true;
                cout << "Missão Combate concluída!" << endl;
            }
    
    }

    if (concluido1) {
        cout << "Parabéns Jogador 1, você completou todas as missões!" << endl;
    } else if (concluido2) {
        cout << "Parabéns Jogador 2, você completou todas as missões!" << endl;
    } else if (falha){
        cout << "Nenhum jogador completou as missões." << endl;
    }


    cout << "CREDITOS:\n";
    cout << "Desenvolvido por: GUIZO (José Guilherme P. da Luz)\n";
    cout << "           _____                    _____                    _____\n";
    cout << "          /\\    \\                  /\\    \\                  /\\    \\\n";
    cout << "         /::\\    \\                /::\\    \\                /::\\    \\\n";
    cout << "         \\:::\\    \\              /::::\\    \\              /::::\\    \\\n";
    cout << "          \\:::\\    \\            /::::::\\    \\            /::::::\\    \\\n";
    cout << "           \\:::\\    \\          /:::/\\:::\\    \\          /:::/\\:::\\    \\\n";
    cout << "            \\:::\\    \\        /:::/__\\:::\\    \\        /:::/__\\:::\\    \\\n";
    cout << "             \\:::\\    \\      /::::\\   \\:::\\    \\      /::::\\   \\:::\\    \\\n";
    cout << "              \\:::\\    \\    /::::::\\   \\:::\\    \\    /::::::\\   \\:::\\    \\\n";
    cout << "               \\:::\\    \\  /:::/\\:::\\   \\:::\\    \\  /:::/\\:::\\   \\:::\\    \\\n";
    cout << " _______________\\:::\\____\\/:::/__\\:::\\   \\:::\\____\\/:::/  \\:::\\   \\:::\\____\\\n";
    cout << " \\::::::::::::::::::/    /\\:::\\   \\:::\\   \\::/    /\\::/    \\:::\\   \\::/    /\n";
    cout << "  \\::::::::::::::::/____/  \\:::\\   \\:::\\   \\/____/  \\/____/ \\:::\\   \\/____/\n";
    cout << "   \\:::\\~~~~\\~~~~~~         \\:::\\   \\:::\\    \\               \\:::\\    \\\n";
    cout << "    \\:::\\    \\               \\:::\\   \\:::\\____\\               \\:::\\____\\\n";
    cout << "     \\:::\\    \\               \\:::\\   \\::/    /                \\::/    /\n";
    cout << "      \\:::\\    \\               \\:::\\   \\/____/                  \\/____/\n";
    cout << "       \\:::\\    \\               \\:::\\    \\\n";
    cout << "        \\:::\\____\\               \\:::\\____\\\n";
    cout << "         \\::/    /                \\::/    /\n";
    cout << "          \\/____/                  \\/____/\n";

    return 0;
}