#include <stdio.h>

// Função para calcular a nota das atividades
float calcularNotaAtividades(int realizadas, int total) {
    return ((float)realizadas / total) * 10; // Nota máxima de 10
}

// Função para calcular a média de cada bimestre
float calcularMediaBimestre(float notaEscrita, float notaPratica, float notaAtividades) {
    return (notaEscrita + notaPratica + notaAtividades) / 3;
}

// Função para calcular a média final
float calcularMediaFinal(float mediaBimestre1, float mediaBimestre2, float mediaBimestre3, float mediaBimestre4) {
    return ((mediaBimestre1 + mediaBimestre3) * 3 + (mediaBimestre2 + mediaBimestre4) * 2) / 10;
}

int main() {
    // Variáveis para armazenar as notas e informações das atividades de cada bimestre
    float notaEscrita, notaPratica, notaAtividades;
    int totalAtividades, realizadas;

    // Variáveis para armazenar as médias de cada bimestre e a média final
    float mediaBimestre1, mediaBimestre2, mediaBimestre3, mediaBimestre4, mediaFinal;

    // Bimestre 1
    printf("Bimestre 1:\n");
    printf("Nota da avaliacao escrita: ");
    scanf("%f", &notaEscrita);
    printf("Nota da avaliacao pratica: ");
    scanf("%f", &notaPratica);
    printf("Numero total de atividades: ");
    scanf("%d", &totalAtividades);
    printf("Numero de atividades realizadas: ");
    scanf("%d", &realizadas);

    notaAtividades = calcularNotaAtividades(realizadas, totalAtividades);
    mediaBimestre1 = calcularMediaBimestre(notaEscrita, notaPratica, notaAtividades);

    // Bimestre 2
    printf("\nBimestre 2:\n");
    printf("Nota da avaliacao escrita: ");
    scanf("%f", &notaEscrita);
    printf("Nota da avaliacao pratica: ");
    scanf("%f", &notaPratica);
    printf("Numero total de atividades: ");
    scanf("%d", &totalAtividades);
    printf("Numero de atividades realizadas: ");
    scanf("%d", &realizadas);

    notaAtividades = calcularNotaAtividades(realizadas, totalAtividades);
    mediaBimestre2 = calcularMediaBimestre(notaEscrita, notaPratica, notaAtividades);

    // Bimestre 3
    printf("\nBimestre 3:\n");
    printf("Nota da avaliacao escrita: ");
    scanf("%f", &notaEscrita);
    printf("Nota da avaliacao pratica: ");
    scanf("%f", &notaPratica);
    printf("Numero total de atividades: ");
    scanf("%d", &totalAtividades);
    printf("Numero de atividades realizadas: ");
    scanf("%d", &realizadas);

    notaAtividades = calcularNotaAtividades(realizadas, totalAtividades);
    mediaBimestre3 = calcularMediaBimestre(notaEscrita, notaPratica, notaAtividades);

    // Bimestre 4
    printf("\nBimestre 4:\n");
    printf("Nota da avaliacao escrita: ");
    scanf("%f", &notaEscrita);
    printf("Nota da avaliacao pratica: ");
    scanf("%f", &notaPratica);
    printf("Numero total de atividades: ");
    scanf("%d", &totalAtividades);
    printf("Numero de atividades realizadas: ");
    scanf("%d", &realizadas);

    notaAtividades = calcularNotaAtividades(realizadas, totalAtividades);
    mediaBimestre4 = calcularMediaBimestre(notaEscrita, notaPratica, notaAtividades);

    // Calcular média final
    mediaFinal = calcularMediaFinal(mediaBimestre1, mediaBimestre2, mediaBimestre3, mediaBimestre4);

    // Exibir resultados
    printf("\nMédia Bimestre 1: %.2f\n", mediaBimestre1);
    printf("Média Bimestre 2: %.2f\n", mediaBimestre2);
    printf("Média Bimestre 3: %.2f\n", mediaBimestre3);
    printf("Média Bimestre 4: %.2f\n", mediaBimestre4);
    printf("Média Final: %.2f\n", mediaFinal);

    return 0;
}
