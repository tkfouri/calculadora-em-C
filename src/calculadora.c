#include <stdio.h>
#include <locale.h>


void calculadora_basica() {


    setlocale(LC_ALL, "Portuguese_Brazil");
    float n1, n2, resultado;
    char operacao;

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("\nInsira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número: ");
    scanf("%f", &n2);

    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            printf("\nResultado: %.2f\n\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("\nResultado: %.2f\n\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("\nResultado: %.2f\n\n", resultado);
            break;
        case '/':
            if (n2 == 0)
                printf("\nErro: divisão por zero!\n\n");
            else {
                resultado = n1 / n2;
                printf("\nResultado: %.2f\n\n", resultado);
            }
            break;
        default:
            printf("Operacao inválida.\n\n");
    }
}

void decimal_para_binario(int num) {

    setlocale(LC_ALL, "Portuguese_Brazil");
    int binario[32];
    int i = 0;

    while (num > 0) {
        binario[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binario[j]);
    printf("\n");
}


void decimal_para_hexadecimal(int num) {
    printf("Hexadecimal: %X\n\n", num);
}


void calculadora_programador() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    int num;

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    decimal_para_binario(num);
    decimal_para_hexadecimal(num);
}


int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha;

    do
    {
        printf("Escolha o tipo de calculadora:\n\n");
        printf("1 - Calculadora Básica\n");
        printf("2 - Calculadora Programador\n");
        printf("3 - Sair do Programa\n\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1:
                calculadora_basica();
                break;
            case 2:
                calculadora_programador();
                break;
            case 3:
                break;
            default:
                printf("\nEscolha inválida!\n\n");
        }
    } while (escolha != 3);

    return 0;
}

