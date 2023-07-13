typedef struct assinatura Assinatura;
struct assinatura {
    char nome_asn[51];
    char id[6];
    char id_pct[6];
    char cpf[12];
    char cerveja_asn[50];
    int status;
    int id_asn;
    Assinatura *prox;
};

// funções que coordenam todas as funcionalidades do módulo
void adicionar_assinatura(void);
void pesquisar_assinatura(void);
void atualizar_assinatura(void);
void excluir_assinatura(void);

// telas de navegação e preenchimento de dados
void modulo_assinaturas(void);
char tela_assinaturas(void);
Assinatura* tela_adicionar_assinatura(void);
char* tela_pesquisar_assinatura(void);
char* tela_atualizar_assinatura(void);
char* tela_excluir_assinatura(void);
void tela_erro_asn(void);
void salvar_assinatura(Assinatura*);
Assinatura* buscar_assinatura(char*);
void exibir_assinatura(Assinatura*);
void refazer_assinatura(Assinatura*);

// telas de edição de um unico campo da estrutura
void tela_editar_assinatura(Assinatura*);
void tela_editar_titulo_assinatura(Assinatura*);
void tela_editar_cpf_assinatura(Assinatura*);
void tela_editar_cerveja_assinatura(Assinatura*);
void tela_editar_id_atribuido(Assinatura*);
void tela_editar_id_assinatura(Assinatura*);

// util
char* gerar_id_asn(void);