#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "assinaturas.h"
#include "cliente.h"
#include "pacotes.h"
#include "relatorios.h"
#include "validacoes.h"

void relatorio_ordenado_clt(Cliente **);
void relatorio_ordenado_pct(Pacote **);
void relatorio_ordenado_asn(Assinatura **);
void exibir_lista_clt(Cliente *);
void exibir_lista_pct(Pacote *);
void exibir_lista_asn(Assinatura *);
void excluir_lista_clt(Cliente **);
void excluir_lista_pct(Pacote **);
void excluir_lista_asn(Assinatura **);



void modulo_relatorios(void) {
    char opcao;
    do {
        opcao = tela_relatorios();
        switch(opcao) {
            case '1': modulo_lista_ordenada_cliente();
                      break;
            case '2': modulo_lista_ordenada_pacote();
                      break;
            case '3': modulo_lista_ordenada_assinatura();
                      break;
            case '4': assinatura_por_cliente();
                      break;
            case '5': assinatura_por_pacote();
                      break;
            case '6': cliente_por_pacote();
                      break;
        }
    } while (opcao != '0');
}


void modulo_lista_ordenada_cliente(void) {
    Cliente *lista;
    lista = NULL;
    relatorio_ordenado_clt(&lista);
    exibir_lista_clt(lista);
    excluir_lista_clt(&lista);
}

void modulo_lista_ordenada_pacote(void) {
    Pacote *lista;
    lista = NULL;
    relatorio_ordenado_pct(&lista);
    exibir_lista_pct(lista);
    excluir_lista_pct(&lista);
}

void modulo_lista_ordenada_assinatura(void) {
    Assinatura *lista;
    lista = NULL;
    relatorio_ordenado_asn(&lista);
    exibir_lista_asn(lista);
    excluir_lista_asn(&lista);
}

void assinatura_por_cliente(void) {
    char *cpf;

    cpf = tela_assinatura_por_cliente();
    relatorio_asn_por_clt(cpf);

    free(cpf);
}

void assinatura_por_pacote(void) {
    char *id_pct;

    id_pct = tela_assinatura_por_pacote();
    relatorio_asn_por_pct(id_pct);

    free(id_pct);
}

void cliente_por_pacote(void) {
    char *id_pct;

    id_pct = tela_cliente_por_pacote();
    relatorio_clt_por_pct(id_pct);

    free(id_pct);
}

