/////////////////////////////////////////////////////////////////////////////
//             Universidade Federal do Rio Grande do Norte                 //
//                 Centro de Ensino Superior do Seridó                     //
//               Departamento de Computação e Tecnologia                   //
//                  Disciplina DCT1106 -- Programação                      //
//                  Projeto Sistema de Gestão Escolar                      //
//             Desenvolvido por @G1Azevedo -- since Mar, 2023              //
/////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Assinatura de funções

void tela_bem_vindo(void);

char tela_menu_geral(void);

void modulo_cadastro(void);
char tela_menu_cadastro(void);
void tela_tipos_cadastro(void);
void tela_cadastro(void);
void tela_status_cadastro(void);
void tela_edicao_cadastro(void);
void tela_excluir_cadastro(void);
void tela_recuperar_cadastro(void);

void modulo_pacote();
char tela_menu_pacote(void);
void tela_cadastro_pacote(void);
void tela_pesquisar_pacote(void);
void tela_excluir_pacote(void);
void tela_recuperar_pacote(void);

void modulo_assinatura(void);
char tela_menu_assinatura(void);
void tela_cadastro_assinatura(void);
void tela_pesquisar_assinatura(void);
void tela_editar_assinatura(void);
void tela_excluir_assinatura(void);
void tela_recuperar_assinatura(void);

void tela_sobre(void);
void tela_equipe(void);





///Main
int main(void) {
    char opcao;

    do {
        opcao = tela_menu_geral();
        switch(opcao) {
            case '1':   modulo_cadastro();
                        break;
            case '2':   modulo_pacote();
                        break;
            case '3':   modulo_assinatura();
                        break;
            case '4':   tela_sobre();
                        tela_equipe();
                        break;
        } 	
    } while (opcao != '0');

    return 0;
}
    

