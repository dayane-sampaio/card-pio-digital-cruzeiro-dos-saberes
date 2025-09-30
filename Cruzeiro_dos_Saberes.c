#include <stdio.h>
#include <string.h>

int main() {
    int opcaoMenu, opcaoItem, quantidade;
    float total = 0, preco;
    char continuarMenu = 's', continuarCategoria = 's';
    char itens[100][50]; // nomes dos itens escolhidos
    int qntd[100];       // quantidade de cada item
    float subtotal[100];  // subtotal de cada item
    int contador = 0;     // número de itens no pedido

    // Mensagem de boas-vindas
    printf("=====================================\n");
    printf("    Olá, seja bem-vind@ ao Cruzeiro dos Sabores!\n");
    printf("    Aqui, cada prato vem com uma pitada de aprendizado!🧂💻\n");
    printf("=====================================\n");

    while (continuarMenu == 's' || continuarMenu == 'S') {
        // Menu principal com validação
        do {
            printf("\nEscolha uma categoria para começar:\n");
            printf("1 - Pratos\n");
            printf("2 - Bebidas\n");
            printf("3 - Sobremesas\n");
            printf("4 - Finalizar pedido\n");
            printf("Opcao: ");
            scanf("%d", &opcaoMenu);
            if (opcaoMenu < 1 || opcaoMenu > 4) {
                printf("Opa! Escolha entre 1 e 4.\n");
            }
        } while (opcaoMenu < 1 || opcaoMenu > 4);

        switch (opcaoMenu) {
            case 1: // Pratos
                continuarCategoria = 's';
                while (continuarCategoria == 's' || continuarCategoria == 'S') {
                    printf("\n🍽️ --- Pratos --- 🍽️\n");
                    printf("1 - Lasanha Algoritmica (R$ 40.00)\n");
                    printf("2 - Pizza Estruturada (R$ 55.00)\n");
                    printf("3 - Hamburguer Binário (R$ 38.00)\n");
                    printf("4 - Panqueca do Pseudocódigo (R$ 30.00)\n");
                    printf("5 - Quibe da Query (R$ 12.00)\n");
                    printf("6 - Risoto de Variáveis (R$ 39.00)\n");

                    do {
                        printf("Escolha: ");
                        scanf("%d", &opcaoItem);
                        if(opcaoItem < 1 || opcaoItem > 6) {
                            printf("Opa! Escolha entre 1 e 6.\n");
                        }
                    } while(opcaoItem < 1 || opcaoItem > 6);

                    if (opcaoItem == 1) { preco = 40.0; strcpy(itens[contador], "Lasanha Algoritmica"); }
                    else if (opcaoItem == 2) { preco = 55.0; strcpy(itens[contador], "Pizza Estruturada"); }
                    else if (opcaoItem == 3) { preco = 38.0; strcpy(itens[contador], "Hamburguer Binário"); }
                    else if (opcaoItem == 4) { preco = 30.0; strcpy(itens[contador], "Panqueca do Pseudocódigo"); }
                    else if (opcaoItem == 5) { preco = 12.0; strcpy(itens[contador], "Quibe da Query"); }
                    else { preco = 39.0; strcpy(itens[contador], "Risoto de Variáveis"); }

                    do {
                        printf("Quantidade: ");
                        scanf("%d", &quantidade);
                        if(quantidade <= 0) {
                            printf("Quantidade invalida! Informe um numero maior que 0.\n");
                        }
                    } while(quantidade <= 0);

                    qntd[contador] = quantidade;
                    subtotal[contador] = preco * quantidade;
                    total += subtotal[contador];
                    contador++;

                    printf("✅ %d unidades de %s adicionadas ao pedido!\n", quantidade, itens[contador-1]);

                    do {
                        printf("Deseja adicionar outro prato? (s/n): ");
                        scanf(" %c", &continuarCategoria);
                        if (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N') {
                            printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
                        }
                    } while (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N');
                }
                break;

            case 2: // Bebidas
                continuarCategoria = 's';
                while (continuarCategoria == 's' || continuarCategoria == 'S') {
                    printf("\n🥤 --- Bebidas --- 🥤\n");
                    printf("1 - Refrigerante do Código (R$ 8.00)\n");
                    printf("2 - Suco dos Loops (R$ 12.00)\n");
                    printf("3 - Água do Conhecimento (R$ 6.00)\n");
                    printf("4 - Café do Debug (R$ 5.00)\n");
                    printf("5 - Smoothie de Arrays (R$ 15.00)\n");
                    printf("6 - Chá do Compiler (R$ 7.00)\n");

                    do {
                        printf("Escolha: ");
                        scanf("%d", &opcaoItem);
                        if(opcaoItem < 1 || opcaoItem > 6) {
                            printf("Opa! Escolha entre 1 e 6.\n");
                        }
                    } while(opcaoItem < 1 || opcaoItem > 6);

                    if (opcaoItem == 1) { preco = 8.0; strcpy(itens[contador], "Refrigerante do Código"); }
                    else if (opcaoItem == 2) { preco = 12.0; strcpy(itens[contador], "Suco dos Loops"); }
                    else if (opcaoItem == 3) { preco = 6.0; strcpy(itens[contador], "Água do Conhecimento"); }
                    else if (opcaoItem == 4) { preco = 5.0; strcpy(itens[contador], "Café do Debug"); }
                    else if (opcaoItem == 5) { preco = 15.0; strcpy(itens[contador], "Smoothie de Arrays"); }
                    else { preco = 7.0; strcpy(itens[contador], "Chá do Compiler"); }

                    do {
                        printf("Quantidade: ");
                        scanf("%d", &quantidade);
                        if(quantidade <= 0) {
                            printf("Quantidade invalida! Informe um numero maior que 0.\n");
                        }
                    } while(quantidade <= 0);

                    qntd[contador] = quantidade;
                    subtotal[contador] = preco * quantidade;
                    total += subtotal[contador];
                    contador++;

                    printf("✅ %d unidades de %s adicionadas ao pedido!\n", quantidade, itens[contador-1]);

                    do {
                        printf("Deseja adicionar outra bebida? (s/n): ");
                        scanf(" %c", &continuarCategoria);
                        if (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N') {
                            printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
                        }
                    } while (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N');
                }
                break;

            case 3: // Sobremesas
                continuarCategoria = 's';
                while (continuarCategoria == 's' || continuarCategoria == 'S') {
                    printf("\n🍨 --- Sobremesas --- 🍨\n");
                    printf("1 - Pudim da Sabedoria (R$ 10.00)\n");
                    printf("2 - Sorvete do Script (R$ 12.00)\n");
                    printf("3 - Brownie da Base de Dados (R$ 11.00)\n");
                    printf("4 - Mousse do Aprendizado (R$ 13.00)\n");
                    printf("5 - Torta de Funções (R$ 12.00)\n");
                    printf("6 - Gelatina de Bits (R$ 9.00)\n");

                    do {
                        printf("Escolha: ");
                        scanf("%d", &opcaoItem);
                        if(opcaoItem < 1 || opcaoItem > 6) {
                            printf("Opa! Escolha entre 1 e 6.\n");
                        }
                    } while(opcaoItem < 1 || opcaoItem > 6);

                    if (opcaoItem == 1) { preco = 10.0; strcpy(itens[contador], "Pudim da Sabedoria"); }
                    else if (opcaoItem == 2) { preco = 12.0; strcpy(itens[contador], "Sorvete do Script"); }
                    else if (opcaoItem == 3) { preco = 11.0; strcpy(itens[contador], "Brownie da Base de Dados"); }
                    else if (opcaoItem == 4) { preco = 13.0; strcpy(itens[contador], "Mousse do Aprendizado"); }
                    else if (opcaoItem == 5) { preco = 12.0; strcpy(itens[contador], "Torta de Funções"); }
                    else { preco = 9.0; strcpy(itens[contador], "Gelatina de Bits"); }

                    do {
                        printf("Quantidade: ");
                        scanf("%d", &quantidade);
                        if(quantidade <= 0) {
                            printf("Quantidade invalida! Informe um numero maior que 0.\n");
                        }
                    } while(quantidade <= 0);

                    qntd[contador] = quantidade;
                    subtotal[contador] = preco * quantidade;
                    total += subtotal[contador];
                    contador++;

                    printf("✅ %d unidades de %s adicionadas ao pedido!\n", quantidade, itens[contador-1]);

                    do {
                        printf("Deseja adicionar outra sobremesa? (s/n): ");
                        scanf(" %c", &continuarCategoria);
                        if (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N') {
                            printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
                        }
                    } while (continuarCategoria != 's' && continuarCategoria != 'S' && continuarCategoria != 'n' && continuarCategoria != 'N');
                }
                break;

            case 4: // Finalizar pedido
                continuarMenu = 'n';
                break;
        }

        if (continuarMenu != 'n') {
            do {
                printf("\nDeseja voltar ao menu principal? (s/n): ");
                scanf(" %c", &continuarMenu);
                if (continuarMenu != 's' && continuarMenu != 'S' && continuarMenu != 'n' && continuarMenu != 'N') {
                    printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
                }
            } while (continuarMenu != 's' && continuarMenu != 'S' && continuarMenu != 'n' && continuarMenu != 'N');
        }
    }

    // Exibir pedido final detalhado
    printf("\n=== Pedido Final ===\n");
    for(int i = 0; i < contador; i++){
        printf("%dx %s - R$ %.2f\n", qntd[i], itens[i], subtotal[i]);
    }
    printf("Subtotal: R$ %.2f\n", total);

    if(total >= 100.0){
        printf("Desconto de 10%% aplicado!\n");
        total = total * 0.9;
    }

    printf("Total a pagar: R$ %.2f\n", total);
    printf("Obrigad@ pela preferência! Até a próxima missão gastronômica!\n");

    return 0;
}