char tela_relatorios(void) {
    char escolha;

    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                 ///\n");
    printf("///                       [Módulo Cliente]                          ///\n");
    printf("///                                                                 ///\n");
    printf("///         Ordenar:                                                ///\n");
    printf("///                                                                 ///\n");
    printf("///        <1> Clientes                                             ///\n");
    printf("///        <2> Pacotes                                              ///\n");
    printf("///        <3> Assinaturas                                          ///\n");
    printf("///                                                                 ///\n");
    printf("///         Filtrar:                                                ///\n");
    printf("///                                                                 ///\n");
    printf("///        <4> Relacionar Assinatura -> Cliente                     ///\n");
    printf("///        <5> Relacionar Assinatura -> Pacote                      ///\n");
    printf("///        <6> Relacionar Cliente -> Pacote                         ///\n");
    printf("///                                                                 ///\n");
    printf("///        <0> Retornar                                             ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("       Digite sua escolha: ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}


char* tela_assinatura_por_cliente(void) {
    char *cpf;
    cpf = (char*) malloc(12*sizeof(char));

    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Assinatura por Cliente<                     ///\n");
    printf("///                                                                ///\n");
    do {
        printf("///         CPF do Cliente:                                    ///\n");
        printf("///         => ");
        scanf("%[^\n]", cpf);
        getchar();
    } while (!valida_cpf(cpf));
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 

    return cpf;
}

char* tela_assinatura_por_pacote(void) {
    char *id_pct;
    id_pct = (char*) malloc(6*sizeof(char));

    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Assinatura por Pacote<                      ///\n");
    printf("///                                                                ///\n");
    do {
        printf("///         ID do Pacote:                                      ///\n");
        printf("///         => ");
        scanf("%[^\n]", id_pct);
        getchar();
    } while (!valida_id(id_pct, 5));
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 

    return id_pct;
}

char* tela_cliente_por_pacote(void) {
    char *id_pct;
    id_pct = (char*) malloc(6*sizeof(char));

    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Cliente por Pacote<                         ///\n");
    printf("///                                                                ///\n");
    do {
        printf("///         ID do Pacote:                                      ///\n");
        printf(" ||         => ");
        scanf("%[^\n]", id_pct);
        getchar();
    } while (!valida_id(id_pct, 5));
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 

    return id_pct;
}


void relatorio_asn_por_clt (char *cpf) {
    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Lista de Assinaturas<                       ///\n");
    printf("///                                                                ///\n");
    listar_assinatura_por_clt(cpf);
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void relatorio_asn_por_pct(char *id_pct) {
    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Lista de Assinaturas<                       ///\n");
    printf("///                                                                ///\n");
    listar_assinatura_por_pct(id_pct);
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void relatorio_clt_por_pct(char* id_pct) {
    system("cls||clear");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                          ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                ///\n");
    printf("///                   >Lista de Clientes<                          ///\n");
    printf("///                                                                ///\n");
    listar_clt_por_pct(id_pct);
    printf("///                                                                ///\n");
    printf("///                                                                ///\n");
    printf("//////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");;
    getchar();
}


// funcoes de arquivamento

// relatorios completos & simples
void listar_cliente(void) {
    FILE *fp;
    Cliente *clt;
    clt = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while (fread(clt, sizeof(Cliente), 1, fp)) {
        exibir_cadastro(clt);
    }
    fclose(fp);
    free(clt);
}

void listar_pacote(void) {
    FILE *fp;
    Pacote *pct;
    pct = (Pacote*) malloc(sizeof(Pacote));
    fp = fopen("pacotes.dat", "rb");
    if (fp == NULL) {
        tela_erro_pct();
    }
    while (fread(pct, sizeof(Pacote), 1, fp)) {
        exibir_pacote(pct);
    }
    free(pct);
    fclose(fp);
}

void listar_assinatura(void) {
    FILE *fp;
    Assinatura *asn;
    asn = (Assinatura*) malloc(sizeof(Assinatura));
    fp = fopen("assinaturas.dat", "rb");
    if (fp == NULL) {
        tela_erro_asn();
    }
    while (fread(asn, sizeof(Assinatura), 1, fp)) {
        exibir_assinatura(asn);
    }
    free(asn);
    fclose(fp);
}

/// RELATORIOS FILTRADOS/ESPECIFICOS ///
void listar_asn_filtrada(char *id) {
    FILE *fp;
    Assinatura *asn; 
    asn = (Assinatura*) malloc(sizeof(Assinatura));
    fp = fopen("assinaturas.dat", "rb");
    if (fp == NULL) {
        tela_erro_asn();
    }
    while(fread(asn, sizeof(Assinatura), 1, fp)) {
        if(strcmp(asn->id_pct, id) == 0 || strcmp(asn->cpf, id) == 0 || strcmp(asn->id_asn, id) == 0) {
            printf(" ||       %s             %s             %s\n", asn->id, asn->nome_asn, asn->id_asn);
        }
    }
    fclose(fp);
    free(asn);
}

void listar_clt_filtrado(char *cpf) {
    FILE *fp;
    Cliente *clt; 
    clt = (Cliente*) malloc(sizeof(Cliente));
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    while(fread(clt, sizeof(Cliente), 1, fp)) {
        if(strcmp(clt->cpf, cpf) == 0) {
            printf(" ||    %s         %s          %s\n", clt->cpf, clt->nome);
        }
    }
    fclose(fp);
    free(clt);
}

/// RELATORIOS USANDO MAIS DE UM ARQUIVO ///
void listar_assinatura_por_clt(char *cpf) {
    Cliente *clt;
    clt = (Cliente*) malloc(sizeof(Cliente));
    clt = buscar_cadastro(cpf);
    printf("///         Cliente: %s \n", clt->nome);
    printf("///                                                                 ///\n");
    printf("///  <<    ID     |            Nome          >>  ///\n");
    printf("///   -----------------------------------------------------------   ///\n");
    listar_asn_filtrada(cpf);
    free(clt);
}

void listar_assinatura_por_pct(char* id_pct) {
    Pacote *pct;
    pct = (Pacote*) malloc(sizeof(Pacote));
    pct = buscar_pacote(id_pct);
    printf("///         Pacote: %s \n", pct->nome);
    printf("///                                                                 ///\n");
    printf("///  <<    ID     |            Nome                  >>  ///\n");
    printf("///   -----------------------------------------------------------   ///\n");
    listar_asn_filtrada(id_pct);
    free(pct);
}

void listar_clt_por_pct(char *id_pct) {
    FILE *fp;
    Pacote *pct;
    Assinatura *asn;
    char *cpf_clt;
    asn = (Assinatura*) malloc(sizeof(Assinatura));
    pct = (Pacote*) malloc(sizeof(Pacote));
    pct = buscar_pacote(id_pct);
    printf("///         Pacote: %s \n", pct->nome);
    printf("///                                                               ///\n");
    printf("///   <<    CPF     |            Nome               ///\n");
    printf("///   -----------------------------------------------------------  ///\n");
    fp = fopen("assinaturas.dat", "rb");
    if (fp == NULL) {
        tela_erro_asn();
    }
    while(fread(asn, sizeof(Assinatura), 1, fp)) {
        if(strcmp(asn->id_pct, id_pct) == 0) {
            cpf_clt = asn->cpf;
            listar_clt_filtrado(cpf_clt);
        }
    }
    fclose(fp);
    free(pct);
    free(asn);
}


void relatorio_ordenado_clt(Cliente **lista) {
    FILE *fp;
    Cliente *clt;

    excluir_lista_clt(&(*lista));
    *lista = NULL;
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    else {
        clt = (Cliente*) malloc(sizeof(Cliente));
        while (fread(clt, sizeof(Cliente), 1, fp)) {
            if ((*lista == NULL) || (strcmp(clt->nome, (*lista)->nome) < 0)) {
                clt->prox = *lista;
                *lista = clt;
            }
            else {
                Cliente *ant = *lista;
                Cliente *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp(atu->nome, clt->nome) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = clt;
                clt->prox = atu;
            }
            clt = (Cliente *) malloc(sizeof(Cliente));
        }
        free(clt);
        fclose(fp);
    }
} // criado por: @FlaviusGorgonio


void exibir_lista_clt   (Cliente *aux) {
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                           ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                       <Lista de Clientes>                       ///\n");
    printf("///                                                                 ///\n");
    printf("///              Nome             |             CPF                 ///\n");
    printf("\n");
    while (aux != NULL) {
        printf(" ||      %s ", aux->nome);
        printf("                    %s  \n", aux->cpf);
        aux = aux->prox;
	}
    printf("///                                                                 ///\n");
    printf("///                      >Fim da lista<                             ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                     [Enter para continuar]                      ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    getchar();
}

void excluir_lista_clt(Cliente **lista) {
    Cliente *clt; 
    while (*lista != NULL) {
        clt = *lista;
        *lista = (*lista)->prox;
        free(clt);  
    }
}


void relatorio_ordenado_pct(Pacote **lista) {
    FILE *fp;
    Pacote *pct;

    excluir_lista_pct(&(*lista));
    *lista = NULL;
    fp = fopen("pacotes.dat", "rb");
    if (fp == NULL) {
        tela_erro_pct();
    }
    else {
        pct = (Pacote*) malloc(sizeof(Pacote));
        while (fread(pct, sizeof(Pacote), 1, fp)) {
            if ((*lista == NULL) || (strcmp((pct->id_pct), ((*lista)->id_pct)) < 0)) {
                pct->prox = *lista;
                *lista = pct;
            }
            else {
                Pacote *ant = *lista;
                Pacote *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp((atu->id_pct),(pct->id_pct)) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = pct;
                pct->prox = atu;
            }
            pct = (Pacote *) malloc(sizeof(Pacote));
        }
        free(pct);
        fclose(fp);
    }
}

void exibir_lista_pct(Pacote *aux) {
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                           ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                       <Lista de Pacotes>                        ///\n");
    printf("///                                                                 ///\n");
    printf("///              ID             |             Nome                  ///\n");
    printf("\n");
    while (aux != NULL) {
        printf("///         %s ", aux->id_pct);
        printf("               %s  \n", aux->nome);
        aux = aux->prox;
	}
    printf("///                                                                 ///\n");
    printf("///                      >Fim da lista<                             ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                     [Enter para continuar]                      ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    getchar();
}

void excluir_lista_pct(Pacote **lista) {
    Pacote *pct; 
    while (*lista != NULL) {
        pct = *lista;
        *lista = (*lista)->prox;
        free(pct);
    }
}

void relatorio_ordenado_asn(Assinatura **lista) {
    FILE *fp;
    Assinatura *asn;

    excluir_lista_asn(&(*lista));
    *lista = NULL;
    fp = fopen("assinaturas.dat", "rb");
    if (fp == NULL) {
        tela_erro_asn();
    }
    else {
        asn = (Assinatura*) malloc(sizeof(Assinatura));
        while (fread(asn, sizeof(Assinatura), 1, fp)) {
            if ((*lista == NULL) || (strcmp((asn->id_asn),((*lista)->id_asn)) < 0)) {
                asn->prox = *lista;
                *lista = asn;
            }
            else {
                Assinatura *ant = *lista;
                Assinatura *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp((atu->id_asn),(asn->id_asn)) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = asn;
                asn->prox = atu;
            }
            asn = (Assinatura *) malloc(sizeof(Assinatura));
        }
        free(asn);
        fclose(fp);
    }
}

void exibir_lista_asn(Assinatura *aux) {
    system("cls||clear");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                          [RELATORIOS]                           ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                       <Lista de Assinaturas>                    ///\n");
    printf("///                                                                 ///\n");
    printf("///              ID             |             Nome                  ///\n");
    printf("\n");
    while (aux != NULL) {
        printf(" ||         %s ", aux->id_asn);
        printf("               %s  \n", aux->nome_asn);
        aux = aux->prox;
	}
    printf("///                                                                 ///\n");
    printf("///                      >Fim da lista<                             ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    printf("///                                                                 ///\n");
    printf("///                     [Enter para continuar]                      ///\n");
    printf("///                                                                 ///\n");
    printf("///////////////////////////////////////////////////////////////////////\n"); 
    getchar();
}

void excluir_lista_asn(Assinatura **lista) {
    Assinatura *asn;
    while (*lista != NULL) {
        asn = *lista;
        *lista = (*lista)->prox;
        free(asn);
    }
}