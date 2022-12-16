void nhecas() {
    /*
    Tipos BÁSICOS:
    void: vazio
    char: inteiro sem sinal, 8b
    short: inteiro com sinal, 16b
    int: inteiro de 16 ou 32b
    long long: inteiro de 32 ou 64 bits
    float: real de 32b, precisão simples
    double: real de 64b, precisão dupla
    long double: real de 128b, precisão quádrupla
    */
}

int main() {

    int soma(int a, int b){
        int s;
        s = a+b;
        return s;
    }

    // formatação de inteiro em printf:
    printf("%d + %d = %d\n", a, b, soma);

    // formatação de real em printf:
    prinft("%f dividido por %f é %f\n", x, y, x/y);

    return 0;
}