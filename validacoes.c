#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"



//---| Validações String |---
int is_digit(char n){
    if(n >= '0' && n <= '9'){
        return 1;
    }else{
        return 0;
    }
}

int is_letra(char c){
    if((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    }else{
        return 0;
    }
}


int cont_char(char *texto, char c){
    int tam = strlen(texto);
    int cont = 0;
    for(int i = 0; i<tam; i++){
        if(texto[i] == c){
            cont++;
        }
    }
    return cont;
}

int cont_n_char(char *texto, char c, int n){
    int tam = strlen(texto);
    int cont = 0;
    for(int i = n; i<tam; i++){
        if(texto[i] == c){
            cont++;
        }
    }
    return cont;
}

int find_char(char *texto, char c){
    int tam = strlen(texto);
    for(int i = 0; i<tam; i++){
        if(texto[i] == c){
            return i;
        }
    }
    return -1;

}

int is_num_valid(char *num){
    int tam = strlen(num);

    for(int i = 0; i<tam; i++){
        if(is_letra(num[i])){
            return 0;
        }
    }
    return 1;
}

int is_nome_valid(char *nome){
    int tam = strlen(nome);
    int cont = 0;

    if(strcmp(nome,"\n")==0){
        return 0;
    }

    for(int i = 0; i<tam; i++){
        if(is_digit(nome[i])){
            return 0;
        }
        if(is_letra(nome[i])){
            cont++;
        }
    }
    if(!cont){
        return 0;
    }
    return 1;
}

int is_char_valid(char *c, char filtro[]){
    int tamF = strlen(filtro);
    int tamC = strlen(c);
    int cont = 0;


    for(int i = 0; i<tamC-1; i++){
        if(!(is_digit(c[i]) || is_letra(c[i]))){
            cont = 0;
            for(int j = 0; j < tamF; j++){
                if(c[i] == filtro[j]){
                    cont++;
                }
            }
            if(cont == 0){
                return 0;
            }
        }
    }
    return 1;
}

int is_email_valid(char *email){
    if(cont_char(email, '@') == 1){
        int x = find_char(email, '@');
        if(x != 0 && cont_n_char(email, '.', x) == 1){
            if(find_char(email, '.') != 0){
                if(is_char_valid(email, "@._")){
                    return 1;
                }
            }
        }
    }
    return 0;
}

void limpa_texto(char *texto){
    int tam = strlen(texto);
    char copyC[tam];
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(is_digit(texto[i]) || is_letra(texto[i]) || texto[i] == '\n'){
            copyC[i-cont] = texto[i];
        }else{
            cont++;
        }
        if(i == tam-1){
            copyC[i-cont+1] = '\0';
        }
    }
    strcpy(texto, copyC);
}

//// valida_tel(tel) -> Retorna 1 para um telefone válido e 0 para inválido.

int valida_tel(char *telefone){   //Créditos Thomas Almeida
    int tel[11];

    if(strlen(telefone) != 11){
        return 0;
    }

    for(int i = 0; i < strlen(telefone); i++){
        tel[i] = (int) telefone[i] - 48;
    }

    if(tel[0] != 1 && tel[0] != 4 && tel[0] != 6 && tel[0] != 8 && tel[0] != 9){
        return 0;
    }else{
        if(tel[1] < 1 && tel[1] > 9){
            return 0;
        }
    }            ///// Verificação dos DDD's existentes

    if(tel[2] == 9){         //// se o número inicia em 9, é um celular.
        if(tel[3] == 0){
            return 0;
        }else{
            for(int i = 3; i < 7; i++){
                if(tel[i] < 0 || tel[i] > 9){
                    return 0;
                }
            }
        }
    }else if(tel[2] >= 2 && tel[2] <= 8){         //// se não inicia em 9, é um tel. fixo. (número entre 2 e 8)
        for(int i = 3; i < 6; i++){
            if(tel[i] < 0 || tel[i] > 9){
                return 0;
            }
        }
    }
    
    return 1;

}

int valida_cpf(char* cpf) {
    int i, j;
    int d1 = 0;
    int d2 = 0;
    limpa_caracteres(cpf);
    if (!quantidade_digitos(cpf, 11)) {
        return 0;
    }
    // calculo digito 1 
    for (i = 0, j = 10; i < 9; i++, j--) {
        d1 += (cpf[i] - '0') * j;
    }
    d1 = d1 % 11;
    // verifica se o primeiro digito é valido
    if (d1 == 0 || d1 == 1) {
        if (cpf[9] != '0') {
            return 0;
        }
    }
    else {
        d1 = 11 - d1;
        if (cpf[9] - '0' != d1) {
            return 0;
        }
    }
    // calculo digito 2
    for (i = 0, j = 11; i < 10; i++, j--) {
        d2 += (cpf[i] - '0') * j;
    }
    d2 = d2 % 11;
    // verifica se o segundo digito é valido
    if (d2 == 0 || d2 == 1) {
        if (cpf[10] != '0') {
            return 0;
        }
    }
    else {
        d2 = 11 - d2;
        if (cpf[10] - '0' != d2) {
            return 0;
        }
    }
    return 1;
}

int quantidade_digitos(char* v, int x) {
    int i;
    for (i = 0; i < x; i++) {
        if (v[i] == '\0') {
            return 0;
        }
    }
    if (v[i] != '\0') {
        return 0;
    }
    else {
        return 1;
    }
}

void limpa_caracteres(char* str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (numero(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int numero(char n) {
    if (n >= '0' && n <= '9') {
        return 1;
    }
    else {
        return 0;
    }
}

int valida_id(char* id, int t) {
    //       o id em si, o tamanho do id para tornar uma função genérica
    int i;

    // verifica a quantidade de digitos
    if (!quantidade_digitos(id, t)) {
        return 0;
    }

    // apenas digitos numericos
    for (i = 0; i < t; i++) {
        if (!numero(id[i])) {
            return 0;
        }
    }

    // ID valido
    return 1;
}