void tela_bem_vindo(void){
    system("clear||cls");
    printf("\n");
    printf("                      🇧​ 🇪​ 🇲 ​﹣ 🇻​ 🇮​ 🇳​ 🇩​ 🇴​  🇦​ 🇴​  🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​\n");
    printf("\n");
    printf("___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
    printf("__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
    printf("_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
    printf("88888888888888888888888888888\n");
    printf("888_88888_88888_88888_88888_8\n");
    printf("888_88888_88888_88888_88888_8\n");
    printf("88___888___888___888___888__88888888\n");
    printf("8_____8_____8_____8_____8___888888888\n");
    printf("88___888___888___888___888__8888888888\n");
    printf("888_88888_88888_88888_88888_8_____88888\n");
    printf("88888888888888888888888888888______88888\n");
    printf("888_88888_88888_88888_88888_8_______88888\n");
    printf("88___888___888___888___888__8________88888\n");
    printf("8_____8_____8_____8_____8___8_________88888\n");
    printf("88___888___888___888___888__8_________88888\n");
    printf("888_88888_88888_88888_88888_8_________88888\n");
    printf("88___888___888___888___888__8________88888\n");
    printf("888_88888_88888_88888_88888_8_______88888\n");
    printf("88888888888888888888888888888______88888\n");
    printf("888_88888_88888_88888_88888_8_____88888\n");
    printf("88___888___888___888___888__8888888888\n");
    printf("8_____8_____8_____8_____8___888888888\n");
    printf("88___888___888___888___888__88888888\n");
    printf("888_88888_88888_88888_88888_8\n");
    printf("88888888888888888888888888888\n");
    printf("888_88888_88888_88888_88888_8\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t {TECLE ENTER PARA O MENU}\n");
    getchar();
}

char tela_menu_geral(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("//                                🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                            //\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                = = Sistema de Assinatura de Cervejas = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Cliente                                            ///\n");
    printf("///            2. Módulo Pacotes                                            ///\n");
    printf("///            3. Módulo assinatura                                         ///\n");
    printf("///            4. Sobre                                                     ///\n");
    printf("///            0. Encerrar                                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    return op;
}

//Telas do módulo 1

void modulo_cadastro(void) {
    char opcao;
    do {
        opcao = tela_menu_cadastro();
        switch(opcao) {
            case '1': 	//tela_tipos_cadastro();
                        tela_cadastro();
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


void tela_tipos_cadastro(void) {
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


//Início do módulo 2

void modulo_pacote(void) {
    char opcao;
    do {
        opcao = tela_menu_pacote();
        switch(opcao) {
            case '1': 	tela_cadastro_pacote();
                        break;
            case '2': 	tela_pesquisar_pacote();
                        break;
            case '3': 	tela_excluir_pacote();
                        break;
            case '4': 	tela_recuperar_pacote();
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
    printf("///            3. Excluir pacote                                            ///\n");
    printf("///            4. Recuperar pacote                                          ///\n");
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
    printf("///            Digite o ID do pacote: ");
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
    printf("///       Digite o ID do pacote: ");
    scanf("%[0-9]", codigo_pacote);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
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

//Início Módulo 3

void modulo_assinatura(void) {
    char opcao;
    do {
        opcao = tela_menu_assinatura();
        switch(opcao) {
            case '1': 	tela_cadastro_assinatura();
                        break;
            case '2': 	tela_pesquisar_assinatura();
                        break;
            case '3': 	tela_editar_assinatura();
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
    printf("///                       = = Módulo assinatura = =                         ///\n");
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
    char CNPJ[15];
    char nome_assinatura[51];
    char email_assinatura[51];
    char telefone_assinatura[12];
    char cidade_assinatura[51];
    char endereco_assinatura[80];
    char complemento_assinatura[50];


    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de assinatura = =                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            CNPJ (apenas números): ");
    scanf("%[0-9]", CNPJ);
    getchar();
    printf("///            Nome do assinatura: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome_assinatura);
    getchar();
    printf("///            E-mail do assinatura: ");
    scanf("%[A-Za-z0-9@._]", email_assinatura);
    getchar();
    printf("///            Telefone  (apenas números): ");
    scanf("%[0-9]", telefone_assinatura);
    getchar();
    printf("///            Cidade: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", cidade_assinatura);
    getchar();
    printf("///            Endereço (bairro, rua e nº): ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,.0-9]",endereco_assinatura);
    getchar();
    printf("///            Complemento (opcional):");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",complemento_assinatura);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_pesquisar_assinatura(void) {
    char CNPJ[15];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Pesquisar assinatura = =                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///       Digite o CNPJ do assinatura: ");
    scanf("%[0-9]", CNPJ);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void tela_editar_assinatura(void) {
    char CNPJ[15];
    char email_assinatura[51];
    char telefone_assinatura[12];
    char cidade_assinatura[51];
    char endereco_assinatura[80];
    char complemento_assinatura[50];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Editar assinatura = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme o CNPJ (apenas números): ");
    scanf("%[0-9]", CNPJ);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                       = = OPÇÕES DE EDIÇÃO = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///            E-mail: ");
    scanf("%[A-Za-z0-9@._]", email_assinatura);
    getchar();
    printf("///            Telefone (apenas números): ");
    scanf("%[0-9]", telefone_assinatura);
    getchar();
    printf("///            Cidade: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", cidade_assinatura);
    getchar();
    printf("///            Endereço (bairro, rua e nº): ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,.0-9]",endereco_assinatura);
    getchar();
    printf("///            Complemento (opcional):");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",complemento_assinatura);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_excluir_assinatura(void) {
    char CNPJ[15];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir assinatura = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme o CNPJ (apenas números): ");
    scanf("%[0-9]", CNPJ);
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
    char CNPJ[15];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Recuperar assinatura = =                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o CNPJ para recuperar (apenas números): ");       
    scanf("%[0-9]", CNPJ);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}


//Sobre & equipe

void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Assinatura de Cervejas              ///\n");
    printf("///             Desenvolvido por @G1Azevedo -- since Mar, 2023              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                          🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa em desenvolvimento com foco em apresentar um projeto          ///\n");
    printf("///  funcional para Assinatura de Cervejas. Baseado no programa de Gestão   ///\n");
    printf("///  Escolar, através deste projeto tentarei desenvolver o que se pede ao   ///\n");
    printf("///  decorrer da matéria e aprender o nível necessário da linguagem para    ///\n");
    printf("///  que assim possa dar as funcionalidades fundamentais a este programa.   ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_equipe(void) {

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Escolar                      ///\n");
    printf("///             Developed by @G1Azevedo -- since Mar, 2023                  ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Escolar = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto exemplo foi desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Gabriel Azevedo de Araujo                                    ///\n");
    printf("///            E-mail: gabriel.araujo2706@gmail.com                         ///\n");
    printf("///            Redes sociais: @gabriel_azvd0                                ///\n");
    printf("///            Git: https://github.com/G1Azevedo/Assinatura-de-Cervejas     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 
