typedef struct pacote Pacote;
struct pacote {
    char nome[71];
    char id[6];
    char cerveja[71];
    int status;
    int id_pct;
    Pacote *prox;
};

// funções gerais para manipular todas as funcionalidades
void adicionar_pacote(void);
void pesquisar_pacote(void);
void atualizar_pacote(void);
void excluir_pacote(void);

// telas de navegação ou preenchimento de dados
void modulo_pacotes(void);
char tela_pacotes(void);
Pacote* tela_adicionar_pacote(void);
char* tela_pesquisar_pacote(void);
char* tela_atualizar_pacote(void);
void tela_editar_pacote(Pacote*);
void tela_editar_titulo_pacote(Pacote*);
void tela_editar_id_pacote(Pacote*);
void tela_editar_cerveja(Pacote*);
char* tela_excluir_pacote(void);
void tela_erro_pct(void);

// funções de arquivamento
void salvar_pacote(Pacote*);
Pacote* buscar_pacote(char*);
void exibir_pacote(Pacote*);
void refazer_pacote(Pacote*);

// util
char* gerar_id(void);