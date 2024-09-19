#include <iostream>
#include <locale.h>

using namespace std;

/*

*/

#define TRUE 1
#define FALSE 0

int main()
{
    //ajusdar a acentuação
    setlocale(LC_ALL,"");
    //ler uma opção em loop até que seja 3 (sai do programa)
    int opc;
    double totalCompra = 0;
    do{
        //imprimir menu
        cout << "\a";
        cout << "*****************************************\n";
        cout << "|        Quintandinha do seu Zé        |\n";
        cout << "*****************************************\n";
        cout << " Digite a opção desejada:\n";
        cout << " 1. Ler próximo produto\n";
        cout << " 2. Finalizar compra\n";
        cout << " 3. Cancelar compra\n";
        cout << "*****************************************\n";
        cout << "Opção:";
        //ler opção
        cin >> opc;

        switch(opc){
            case 1:{
                //lógica para ler prox produto
                int opcProd;
                do{
                    cout << "Digite a opção deseja:\n";
                    cout << " 1. Por unidade\n";
                    cout << " 2. por peso \n";
                    cout << " 3. Voltar \n";

                    cout << "*******************************\n";
                    cout << "Opção:";
                    cin >> opcProd;

                    switch(opcProd){
                        case 1:{
                            //lógica por unidade
                            int qtde;
                            double precoUnt;
                            while(TRUE){
                                cout << "Quantidade:";
                                cin >> qtde;
                                if (qtde > 0){
                                    break;
                                }else{
                                    cout << "Leitura inválida!\n";
                                }
                            }
                            while(TRUE){
                                cout << "Preço unitário:";
                                cin >> precoUnt;
                                if (precoUnt > 0){
                                    break;
                                }else{
                                    cout << "Leitura inválida!\n";
                                }
                            }
                            double custoProd;
                            custoProd = qtde*precoUnt;
                            totalCompra = totalCompra + custoProd;
                            cout << "Total parcial: R$ " << totalCompra << "\n";
                            cout << "Produto cadastrado na compra...\n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            break;
                        }case 2:{
                            //lógica por kg
                            double peso;
                            double precoKg;
                            while(TRUE){
                                cout << "Peso:";
                                cin >> peso;
                                if (peso > 0){
                                    break;
                                }else{
                                    cout << "Leitura inválida!\n";
                                }
                            }
                            while(TRUE){
                                cout << "Preço por kilo:";
                                cin >> precoKg;
                                if (precoKg > 0){
                                    break;
                                }else{
                                    cout << "Leitura inválida!\n";
                                }
                            }
                            double custoProd;
                            custoProd = peso*precoKg;
                            totalCompra = totalCompra + custoProd;
                            cout << "Total parcial: R$ " << totalCompra << "\n";
                            cout << "Produto cadastrado na compra...\n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            break;
                        }case 3:{
                            cout << "cancelando operação...\n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            break;
                        }default:{
                            cout<<"Opção inválida!";
                        }
                    }

                }while(opcProd != 1 && opcProd !=2 && opcProd !=3);
                break;
            }case 2:{
                int opcPgto;
                do{ cout << "Total da compra: R$" << totalCompra << "\n";
                    cout << "Digite a opção deseja:\n";
                    cout << " 1. Pagamento à vista (15% de desc.)\n";
                    cout << " 2. Pagamento à prazo \n";
                    cout << " 3. Voltar \n";
                    cout << "*******************************\n";
                    cout << "Opção:";
                    cin >> opcPgto;

                    switch(opcPgto){
                        case 1:{
                            cout << "Total à vista: R$ " << (totalCompra*0.85) << "\n";
                            cout << "Compra finalizada! \n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            opc = 3;
                            break;
                        }case 2:{
                            int numParcelas;
                            while(TRUE){
                                cout << "Número de parcelas:";
                                cin >> numParcelas;
                                if (numParcelas > 0){
                                    break;
                                }else{
                                    cout << "Leitura inválida!\n";
                                }
                            }
                            cout << "Total à prazo: " << numParcelas << " x de R$ " << (totalCompra/numParcelas) << "\n";
                            cout << "Compra finalizada! \n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            opc = 3;
                            break;
                        }case 3:{
                            cout << "cancelando operação...\n";
                            fflush(stdin);
                            cout << "Digite 'ENTER' para continuar...\n";
                            getchar();
                            system("cls");
                            break;
                        }default:{
                            cout << "Opção inválida!\n";
                        }
                    }
                }while( opcPgto <= 0 || opcPgto >=4);
                break;
            }case 3:{
                cout << "Cancelar compra\n";
                cout << "cancelando operação...\n";
                fflush(stdin);
                cout << "Digite 'ENTER' para continuar...\n";
                getchar();
                system("cls");
                break;
            }default:{
                cout << "Opção Inválida!\n";
            }
        }

    }while(opc!=3);
    cout << "Obrigado e Volte Sempre..." << endl;
    return 0;
}
