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
#include "sobre.h"
#include "validacoes.h"
#include "relatorios.h" 

char tela_menu_geral(void);

///Main
int main(void) {
    char opcao;

    do {
        opcao = tela_menu_geral();
        switch(opcao) {
            case '1':   modulo_cliente();
                        break;
            case '2':   modulo_pacotes();
                        break;
            case '3':   modulo_assinaturas();
                        break;
            case '4':   modulo_relatorios();
                        break;  
            case '5':   tela_sobre();
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
    printf("//                                🇧​ 🇷 ​🇪​ 🇯​ 🇦 ​🇧​ 🇴​ 🇽​                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                         [Sistema de Assinatura de Cervejas]             ///\n");
    printf("///                                                                         ///\n");
    printf("///           <1> Módulo Cliente                                            ///\n");
    printf("///           <2> Módulo Pacotes                                            ///\n");
    printf("///           <3> Módulo Assinatura                                         ///\n");
    printf("///           <4> Módulo Relatórios                                         ///\n");
    printf("///           <5> Sobre                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///           <0>. Encerrar                                                 ///\n");
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
