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
        cout << "|    Quitanda do seu Zé        |\n";
        cout << "--------------------------------\n";
        cout << " Digite a opção desejada:\n";
        cout << "1. Ler próximo produto\n";
        cout << "2. Finalizar compra\n";
        cout << "3. Cancelar compra\n";
        cout << "--------------------------------\n";
        cout << "Opção:";
        //ler opção
        cin >> opc;

        //tratar opção
        switch(opc){
            case 1:{
                //ler mais um produto
                int opProd;
                do{
                    //menu produto
                    cout << "Leitura de produto:" << endl;
                    cout << "1. por unidade\n";
                    cout << "2. por peso\n";
                    cout << "Opção:";
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
                                    cout << "quantidade inválida!" << endl;
                                }
                            }
                            //validar preco
                            while(TRUE){
                                cout << "Preço unitário:";
                                cin >> precoUnt;
                                if (precoUnt > 0){
                                    break;
                                }else{
                                    cout << "Preço inválida!" << endl;
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
                                    cout << "Peso inválido!" << endl;
                                }
                            }
                            //validar preco
                            while(TRUE){
                                cout << "Preço por kg:";
                                cin >> precoKg;
                                if (precoKg > 0){
                                    break;
                                }else{
                                    cout << "Preço inválida!" << endl;
                                }
                            }
                            double custoProd;
                            custoProd = peso*precoKg;
                            totalCompra = totalCompra + custoProd;
                            cout << "Produto adicionado na compra!\n";
                            break;
                        }
                        default: {
                            cout << "Opção inválida!";
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
                    cout << "1. À vista (15% de desc)\n";
                    cout << "2. À Prazo\n";
                    cout << "Opção:";
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
                                    cout << "quantidade inválida!" << endl;
                                }
                            }
                            double precoParcela;
                            precoParcela = totalCompra/numParcelas;
                            cout << "Total compra: " << numParcelas << " parcelas de R$ " << precoParcela << endl;
                        }default:
                            cout << "Opção inválida!\n";

                    }
                }while(opPgto != 1 && opPgto != 2);

                break;
            }case 3:{
                cout << "Encerra programa" << endl;
                break;
            }default:{
                cout << "Opção inválida!" << endl;
            }

        }
    }while(opc != 3);
}
