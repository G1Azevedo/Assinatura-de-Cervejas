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
void tela_menu(void);
void tela_assinatura(void);
void tela_cadastro(void);
void tela_status_assinatura(void);
void tela_edicao_cadastro(void);
void tela_cancelar_assinatura(void);
void tela_sobre(void);
void tela_equipe(void);


//Main
int main(void) {
    tela_bem_vindo();
    tela_menu();
    tela_assinatura();
    tela_cadastro();
    tela_status_assinatura();
    tela_edicao_cadastro();
    tela_cancelar_assinatura();
    tela_sobre();
    tela_equipe();

    return (0);
}

void tela_bem_vindo(void){
    system("clear||cls");
    printf("\n");
    printf("🇧​ 🇪​ 🇲 ​﹣ 🇻​ 🇮​ 🇳​ 🇩​ 🇴​  🇦​ 🇴​  🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​\n");
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

void tela_menu(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("//                    🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                        //\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                  > Sistema de Assinatura de Cervejas <                  ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Assinatura                                         ///\n");
    printf("///            2. Módulo Clientes                                           ///\n");
    printf("///            3. Módulo Produtos                                           ///\n");
    printf("///            4. Módulo Relatórios                                         ///\n");
    printf("///            5. Sobre                                                     ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();
       printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_assinatura(void) {
    char op;
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("//                    🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                        //\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro                                                  ///\n");
    printf("///            2. Status da assinatura                                      ///\n");
    printf("///            3. Tipos de assinatura                                       ///\n");
    printf("///            4. Editar cadastro                                           ///\n");
    printf("///            5. Cancelar assinatura                                       ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada:                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void tela_cadastro(void) {
    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                         > Cadastro <                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            CPF (apenas números):                                        ///\n");
    printf("///            Nome completo:                                               ///\n");
    printf("///            E-mail:                                                      ///\n");
    printf("///            Data de Nascimento (dd/mm/aaaa):                             ///\n");
    printf("///            Celular  (apenas números):                                   ///\n");
    printf("///            Cidade:                                                      ///\n");
    printf("///            Endereço (bairro, rua e nº):                                 ///\n");
    printf("///            Complemento (opcional):                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_status_assinatura(void) {
    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                      > Status da Assinatura <                           ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            CPF (apenas números):                                        ///\n");
    printf("///            Nome completo:                                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_edicao_cadastro(void) {
    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                         > Editar cadastro <                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme seu CPF (apenas números):                           ///\n");
    printf("///                                                                         ///\n");
    printf("///            OPÇÕES DE EDIÇÃO                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            E-mail:                                                      ///\n");
    printf("///            Celular (apenas números):                                    ///\n");
    printf("///            Cidade:                                                      ///\n");
    printf("///            Endereço (bairro, rua e nº):                                 ///\n");
    printf("///            Complemento (opcional):                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

void tela_cancelar_assinatura(void) {
    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                      > Cancelar Assinatura <                            ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            Confirme seu CPF:                                            ///\n");
    printf("///            Data de nascimento (dd/mm/aaaa):                             ///\n");
    printf("///            Motivo do cancelamento:                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}

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
    printf("///                      🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                    ///\n");
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