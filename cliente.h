//Assinaturas Módulo Cadastro

typedef struct cliente Cliente;
struct cliente {
    char nome[71];
    char cpf[12];
    char celular[12];
    char email[51];
    char endereco[61];
    int status;
    Cliente *prox;
};

// funções gerais de controle
void adicionar_cadastro(void);
void pesquisar_cadastro(void);
void atualizar_cadastro(void);
void excluir_cadastro(void);

// telas de navegação e/ou preenchimento de dados
void modulo_cliente(void);
char tela_menu_cadastro(void);
Cliente* tela_cadastro(void);
char* tela_pesquisar_cadastro(void);
char* tela_atualizar_cadastro(void);
char* tela_excluir_cadastro(void);
void tela_erro(void);

// funções para manipular arquivos
void salvar_cadastro(Cliente*);
Cliente* buscar_cadastro(char*);
void exibir_cadastro(Cliente*);
void refazer_cadastro(Cliente*);

// as funções que editam apenas um campo específico da estrutura funcionário
void tela_editar_cadastro(Cliente*);
void tela_editar_nome(Cliente*);
void tela_editar_cpf(Cliente*);
void tela_editar_cel(Cliente*);
void tela_editar_email(Cliente*);
void tela_editar_endereco(Cliente*);
