#include <iostream>
#define tamTurno 3
#define tamDia 6
using namespace std;

void alumnoCursa(bool [tamTurno][tamDia]);
char diaSemana(int);

int main()
{
    bool turnos[tamTurno][tamDia] = {
        {true, false, true, false, true, false},
        {false, true, false, true, false, true},
        {true, false, true, false, true, false}
    };
    cout << "Hello world!" << endl;
    alumnoCursa(turnos);
    return 0;
}

void alumnoCursa(bool vectCursada[tamTurno][tamDia]) {
    for(int i = 0; i < tamTurno; i ++) {
        for(int j = 0; j < tamDia; j++) {
            if(vectCursada[i][j]) {
                cout << "Valor i: " << i << " - dia: " << diaSemana(j) << endl;
            }
        }
        cout << "Termino j" << endl;
    }
    cout << "Termino i" << endl;
}

char diaSemana( int dia) {
    switch(dia) {
        case 1:
            return "lun";
            break;
        case 2:
            return "mar";
            break;
        case 3:
            return "mie";
            break;
        case 4:
            return "jue";
            break;
        case 5:
            return "vie";
            break;
        case 6:
            return "sab";
            break;
    }
}
