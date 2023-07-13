#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "assinaturas.h"
#include "relatorios.h"
#include "validacoes.h"


void modulo_assinaturas(void) {
    char opcao;
    do {
        opcao = tela_assinaturas();
        switch (opcao) {
            case '1': adicionar_assinatura();
                      break;
            case '2': pesquisar_assinatura();
                      break;
            case '3': atualizar_assinatura();
                      break;
            case '4': excluir_assinatura();
                      break;
            //case '5': listar_assinatura();
                      //break;
        }
    } while (opcao != '0');
}


void adicionar_assinatura(void) {
    Assinatura *asn;

    asn = tela_adicionar_assinatura();
    salvar_assinatura(asn);

    free(asn);
}

void pesquisar_assinatura(void) {
    Assinatura *asn;
    char *id;

    id = tela_pesquisar_assinatura();
    asn = buscar_assinatura(id);
    exibir_assinatura(asn);

    free(asn);
    free(id);
}

void atualizar_assinatura(void) {
    Assinatura *asn;
	char *id;

	id = tela_atualizar_assinatura();
	asn = buscar_assinatura(id);
	if (asn == NULL) {
    	printf(" //                   [Assinatura inexistente]                      //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        printf(" //                                                                 //\n");
	    printf(" //                [Aperte Enter para Continuar!!!]                 //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        getchar();
  	} 
    else {
		tela_editar_assinatura(asn);
		refazer_assinatura(asn);
		free(asn);
	}
	free(id);
}

void excluir_assinatura(void) {
    Assinatura *asn;
	char *id;

	id = tela_excluir_assinatura();
	asn = (Assinatura*) malloc(sizeof(Assinatura));
	asn = buscar_assinatura(id);
	if (asn == NULL) {
    	printf(" //                   [Assinatura nao encontrado!]                  //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        getchar();
  	} 
    else {
		  asn->status = 0;
		  refazer_assinatura(asn);
		  free(asn);
	}
	free(id);
}


char tela_assinaturas(void) {
    char escolha;

    system("cls || clear");
    printf(" /////////////////////////////////////////////////////////////////////\n"); 
    printf(" //                                                                 //\n");
    printf(" //                       [ASSINATURA]                              //\n");
    printf(" //                                                                 //\n");
    printf(" //         <1> Adicionar assinatura                                //\n");
    printf(" //         <2> Pesquisar assinatura                                //\n");
    printf(" //         <3> Atualizar assinatura                                //\n");
    printf(" //         <4> Excluir assinatura                                  //\n");
    printf(" //         <5> Listar todas as Assinaturas                         //\n");
    printf(" //                                                                 //\n");
    printf(" //         <0> Voltar ao Menu Principal                            //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n"); 
    printf(" //                                                                 //\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();

    return escolha;
}


Assinatura* tela_adicionar_assinatura(void) {
    Assinatura *asn;

    asn = (Assinatura*) malloc(sizeof(Assinatura));
    system("cls || clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                          [ASSINATURA]                           //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                          <ADICIONAR>                            //\n");
    printf(" //                                                                 //\n");
    
    do {
        printf("            Nome da Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", asn->nome_asn);
        getchar();
    } while(!is_nome_valid(asn->nome_asn));
    printf("\n");

    do {
        printf("            ID do Pacote obtido: \n");
        printf("            => ");
        scanf("%[^\n]", asn->id_pct);
        getchar();
    } while (!valida_id(asn->id_pct, 5));
    printf("\n");

    do {
        printf("            CPF do Cliente atribuido: \n");
        printf("            => ");
        scanf("%[^\n]", asn->cpf);
        getchar();
    } while (!valida_cpf(asn->cpf));   
    printf("\n");

    do {
        printf("            Tipo de cerveja atribuida: \n");
        printf("            => ");
        scanf("%[^\n]", asn->cerveja_asn);
        getchar();
    } while (!is_nome_valid(asn->cerveja_asn));

    printf("\n");
    strcpy(asn->id, gerar_id_asn());
    printf("            O ID da Assinatura:\n");
    printf("            => %s \n", asn->id);
    
    asn->status = 1;
    printf("///                                                                 //\n");
    printf("///                                                                 //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 //\n");
    printf("///                     Assinatura Cadastrado!                      //\n");
    printf("///                                                                 //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    getchar();

    return asn;
}


char* tela_pesquisar_assinatura(void) {
    char *id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf(" //                         [ASSINATURA]                            //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                         <PESQUISAR>                             //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Digite o ID da Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");
    printf(" //                       <Enter para continuar>                    //\n");
    printf(" //                                                                 //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
	getchar();

    return id;
}


char* tela_atualizar_assinatura(void) {
    char* id;
     
    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//                           [ASSINATURAS]                         //\n");
    printf("/////////////////////////////////////////////////////////////////////\n");
    printf("//                                                                 //\n");
    printf("//                      <ATUALIZAR>                                //\n");
    printf("//                                                                 //\n");
    do {
        printf("            Digite o ID da Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("\n");

    return id;
}


void tela_editar_assinatura(Assinatura* asn) {
    char editar;

    do {
        system("cls || clear");
        printf("/////////////////////////////////////////////////////////////////////\n");
        printf("//                           [ASSINATURA]                          //\n");
        printf("/////////////////////////////////////////////////////////////////////\n");
        printf("//                                                                 //\n");
        printf("//                            [EDITAR]                             //\n");
        printf("//                                                                 //\n");
        printf("//         <1> Nome da assinatura                                  //\n");
        printf("//         <2> CPF do cliente                                      //\n");
        printf("//         <3> Tipo de cerveja                                     //\n");
        printf("//         <4> ID do Pacote atribuido                              //\n");
        printf("//         <5> ID da Assinatura                                    //\n");
        printf("//                                                                 //\n");
        printf("//         <0> Sair                                                //\n");
        printf("//                                                                 //\n");
        printf("/////////////////////////////////////////////////////////////////////\n");
        printf("//                                                                 //\n");
        printf("           Digite sua escolha: ");
        scanf("%c", &editar);
        getchar();
        printf("\n");
        switch (editar) {
            case '1': tela_editar_titulo_assinatura(asn);
                      break;
            case '2': tela_editar_cpf_assinatura(asn);
                      break;
            case '3': tela_editar_cerveja_assinatura(asn);
                      break;
            case '4': tela_editar_id_atribuido(asn);
                      break;
            case '5': tela_editar_id_assinatura(asn);
                      break;
        }          
    } while (editar != '0');
}

void tela_editar_titulo_assinatura(Assinatura* asn) {
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    printf("///                       [Editar Assinatura]                       ///\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    do {
        printf("         Novo nome de assinatura: \n");
        printf("         => ");
        scanf("%[^\n]", asn->nome_asn);
        getchar();
    } while (!is_nome_valid(asn->nome_asn));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_cpf_assinatura(Assinatura* asn) {
    system("cls || clear");
    printf("///////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    printf("///                       [Editar Assinatura]                       ///\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    do {
        printf("         Novo CPF do Cliente anexado a Assinatura: \n");
        printf("         => ");
        scanf("%[^\n]", asn->cpf);
        getchar();
    } while (!valida_cpf(asn->cpf));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [Informacao atualizada]                  //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_cerveja_assinatura (Assinatura* asn) {
    system("cls || clear");
    printf("///////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    printf("///                       [Editar Assinatura]                       ///\n");
    printf("///                                                                 ///\n");
    printf("///                                                                 ///\n");
    do {
        printf("         Nova Cerveja a Assinatura: \n");
        printf("         => ");
        scanf("%[^\n]", asn->cerveja_asn);
        getchar();
    } while (!is_nome_valid(asn->cerveja_asn));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                      [Informacao atualizada]                    //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_id_atribuido(Assinatura* asn) {
    system("cls || clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Novo ID de Pacote anexado a Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", asn->id_pct);
        getchar();
    } while (!valida_id(asn->id_pct, 5));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_id_assinatura(Assinatura* asn) {
    system("cls || clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("            Novo ID da Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", asn->id);
        getchar();
    } while (!valida_id(asn->id, 5));
    printf(" ||                                                                 ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf(" ||                                                                 ||\n");
    printf(" ||                ...... Informacao atualizada ......              ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    getchar(); 
}


char* tela_excluir_assinatura(void) {
    char* id;

    id = (char*) malloc(6*sizeof(char));
    system("cls || clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                           [EXCLUIR ASSINATURA]                          ///\n");
    printf("///                                                                         ///\n");
    do {
        printf("            Digite o ID da Assinatura: \n");
        printf("            => ");
        scanf("%[^\n]", id);
        getchar();
    } while (!valida_id(id, 5));
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             [CLIENTE EXCLUIDO]                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

    return id;
}

void tela_erro_asn(void) {
	system("cls || clear");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
	printf("///                             [ERRO]                                      ///\n");
	printf("///                                                                         ///\n");
    printf("///                    Nao foi possivel acessar o arquivo                   ///\n");
	printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
	printf("///                        [Enter para continuar]                           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
	getchar();
}



////// Funcoes de arquivamento ///////

void salvar_assinatura(Assinatura* asn) {
    FILE *fp;

    fp = fopen("assinaturas.dat", "ab");
    if (fp == NULL) {
        tela_erro_asn();
    }
    fwrite(asn, sizeof(Assinatura), 1, fp);

    fclose(fp);
}

Assinatura* buscar_assinatura(char* id) {
    FILE* fp;
    Assinatura* asn; 
    
    asn = (Assinatura*) malloc(sizeof(Assinatura));
    fp = fopen("assinaturas.dat", "rb");
    if (fp == NULL) {
        tela_erro_asn();
    }
    while (fread(asn, sizeof(Assinatura), 1, fp)) {
        if ((strcmp(id, asn->id) == 0) && (asn->status == 1)) {
            fclose(fp);
            return asn;
        }
    }
    fclose(fp);
    return NULL;
}

void exibir_assinatura(Assinatura* asn) {
    if (asn == NULL) {
        printf("///               [Assinatura Inexistente]                         ///\n");
        printf("///                                                                ///\n");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
    } 
    else {
        system("cls || clear");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
        printf("///               [Assinatura Encontrado]                          ///\n");
        printf("///                                                                ///\n");
        printf("///      Nome da assinatura:     %s \n", asn->nome_asn);
        printf("///      Tipo de cerveja: %s \n", asn->cerveja_asn);
        printf("///      ID da Assinatura: %s \n", asn->id);
        printf("///      ID do Pacote:   %s \n", asn->id_pct);
        printf("///      Cliente:     %s \n", asn->cpf);
        printf("///      Status:          %d \n", asn->status);
        printf("///                                                                ///\n");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
    }
    printf("///                       <Enter para continuar!>                  ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
	getchar();
}

void refazer_assinatura(Assinatura* asn) {
	int achou;
	FILE* fp;
	Assinatura* asn_lido;

	asn_lido = (Assinatura*) malloc(sizeof(Assinatura));
	fp = fopen("assinaturas.dat", "r+b");
	if (fp == NULL) {
		tela_erro_asn();
	}
	achou = 0;
	while (fread(asn_lido, sizeof(Assinatura), 1, fp) && !achou) {
		if (strcmp(asn_lido->id, asn->id) == 0) {
			achou = 1;
			fseek(fp, -1*sizeof(Assinatura), SEEK_CUR);
        	fwrite(asn, sizeof(Assinatura), 1, fp);
		}
	}
    free(asn_lido);
	fclose(fp);
}

//////// UTEIS
char* gerar_id_asn(void) {
    FILE *fp;
    Assinatura *asn;
    int id_gerado = 1;
    char *id;
    asn = (Assinatura*) malloc(sizeof(Assinatura));
    id = (char*) malloc(6 * sizeof(char));
    fp = fopen("assinaturas.dat", "rb");
    if (fp != NULL) {
        while(fread(asn, sizeof(Assinatura), 1, fp) == 1) {
            id_gerado++;
        }
    }
    
    sprintf(id, "%05d", id_gerado);
    free(asn);
    fclose(fp);
    return id;
}