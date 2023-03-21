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
void tela_bemvindo(void);
void tela_menu(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_assinatura(void);
void tela_sobre(void);

//Main
int main(void) {
    tela_bemvindo();
    tela_menu();
    tela_assinatura();
    return (0);
}

void tela_bemvindo(void){
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
    printf("//                    🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                //\n");
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
    printf("///            Escolha a opção desejada:" );
    scanf("%c", &op);
    getchar();
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
    printf("//                    🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                                //\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastro                                                  ///\n");
    printf("///            2. Status da assinatura                                      ///\n");
    printf("///            3. Tipos de assinatura                                       ///\n");
    printf("///            4. Cancelar assinatura                                       ///\n");
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
