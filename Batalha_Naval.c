#include <stdio.h>

int main(void)
{
    // Inicialização da Matriz do Tabuleiro e preenchimento com mar via for.
    char tabuleiro_j1[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            tabuleiro_j1[i][j] = '~';
        }
    }
    char tabuleiro_j2[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            tabuleiro_j2[i][j] = '~';
        }
    }
    //

    // Inicialização de Variáveis
    int Navios, Rodadas;
    int CordX, CordY;
    int Pont_j1 = 0;
    int Pont_j2 = 0;
    char Orientation, tipoNavio;
    //

    // Identifica o número de navios escolhido.
    printf("Digite o número de navios para cada jogador:");
    scanf("%d", &Navios);
    //

    // Posiciona os navios escolhidos por cada jogador em seu respectivo tabuleiro.
    printf("Posicione seus navios jogador 1: ");
    for (int Navios_pos = 0; Navios_pos < Navios; Navios_pos++)
    {
        scanf("%d %d %c %c", &CordY, &CordX, &tipoNavio, &Orientation);
        if (Orientation == 'H')
        {
            switch (tipoNavio)
            {
            case 'C':
                tabuleiro_j1[CordY][CordX] = 'C';
                tabuleiro_j1[CordY][CordX + 1] = 'C';
                tabuleiro_j1[CordY][CordX - 1] = 'C';
                break;

            case 'E':
                tabuleiro_j1[CordY][CordX] = 'E';
                tabuleiro_j1[CordY][CordX + 1] = 'E';
                tabuleiro_j1[CordY][CordX + 2] = 'E';
                tabuleiro_j1[CordY][CordX - 1] = 'E';
                tabuleiro_j1[CordY][CordX - 2] = 'E';
                break;

            case 'P':
                tabuleiro_j1[CordY][CordX] = 'P';
                tabuleiro_j1[CordY][CordX + 1] = 'P';
                tabuleiro_j1[CordY][CordX + 2] = 'P';
                tabuleiro_j1[CordY][CordX + 3] = 'P';
                tabuleiro_j1[CordY][CordX - 1] = 'P';
                tabuleiro_j1[CordY][CordX - 2] = 'P';
                tabuleiro_j1[CordY][CordX - 3] = 'P';
                break;
            }
        }
        else
        {
            switch (tipoNavio)
            {
            case 'C':
                tabuleiro_j1[CordY][CordX] = 'C';
                tabuleiro_j1[CordY + 1][CordX] = 'C';
                tabuleiro_j1[CordY - 1][CordX] = 'C';
                break;

            case 'E':
                tabuleiro_j1[CordY][CordX] = 'E';
                tabuleiro_j1[CordY + 1][CordX] = 'E';
                tabuleiro_j1[CordY + 2][CordX] = 'E';
                tabuleiro_j1[CordY - 1][CordX] = 'E';
                tabuleiro_j1[CordY - 2][CordX] = 'E';
                break;

            case 'P':
                tabuleiro_j1[CordY][CordX] = 'P';
                tabuleiro_j1[CordY + 1][CordX] = 'P';
                tabuleiro_j1[CordY + 2][CordX] = 'P';
                tabuleiro_j1[CordY + 3][CordX] = 'P';
                tabuleiro_j1[CordY - 1][CordX] = 'P';
                tabuleiro_j1[CordY - 2][CordX] = 'P';
                tabuleiro_j1[CordY - 3][CordX] = 'P';
                break;
            }
        }
    }

    printf("Posicione seus navios jogador 2: ");
    for (int Navios_pos = 0; Navios_pos < Navios; Navios_pos++)
    {
        scanf("%d %d %c %c", &CordY, &CordX, &tipoNavio, &Orientation);
        if (Orientation == 'H')
        {
            switch (tipoNavio)
            {
            case 'C':
                tabuleiro_j2[CordY][CordX] = 'C';
                tabuleiro_j2[CordY][CordX + 1] = 'C';
                tabuleiro_j2[CordY][CordX - 1] = 'C';
                break;

            case 'E':
                tabuleiro_j2[CordY][CordX] = 'E';
                tabuleiro_j2[CordY][CordX + 1] = 'E';
                tabuleiro_j2[CordY][CordX + 2] = 'E';
                tabuleiro_j2[CordY][CordX - 1] = 'E';
                tabuleiro_j2[CordY][CordX - 2] = 'E';
                break;

            case 'P':
                tabuleiro_j2[CordY][CordX] = 'P';
                tabuleiro_j2[CordY][CordX + 1] = 'P';
                tabuleiro_j2[CordY][CordX + 2] = 'P';
                tabuleiro_j2[CordY][CordX + 3] = 'P';
                tabuleiro_j2[CordY][CordX - 1] = 'P';
                tabuleiro_j2[CordY][CordX - 2] = 'P';
                tabuleiro_j2[CordY][CordX - 3] = 'P';
                break;
            }
        }
        else
        {
            switch (tipoNavio)
            {
            case 'C':
                tabuleiro_j2[CordY][CordX] = 'C';
                tabuleiro_j2[CordY + 1][CordX] = 'C';
                tabuleiro_j2[CordY - 1][CordX] = 'C';
                break;

            case 'E':
                tabuleiro_j2[CordY][CordX] = 'E';
                tabuleiro_j2[CordY + 1][CordX] = 'E';
                tabuleiro_j2[CordY + 2][CordX] = 'E';
                tabuleiro_j2[CordY - 1][CordX] = 'E';
                tabuleiro_j2[CordY - 2][CordX] = 'E';
                break;

            case 'P':
                tabuleiro_j2[CordY][CordX] = 'P';
                tabuleiro_j2[CordY + 1][CordX] = 'P';
                tabuleiro_j2[CordY + 2][CordX] = 'P';
                tabuleiro_j2[CordY + 3][CordX] = 'P';
                tabuleiro_j2[CordY - 1][CordX] = 'P';
                tabuleiro_j2[CordY - 2][CordX] = 'P';
                tabuleiro_j2[CordY - 3][CordX] = 'P';
                break;
            }
        }
    }
    //

    //
    printf("Insira o número de rodadas: ");
    scanf("%d", &Rodadas);

    for (int Rodadas_pass = 0; Rodadas_pass < Rodadas; Rodadas_pass++)
    {
        printf("Insira sua coordenada de ataque jogador 1:");
        scanf("%d %d", &CordY, &CordX);
        switch (tabuleiro_j2[CordY][CordX])
        {
        case 'P':
            Pont_j1 = Pont_j1 + 10;
            tabuleiro_j2[CordY][CordX] = 'O';
            break;

        case 'E':
            Pont_j1 = Pont_j1 + 5;
            tabuleiro_j2[CordY][CordX] = 'O';
            break;

        case 'C':
            Pont_j1 = Pont_j1 + 2;
            tabuleiro_j2[CordY][CordX] = 'O';
            break;

        default:
            tabuleiro_j2[CordY][CordX] = 'O';
            break;
        }

        printf("Insira sua coordenada de ataque jogador 2:");
        scanf("%d %d", &CordY, &CordX);

        switch (tabuleiro_j1[CordY][CordX])
        {
        case 'P':
            Pont_j2 = Pont_j2 + 10;
            tabuleiro_j1[CordY][CordX] = 'O';
            break;

        case 'E':
            Pont_j2 = Pont_j2 + 5;
            tabuleiro_j1[CordY][CordX] = 'O';
            break;

        case 'C':
            Pont_j2 = Pont_j2 + 2;
            tabuleiro_j1[CordY][CordX] = 'O';
            break;

        default:
            tabuleiro_j1[CordY][CordX] = 'O';
            break;
        }
    }

    printf("TABULEIRO JOGADOR 1\n");
    for (int linha = 0; linha < 20; linha++)
    {
        for (int coluna = 0; coluna < 20; coluna++)
        {
            printf("%c", tabuleiro_j1[linha][coluna]);
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    printf("TABULEIRO JOGADOR 2\n");
    for (int linha = 0; linha < 20; linha++)
    {
        for (int coluna = 0; coluna < 20; coluna++)
        {
            printf("%c", tabuleiro_j2[linha][coluna]);
            printf(" ");
        }
        printf("\n");
    }

    if (Pont_j1 > Pont_j2)
    {
        printf("O jogador 1 venceu com %d pontos, contra %d pontos do jogador 2.", Pont_j1, Pont_j2);
    }
    else if (Pont_j2 > Pont_j1)
    {
        printf("O jogador 2 venceu com %d pontos, contra %d pontos do jogador 1.", Pont_j2, Pont_j1);
    }
    else if (Pont_j1 == Pont_j2)
    {
        printf("O jogo terminou empatado em %d pontos.", Pont_j1);
    }
    return 0;
}
