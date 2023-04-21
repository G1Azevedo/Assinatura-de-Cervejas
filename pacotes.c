#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pacotes.h"

//Funções Módulo Pacote

void modulo_pacote(void) {
    char opcao;
    do {
        opcao = tela_menu_pacote();
        switch(opcao) {
            case '1': 	tela_cadastro_pacote();
                        break;
            case '2': 	tela_pesquisar_pacote();
                        break;
            case '3': 	tela_edicao_pacote();
                        break;
            case '4': 	tela_excluir_pacote();
                        break;
            case '5': 	tela_recuperar_pacote();
                        break;                        
        } 		
    } while (opcao != '0');
}

char tela_menu_pacote(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Pacotes = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar pacote                                          ///\n");
    printf("///            2. Pesquisar pacote                                          ///\n");
    printf("///            3. Editar pacote                                             ///\n");
    printf("///            4. Excluir pacote                                            ///\n");
    printf("///            5. Recuperar pacote                                          ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return op;
}

void tela_cadastro_pacote(void) {
    char codigo_pacote[4];
    char nome_pacote[51];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de pacote = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código do pacote: ");
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///            Digite o nome do pacote: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ 0-9 +]", nome_pacote);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_pesquisar_pacote(void) {
    char codigo_pacote[4];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Pesquisar pacote = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///       Digite o código do pacote: ");
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void tela_edicao_pacote(void) {
    char codigo_pacote[12];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Editar pacote = =                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código do pacote: ");
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_excluir_pacote(void) {
    char codigo_pacote[4];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir Pacote = =                              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código do pacote: ");
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///            Motivo da exclusão: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",exclusao);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}


void tela_recuperar_pacote(void) {
    char codigo_pacote[4];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Recuperar Pacote = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código para recuperar o pacote: ");       
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}