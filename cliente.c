#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "cliente.h"
#include "relatorios.h"
#include "validacoes.h"

// Funções do Módulo Cadastros

void modulo_cliente(void) {
    char opcao;
    do {
        opcao = tela_menu_cadastro();
        switch(opcao) {
            case '1':   adicionar_cadastro();
                        break;
            case '2': 	pesquisar_cadastro();
                        break;
            case '3': 	atualizar_cadastro();
                        break;
            case '4': 	excluir_cadastro();
                        break;                    
        } 		
    } while (opcao != '0');
}

void adicionar_cadastro(void) {
    Cliente *clt;

    clt = tela_cadastro();
    salvar_cadastro(clt);

    free(clt);
}

void pesquisar_cadastro(void) {
    Cliente *clt;
    char *cpf;

    cpf = tela_pesquisar_cadastro();
    clt = buscar_cadastro(cpf);
    exibir_cadastro(clt);

    free(clt);
    free(cpf);
}

void atualizar_cadastro(void) {
    Cliente *clt;
	char *cpf;

	cpf = tela_atualizar_cadastro();
	clt = buscar_cadastro(cpf);
	if (clt == NULL) {
    	printf(" //                [Cliente inexistente]                            //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        printf(" //                                                                 //\n");
	    printf(" //                [Aperte Enter para Continuar!!!]                 //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        getchar();
  	} 
    else {
		  tela_editar_cadastro(clt);
		  strcpy(clt->cpf, cpf);
		  refazer_cadastro(clt);
		  free(clt);
	}
	free(cpf);
}

void excluir_cadastro(void) {
    Cliente *clt;
	char *cpf;

	cpf = tela_excluir_cadastro();
	clt = (Cliente*) malloc(sizeof(Cliente));
	clt = buscar_cadastro(cpf);
	if (clt == NULL) {
    	printf(" //                   [Cliente nao encontrado!]                     //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        getchar();
  	} 
    else {
		clt->status = 0;
		refazer_cadastro(clt);
		free(clt);
	}
	free(cpf);
}

char tela_menu_cadastro(void) {
    char op;

    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                       = = Módulo Cliente = =                            ///\n");
    printf("///                                                                         ///\n");
    printf("///           <1> Cadastro de cliente                                       ///\n");
    printf("///           <2> Status da cadastro                                        ///\n");
    printf("///           <3> Editar cadastro                                           ///\n");
    printf("///           <4> Excluir cadastro                                          ///\n");
    printf("///           <5> Listar cliente                                            ///\n");
    printf("///           <0> Voltar ao menu anterior                                   ///\n");
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

Cliente* tela_cadastro(void) {
    Cliente *clt;

    clt = (Cliente*) malloc(sizeof(Cliente));   
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Cadastro de cliente = =                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    do {
        printf("         Digite seu CPF: \n");
        printf("         => ");
        scanf("%[^\n]", clt->cpf);
        getchar();
    } while (!valida_cpf(clt->cpf));
    printf("\n");
    do {
        printf("         Digite seu nome: \n");
        printf("         => ");
        scanf("%[^\n]", clt->nome);
        getchar();
    } while (!is_nome_valid(clt->nome));
    printf("\n");
   do {
        printf("         Digite seu email:  \n");
        printf("         => ");
        scanf("%[^\n]", clt->email);
        getchar();
    } while (!is_email_valid(clt->email));
    do {
        printf("         Digite seu celular: \n");
        printf("         => ");
        scanf("%[^\n]", clt->celular);
        getchar();
    } while(!valida_tel(clt->celular));
    printf("\n");
    do {
        printf("         Digite seu endereço: \n");
        printf("         => ");
        scanf("%[^\n]", clt->endereco);
    } while (!is_nome_valid(clt->nome));
    clt->status = 1;
    printf("\n");
    printf("///                                                                 //\n");
    printf("///                                                                 //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 //\n");
    printf("///                     Cliente Cadastrado!                         //\n");
    printf("///                                                                 //\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    getchar();

    return clt;
}

char* tela_pesquisar_cadastro(void) {
    char *cpf;

    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                     = = Status da Cadastro = =                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    cpf = (char*) malloc(12*sizeof(char));
    do {
        printf("         Digite o CPF: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
    printf("\n");

    return cpf;

}

char* tela_atualizar_cadastro(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                       [Editar Cadastro]                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    do {
        printf("         Digite seu CPF: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));

    return cpf;
}

void tela_editar_cadastro(Cliente *clt) {
    char editar;

    do {
        system("cls||clear");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        printf(" //                                                                 //\n");
        printf(" //                                                                 //\n");
        printf(" //                        [Escolha a edicao]                       //\n");
        printf(" //                                                                 //\n");
        printf(" //         <1> Nome                                                //\n");
        printf(" //         <2> Email                                               //\n");
        printf(" //         <3> Celular                                             //\n");
        printf(" //         <4> Endereco                                            //\n");
        printf(" //                                                                 //\n");
        printf(" //         <0> Sair                                                //\n");
        printf(" //                                                                 //\n");
        printf(" /////////////////////////////////////////////////////////////////////\n");
        printf(" //                                                                 //\n");
        printf("           Escolha a edicao: ");
        scanf("%c", &editar);
        getchar();
        printf("\n");
        switch (editar) {
            case '1': tela_editar_nome(clt);
                      break;
            case '2': tela_editar_email(clt);
                      break;
            case '3': tela_editar_cel(clt);
                      break;
            case '4': tela_editar_endereco(clt);
                      break;
        }
    } while (editar != '0');
    clt->status = 1;
}

void tela_editar_nome(Cliente* clt) {
    system("cls||clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Nome do cliente: \n");
        printf("         => ");
        scanf("%[^\n]", clt->nome);
        getchar();
    } while(!is_nome_valid(clt->nome));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_cel(Cliente* clt) {
    system("cls||clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Digite o numero: \n");
        printf("         => ");
        scanf("%[^\n]", clt->celular);
        getchar();
    } while(!valida_tel(clt->celular));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_email(Cliente* clt) {
    system("cls||clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Digite o email: \n");
        printf("         => ");
        scanf("%[^\n]", clt->email);
        getchar();
    } while (!is_email_valid(clt->email));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

void tela_editar_endereco(Cliente* clt) {
    system("cls||clear");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //                        [EDICAO]                                 //\n");
    printf(" //                                                                 //\n");
    do {
        printf("         Digite o endereco: \n");
        printf("         => ");
        scanf("%[^\n]", clt->endereco);
        getchar();
    } while(!is_nome_valid(clt->nome));
    printf(" //                                                                 //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    printf(" //                                                                 //\n");
    printf(" //               [Informacao atualizada]                           //\n");
    printf(" //                                                                 //\n");
    printf(" /////////////////////////////////////////////////////////////////////\n");
    getchar();
}

char* tela_excluir_cadastro(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             [EXCLUIR CADASTRO]                          ///\n");
    printf("///                                                                         ///\n");
    do {
        printf("         CPF do Cliente: \n");
        printf("         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                             [CLIENTE EXCLUIDO].                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    getchar();

    return cpf;
}

void tela_erro(void) {
	system("cls||clear");
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


void salvar_cadastro(Cliente* clt) {
    FILE *fp;
    fp = fopen("clientes.dat", "ab");
    if (fp == NULL) {
        tela_erro();
    }
    fwrite(clt, sizeof(Cliente), 1, fp);
    fclose(fp);
}

Cliente* buscar_cadastro(char* cpf) {
    FILE *fp;
    Cliente* clt;

    clt = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while (fread(clt, sizeof(Cliente), 1, fp)) {
        if ((strcmp(clt->cpf, cpf) == 0) && (clt->status == 1)) {
            fclose(fp);
            return clt;
        }
    }   
    fclose(fp);
    return NULL;
}

void exibir_cadastro(Cliente* clt) {
	if (clt == NULL) {
		printf("///               [Cliente Inexistente]                            ///\n");
        printf("///                                                                ///\n");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
	} 
    else {
        system("cls || clear");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
        printf("///               [Cliente Encontrado]                             ///\n");
        printf("///                                                                ///\n");
        printf("///      Nome: %s         \n", clt->nome);
        printf("///      Email: %s        \n", clt->email);
        printf("///      Celular: %s      \n", clt->celular);
        printf("///      CPF: %s          \n", clt->cpf);
        printf("///                                                                ///\n");
        printf("//////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                ///\n");
	}
	printf(" ||               ------- Enter para continuar! --------            ||\n");
    printf(" ||                                                                 ||\n");
    printf(" |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	getchar();
}

void refazer_cadastro(Cliente* clt) {
	int achou;
	FILE* fp;
	Cliente* clt_lido;

	clt_lido = (Cliente*) malloc(sizeof(Cliente));
	fp = fopen("clientes.dat", "r+b");
	if (fp == NULL) {
		tela_erro();
	}
	achou = 0;
	while (fread(clt_lido, sizeof(Cliente), 1, fp) && !achou) {
		if (strcmp(clt_lido->cpf, clt->cpf) == 0) {
			achou = 1;
			fseek(fp,-1*sizeof(Cliente), SEEK_CUR);
        	fwrite(clt, sizeof(Cliente), 1, fp);
		}
	}
	free(clt_lido);
    fclose(fp);
}