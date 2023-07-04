#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "assinaturas.h"

//Funções Módulo Assinatura

void modulo_assinatura(void) {
    char opcao;
    do {
        opcao = tela_menu_assinatura();
        switch(opcao) {
void tela_equipe(void);
            case '1': 	tela_cadastro_assinatura();
                        tela_tipos_assinatura();
                        break;
            case '2': 	tela_pesquisar_assinatura();
                        break;
            case '3': 	tela_editar_assinatura();
                        tela_altera_assinatura();
                        break;
            case '4': 	tela_excluir_assinatura();
                        break;
            case '5': 	tela_recuperar_assinatura();
                        break;                        
        } 		
    } while (opcao != '0');
}

char tela_menu_assinatura(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Assinatura = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro de assinatura                                    ///\n");
    printf("///            2. Pesquisar assinatura                                      ///\n");
    printf("///            3. Editar assinatura                                         ///\n");
    printf("///            4. Excluir assinatura                                        ///\n");
    printf("///            5. Recuperar assinatura                                      ///\n");
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

void tela_cadastro_assinatura(void) {
    char CPF[15];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de Assinatura = =                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_tipos_assinatura(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///          1. Malte Box (4 cervejas puro malte + 1 copo colecionável)     ///\n");                  
    printf("///          2. Pilsen Box (4 cervejas pilsen + 1 copo colecionável)        ///\n");
    printf("///          3. Speacility Box (4 cervejas especiais + 1 copo colecionável) ///\n");
    printf("///          4. National Box (6 cervejas especiais + 1 copo colecionável)   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a assinatura desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_pesquisar_assinatura(void) {
    char CPF[15];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Pesquisar Assinatura = =                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///       Digite o CPF do assinatura: ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void tela_editar_assinatura(void) {
    char CPF[8];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Editar Assinatura = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_altera_assinatura(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///          1. Malte Box (4 cervejas puro malte + 1 copo colecionável)     ///\n");                  
    printf("///          2. Pilsen Box (4 cervejas pilsen + 1 copo colecionável)        ///\n");
    printf("///          3. Speacility Box (4 cervejas especiais + 1 copo colecionável) ///\n");
    printf("///          4. National Box (6 cervejas especiais + 1 copo colecionável)   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a sua nova assinatura: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_excluir_assinatura(void) {
    char CPF[15];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir Assinatura = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme o CPF (apenas números): ");
    scanf("%[0-9]", CPF);
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

void tela_recuperar_assinatura(void) {
    char CPF[15];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Recuperar Assinatura = =                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o CPF para recuperar (apenas números): ");       
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}