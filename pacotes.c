#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "pacotes.h"
#include "relatorios.h"
#include "validacoes.h"

void modulo_pacotes(void) {
    char opcao;
    do {
        opcao = tela_pacotes();
        switch (opcao) {
            case '1': adicionar_pacote();
                      break;
            case '2': pesquisar_pacote();
                      break;
            case '3': atualizar_pacote();
                      break;
            case '4': excluir_pacote();
                      break;
        }
    } while (opcao != '0');
}

void adicionar_pacote(void) {
    Pacote *pct;
    
    pct = tela_adicionar_pacote();
    salvar_pacote(pct);

    free(pct);
}

void pesquisar_pacote(void) {
    Pacote *pct;
    char *id;

    id = tela_pesquisar_pacote();
    pct = buscar_pacote(id);
    exibir_pacote(pct);
    
    free(pct);
    free(id);
}

void atualizar_pacote(void) {
    Pacote *pct;
    char *id;

    id = tela_atualizar_pacote();
    pct = buscar_pacote(id);
    if (pct == NULL) {
        printf(" //                       [Pacote nao existe]                       //\n");
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
	    printf(" //                      <Enter para continuar!>                    //\n");
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        getchar();
    }
    else {
        tela_editar_pacote(pct);
        refazer_pacote(pct);
		free(pct);
    }
    free(id);
}

void excluir_pacote(void) {
    Pacote *pct;
    char *id;

    id = tela_excluir_pacote();
    pct = (Pacote*) malloc(sizeof(Pacote));
    pct = buscar_pacote(id);
    if (pct == NULL) {
        printf(" //              [Pacote nao existe]                                //\n");
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        getchar();
    }
    else {
        pct->status = 0;
        refazer_pacote(pct);
        free(pct);
    }
    free(id);
}


char tela_pacotes(void) {
    char escolha;

    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                     [PROJETOS]                                  //\n");
    printf(" //                                                                 //\n");
    printf(" //         <1> Acrescentar novo pacote                             //\n");
    printf(" //         <2> Pesquisar pacote                                    //\n");
    printf(" //         <3> Editar pacote                                       //\n");
    printf(" //         <4> Apagar pacote                                       //\n");
    printf(" //         <5> Listar pacotes                                      //\n");
    printf(" //                                                                 //\n");
    printf(" //         <0> Voltar ao Menu                                      //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n"); 
    printf(" //                                                                 //\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}

Pacote* tela_adicionar_pacote(void) {
    Pacote *pct;
    pct = (Pacote*) malloc(sizeof(Pacote));
    char* id;
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                        [PROJETOS]                               //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                      <ADICIONAR PACOTE>                         //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Nome do pacote: \n");
        printf("            => ");
        scanf("%[^\n]", pct->nome);
        getchar();
    } while (!is_nome_valid(pct->nome));
    printf("\n");
    do {
        printf("            Tipo de cerveja: \n");
        printf("            => ");
        scanf("%[^\n]", pct->cerveja);
        getchar();
    } while (!is_nome_valid(pct->cerveja));
    printf("\n");
    id = gerar_id();
    strcpy(pct->id, id);
    printf(" //         Codigo do pacote: \n");
    printf(" //         => %s \n", pct->id);

    pct->status = 1;
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                       [Pacote cadastrado]                       //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    getchar();
    
    free(id);
    return pct;
}

char* tela_pesquisar_pacote(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                            [PACOTES]                            //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           [PESQUISAR]                           //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Insira o código do pacote: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");
    printf(" //                     <Enter para continuar!>                     //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");

    return id;
}

char* tela_atualizar_pacote(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                            [PACOTES]                            //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           [ATUALIZAR]                           //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Insira o codigo do pacote: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}

void tela_editar_pacote(Pacote* pct) {
    char editar;

    do {
        system("cls || clear");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                            [PACOTES]                            //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
        printf(" //                           <EDITAR>                              //\n");
        printf(" //                                                                 //\n");
        printf(" //         <1> Nome do pacote                                      //\n");
        printf(" //         <2> Codigo                                              //\n");
        printf(" //         <3> Tipos de cerveja                                    //\n");
        printf(" //                                                                 //\n");
        printf(" //         <0> Voltar ao Menu Pacotes                              //\n");
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
        printf("           Digite sua escolha: ");
        scanf("%c", &editar);
        getchar();
        printf("\n");
        switch (editar) {
            case '1': tela_editar_titulo_pacote(pct);
                      break;
            case '2': tela_editar_id_pacote(pct);
                      break;
            case '3': tela_editar_cerveja(pct);
                      break;
        }
    } while (editar != '0');
    pct->status = 1;
}

void tela_editar_titulo_pacote(Pacote* pct) {
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                           [PACOTES]                             //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           <EDITAR>                              //\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Novo titulo do pacote: \n");
        printf("         => ");
        scanf("%[^\n]", pct->nome);
        getchar();
    } while (!is_nome_valid(pct->nome));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                       <Informacao atualizada>                   //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    getchar(); 
}

void tela_editar_id_pacote(Pacote* pct) {
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                           [PACOTES]                             //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           <EDITAR>                              //\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    strcpy(pct->id, gerar_id());
    printf("            Novo codigo do pacote: \n");
    printf(" //           => %s\n", pct->id);
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                       <Informacao atualizada>                   //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    getchar(); 
}

void tela_editar_cerveja(Pacote* pct) {
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                           [PACOTES]                             //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           <EDITAR>                              //\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Novo tipo de cerveja no pacote: \n");
        printf("         => ");
        scanf("%[^\n]", pct->cerveja);
        getchar();
    } while (!is_nome_valid(pct->cerveja));    
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                       <Informacao atualizada>                   //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    getchar(); 
}

