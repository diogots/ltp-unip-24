#include <iostream>
#include <locale.h>
using namespace std;

int main()
{   //ajustando a acentuação
    setlocale(LC_ALL,"");
    /*

    ALGORITMO:

        declare h, r, areaCil: areaCil

        PI = 3.1415
        leia h
        leia r

        areacil <- PI*r*r + h*2*PI*r

        declare custaLata, litrosPorLata, rendimento, custoTotal: areacil
        declare qtdeTotal : Inteiro

        leia custoLata
        leia litrosPorLata
        leia rendimento

        qtdeTotal <- areacil/(litrosPorLata*rendimento) + 1
        custoTotal <- qtdeTotal*custoLata

        escreva qtdeTotal,custoTotal

    FIM ALGORITMO

    */
    float h,r,areaCil;
    cout << "Altura do cilindro (m):" << endl;
    cin >> h;
    cout << "raio do cilindro (m):" << endl;
    cin >> r;
    #define PI 3.1415
    //calcular area do cilindro
    areaCil = PI*r*r + h*2*PI*r;

    float custoLata, litrosPorLata, rendimento;
    cout << "Custo da lata (R$):" << endl;
    cin >> custoLata;
    cout << "Litros por lata (l):" << endl;
    cin >> litrosPorLata;
    cout << "Rendimento por lata (m^2/l):" << endl;
    cin >> rendimento;

    //declarando custo total e quantidade total
    float custoTotal; //custo total da pintura
    int qtdeTotal;

    qtdeTotal = (areaCil/litrosPorLata*rendimento) + 1;
    custoTotal = qtdeTotal*custoLata;

    cout << "Qtde de latas necessárias: " << qtdeTotal << " latas" <<endl;
    cout << "custo total: R$ " << custoTotal << endl;

    return 0;
}
