#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "cadastro.h"

// Funções do Módulo Cadastro

void modulo_cadastro(void) {
    char opcao;
    do {
        opcao = tela_menu_cadastro();
        switch(opcao) {
            case '1':   tela_cadastro();
                        break;
            case '2': 	tela_status_cadastro();
                        break;
            case '3': 	tela_edicao_cadastro();
                        break;
            case '4': 	tela_excluir_cadastro();
                        break;
            case '5': 	tela_recuperar_cadastro();
                        break;                        
        } 		
    } while (opcao != '0');
}

char tela_menu_cadastro(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Cliente = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro de cliente                                       ///\n");
    printf("///            2. Status da cadastro                                        ///\n");
    printf("///            3. Editar cadastro                                           ///\n");
    printf("///            4. Excluir cadastro                                          ///\n");
    printf("///            5. Recuperar cadastro                                        ///\n");
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

void tela_cadastro(void) {
    char CPF[12];
    char nome[51];
    char email[51];
    char nascimento[11];
    char celular[12];
    char cidade[51];
    char endereco[80];
    char complemento[50];


    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de cliente = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///            Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///            E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///            Data de Nascimento (dd/mm/aaaa): ");
    scanf("%[0-9-/]", nascimento);
    getchar();
    printf("///            Celular  (apenas números): ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///            Cidade: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", cidade);
    getchar();
    printf("///            Endereço (bairro, rua e nº): ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,.0-9]",endereco);
    getchar();
    printf("///            Complemento (opcional):");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",complemento);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_status_cadastro(void) {
    char CPF[12];
    char nome[51];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Status da Cadastro = =                          ///\n");
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
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            Cliente:                                                     ///\n");
    printf("///            Status:                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_edicao_cadastro(void) {
    char CPF[12];
    char email[51];
    char celular[12];
    char cidade[51];
    char endereco[80];
    char complemento[50];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Editar cadastro = =                           ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme seu CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                       = = OPÇÕES DE EDIÇÃO = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///            E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///            Celular  (apenas números): ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///            Cidade: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", cidade);
    getchar();
    printf("///            Endereço (bairro, rua e nº): ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,.0-9]",endereco);
    getchar();
    printf("///            Complemento (opcional):");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",complemento);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_excluir_cadastro(void) {
    char CPF[12];
    char nascimento[11];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir Cadastro = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme seu CPF (apenas números): ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///            Data de Nascimento (dd/mm/aaaa): ");
    scanf("%[0-9-/]", nascimento);
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

void tela_recuperar_cadastro(void) {
    char CPF[12];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Recuperar Cadastro = =                          ///\n");
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