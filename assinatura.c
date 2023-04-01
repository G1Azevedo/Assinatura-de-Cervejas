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

//Assinatura de funções
void tela_bem_vindo(void);
void tela_menu_geral(void);
void tela_assinatura(void);
void tela_tipos_assinatura(void);
void tela_cadastro(void);
void tela_status_assinatura(void);
void tela_edicao_cadastro(void);
void tela_excluir_assinatura(void);
void tela_recuperar_assinatura(void);
void tela_menu_produtos(void);
void tela_cadastro_produto(void);
void tela_pesquisar_produto(void);
void tela_excluir_produto(void);
void tela_recuperar_produto(void);
void tela_menu_fornecedor(void);
void tela_cadastro_fornecedor(void);
void tela_pesquisar_fornecedor(void);
void tela_excluir_fornecedor(void);
void tela_recuperar_fornecedor(void);
void tela_sobre(void);
void tela_equipe(void);




///Main
int main(void) {
    tela_bem_vindo();
    tela_menu_geral();
    tela_assinatura();
    tela_tipos_assinatura();
    tela_cadastro();
    tela_status_assinatura();
    tela_edicao_cadastro();
    tela_excluir_assinatura();
    tela_recuperar_assinatura();
    tela_menu_produtos();
    tela_cadastro_produto();
    tela_pesquisar_produto();
    tela_excluir_produto();
    tela_recuperar_produto();
    tela_menu_fornecedor();
    tela_cadastro_fornecedor();
    tela_pesquisar_fornecedor();
    tela_sobre();
    tela_equipe();

    return (0);
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

void tela_menu_geral(void) {
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
    printf("///            2. Módulo Produto                                            ///\n");
    printf("///            3. Módulo Fornecedor                                         ///\n");
    printf("///            4. Sobre                                                     ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

//Telas do módulo 1

void tela_assinatura(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Cliente = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro de cliente                                       ///\n");
    printf("///            2. Status da assinatura                                      ///\n");
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

void tela_status_assinatura(void) {
    char CPF[12];
    char nome[51];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Status da Assinatura = =                        ///\n");
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
    printf("///            Tipo de assinatura:                                          ///\n");
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
    printf("///                       = = Editar assinatura = =                         ///\n");
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

void tela_excluir_assinatura(void) {
    char CPF[12];
    char nascimento[11];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir Assinatura = =                          ///\n");
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

void tela_recuperar_assinatura(void) {
    char CPF[12];

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


//Início do módulo 2

void tela_menu_produtos(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar produto                                         ///\n");
    printf("///            2. Pesquisar produto                                         ///\n");
    printf("///            3. Excluir produto                                           ///\n");
    printf("///            4. Recuperar produto                                         ///\n");
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
}

void tela_cadastro_produto(void) {
    char codigo_produto[4];
    char nome_produto[51];
    char nome_fornecedor[51];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de produto = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código do produto: ");
    scanf("%[0-9]", codigo_produto);
    getchar();
    printf("///            Digite o nome do produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome_produto);
    getchar();
    printf("///            Digite o nome do fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome_fornecedor);
    getchar();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_pesquisar_produto(void) {
    char codigo_produto[4];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Pesquisar produto = =                           ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///       Digite o código do produto: ");
    scanf("%[0-9]", codigo_produto);
    getchar();
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void tela_excluir_produto(void) {
    char codigo_produto[4];
    char exclusao[100];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Excluir Assinatura = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código do produto: ");
    scanf("%[0-9]", codigo_produto);
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


void tela_recuperar_produto(void) {
    char codigo_produto[4];

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Recuperar Produto = =                           ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Digite o código para recuperar o produto: ");       
    scanf("%[0-9]", codigo_produto);
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
void tela_assinatura(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Fornecedor = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro de fornecedor                                    ///\n");
    printf("///            2. Pesquisar fornecedor                                      ///\n");
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