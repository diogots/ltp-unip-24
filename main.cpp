#include <iostream>
#include <locale.h>

using namespace std;

#define TRUE 1
#define FALSE 0

int main()
{
    setlocale(LC_ALL,"");
    int opc;
    double totalCompra = 0;
    do{ // imprimir menu
        cout << "--------------------------------\n";
        cout << "|    Quitanda do seu Z�        |\n";
        cout << "--------------------------------\n";
        cout << " Digite a op��o desejada:\n";
        cout << "1. Ler pr�ximo produto\n";
        cout << "2. Finalizar compra\n";
        cout << "3. Cancelar compra\n";
        cout << "--------------------------------\n";
        cout << "Op��o:";
        //ler op��o
        cin >> opc;

        //tratar op��o
        switch(opc){
            case 1:{
                //ler mais um produto
                int opProd;
                do{
                    //menu produto
                    cout << "Leitura de produto:" << endl;
                    cout << "1. por unidade\n";
                    cout << "2. por peso\n";
                    cout << "Op��o:";
                    cin >> opProd;
                    switch(opProd){

                        case 1:{
                            //tratar prod por und
                            int qtde;
                            double precoUnt;
                            //validar qtde
                            while(TRUE){
                                cout << "Quantidade:";
                                cin >> qtde;
                                if (qtde > 0){
                                    break;
                                }else{
                                    cout << "quantidade inv�lida!" << endl;
                                }
                            }
                            //validar preco
                            while(TRUE){
                                cout << "Pre�o unit�rio:";
                                cin >> precoUnt;
                                if (precoUnt > 0){
                                    break;
                                }else{
                                    cout << "Pre�o inv�lida!" << endl;
                                }
                            }
                            double custoProd;
                            custoProd = qtde*precoUnt;
                            totalCompra = totalCompra + custoProd;
                            cout << "Produto adicionado na compra!\n";
                            break;
                        }case 2:{

                            //tratar prod por kg
                            double peso;
                            double precoKg;
                            //validar peso
                            while(TRUE){
                                cout << "Peso (Kg):";
                                cin >> peso;
                                if (peso > 0){
                                    break;
                                }else{
                                    cout << "Peso inv�lido!" << endl;
                                }
                            }
                            //validar preco
                            while(TRUE){
                                cout << "Pre�o por kg:";
                                cin >> precoKg;
                                if (precoKg > 0){
                                    break;
                                }else{
                                    cout << "Pre�o inv�lida!" << endl;
                                }
                            }
                            double custoProd;
                            custoProd = peso*precoKg;
                            totalCompra = totalCompra + custoProd;
                            cout << "Produto adicionado na compra!\n";
                            break;
                        }
                        default: {
                            cout << "Op��o inv�lida!";
                        }

                    }

                }while(opProd != 1 && opProd != 2);


                break;
            }case 2:{
                //finalizar compra
                int opPgto;
                do{
                    cout << "Finalizando compra..." << endl;
                    cout << "Total: R$ " << totalCompra << endl;
                    cout << "Qual a forma de pagamento?\n";
                    cout << "1. � vista (15% de desc)\n";
                    cout << "2. � Prazo\n";
                    cout << "Op��o:";
                    cin >> opPgto;
                    switch(opPgto){
                        case 1:{
                            totalCompra = totalCompra*0.85;
                            cout << "Total compra: R$ " << totalCompra << endl;
                            break;
                        }case 2:{
                            int numParcelas;
                            while(TRUE){
                                cout << "Quantidade de parcelas:";
                                cin >> numParcelas;
                                if (numParcelas > 0){
                                    break;
                                }else{
                                    cout << "quantidade inv�lida!" << endl;
                                }
                            }
                            double precoParcela;
                            precoParcela = totalCompra/numParcelas;
                            cout << "Total compra: " << numParcelas << " parcelas de R$ " << precoParcela << endl;
                        }default:
                            cout << "Op��o inv�lida!\n";

                    }
                }while(opPgto != 1 && opPgto != 2);

                break;
            }case 3:{
                cout << "Encerra programa" << endl;
                break;
            }default:{
                cout << "Op��o inv�lida!" << endl;
            }

        }
    }while(opc != 3);
}
