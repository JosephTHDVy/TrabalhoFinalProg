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

int main() {

    int fim;

    string mapa[N][N];

    criaMapa(mapa);

    exibeMapa(mapa);
    
    cin >> fim;
    return 0;
}