#include <iostream>
#include <ctime>
using namespace std;
#define N 10

void criaMapa(string mapa[N][N]){

     for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            mapa[i][j] = "";
        }
    }
    
    srand(time(NULL));
        for (int gravetos = 0; gravetos < 16; gravetos++){
            if()
        }
    }

void exibeMapa(string mapa[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << mapa[i][j] << "\t";
        }
        cout << endl << endl;
    }
}

int main
() {
    int fim;
    string mapa[N][N];
    criaMapa(mapa);
    exibeMapa(mapa);
    cin >> fim;
    return 0;
}