char* tela_excluir_pacote(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                           [PACOTES]                             //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                           [EXCLUIR]                             //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Digite o codigo do pacote: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
    printf(" //                         [Pacote excluido]                       //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    getchar();

    return id;
}

void tela_erro_pct(void) {

	system("cls // clear");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
	printf(" //                                                                 //\n");
	printf(" //                               [ERRO]                            //\n");
	printf(" //                                                                 //\n");
    printf(" //                [Ocorreu algum erro, tente novamente]            //\n");
	printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
    printf(" //                                                                 //\n");
	printf(" //                        <Enter para continuar!>                  //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
	getchar();
}



//arquivamento!

void salvar_pacote(Pacote* pct) {
    FILE *fp;
    fp = fopen("pacotes.dat", "ab");
    if(fp == NULL) {
        tela_erro_pct(); 
    }
    fwrite(pct, sizeof(Pacote), 1, fp);
    fclose(fp);
}

Pacote* buscar_pacote(char* id) {
    FILE *fp;
    Pacote *pct;
    pct = (Pacote*) malloc(sizeof(Pacote));
    fp = fopen("pacotes.dat", "rb");
    if(fp == NULL) {
        tela_erro_pct();
    }
    while (fread(pct, sizeof(Pacote), 1, fp)) {
        if ((strcmp(id, pct->id) == 0) && (pct->status == 1)) {
            fclose(fp);
            return pct;
        }
    }
    fclose(fp);
    return NULL;
}

void exibir_pacote(Pacote* pct) {
    if (pct == NULL) {
		printf(" //                       [Pacote nao existe]                       //\n");
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
	} 
    else {
        system("cls // clear");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
        printf(" //                          [Pacote existente]                     //\n");
        printf(" //                                                                 //\n");
        printf(" //      Nome:    %s \n", pct->nome);
        printf(" //      ID:      %s \n", pct->id);
        printf(" //      Cerveja: %s \n", pct->cerveja);
        printf(" //      Status:  %d \n", pct->status);
        printf(" //                                                                 //\n");
        printf(" ////////////////////////////////////////////////////////////////////|\n");
        printf(" //                                                                 //\n");
	}
	printf(" //                         <Enter para continuar!>                 //\n");
    printf(" //                                                                 //\n");
    printf(" ////////////////////////////////////////////////////////////////////|\n");
	getchar();
}

void refazer_pacote(Pacote *pct) {
    int achou;
    FILE *fp;
    Pacote *pct_lido;

    pct_lido = (Pacote*) malloc(sizeof(Pacote));
    fp = fopen("pacotes.dat", "r+b");
    if(fp == NULL) {
        tela_erro_pct();
    }
    achou = 0;
    while(fread(pct_lido, sizeof(Pacote), 1, fp) && !achou) {
        if (strcmp(pct_lido->id, pct->id) == 0) {
            achou = 1;
            fseek(fp, -1*sizeof(Pacote), SEEK_CUR);
            fwrite(pct, sizeof(Pacote), 1, fp);
        }
    }
    free(pct_lido);
    fclose(fp);
}


//////// UTEIS
char* gerar_id(void) {
    FILE *fp;
    Pacote *pct;
    int id_gerado = 1;
    char *id;
    pct = (Pacote*) malloc(sizeof(Pacote));
    id = (char*) malloc(6 * sizeof(char));
    fp = fopen("pacotes.dat", "rb");
    if (fp != NULL) {
        while(fread(pct, sizeof(Pacote), 1, fp) == 1) {
            id_gerado++;
        }
    }
    sprintf(id, "%05d", id_gerado);
    free(pct);
    fclose(fp);
    return id;
}