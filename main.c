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
#include "cliente.h"
#include "pacotes.h"
#include "assinaturas.h"

//Assinatura de funções

char tela_menu_geral(void);
void tela_sobre(void);
void tela_equipe(void);

///Main
int main(void) {
    char opcao;

    do {
        opcao = tela_menu_geral();
        switch(opcao) {
            case '1':   modulo_cliente();
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
    printf("///            3. Módulo Assinatura                                         ///\n");
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
    printf("///                                   modulo_cliente                                      ///\n");
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
