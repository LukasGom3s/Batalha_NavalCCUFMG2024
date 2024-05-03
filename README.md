Batalha Naval é um jogo estratégico e competitivo que envolve a disputa entre dois jogadores. Na versão original, que segundo relatos foi criada por soldados russos durante a Primeira Guerra Mundial, os oponentes desenhavam, em papel, navios posicionados em um mar imaginário quadriculado.

Exemplo do tabuleiro de um jogo de Batalha Naval


     De forma alternada, os jogadores devem bombardear coordenadas do mapa adversário com o intuito de atingir e afundar os navios inimigos. Caso não haja um navio na coordenada atacada por um jogador, nada acontece. Se houver, a parte do navio posicionada naquela coordenada é destruída e, caso todas as outras partes do navio também estejam destruídas, ele é afundado. Ganha o jogador que conseguir afundar todos os navios da frota adversária primeiro. 

     Este trabalho prático consiste na implementação de uma adaptação de Batalha Naval, a ser realizada por meio de código escrito na linguagem C. Na nossa adaptação, dois jogadores devem posicionar seus navios em seu respectivo mapa, a ser representado por uma matriz de tamanho 20x20. Inicialmente, não há nenhum navio posicionado, logo todas as coordenadas de ambos os mapas serão preenchidas apenas com água, que será representada pelo caractere ‘~’.

Seu programa deve, então, ler um inteiro não-negativo N (N >= 0) que representa a quantidade de navios que cada jogador irá posicionar. Você deve posicionar primeiro todos os navios do primeiro jogador, e somente então posicionar todos os navios do segundo jogador. Para cada jogador, seu programa lerá N vezes as seguintes informações da entrada:


coordenada X do navio a ser posicionado;

coordenada Y do navio a ser posicionado;

tipo do navio;

orientação do navio.

Nossa adaptação terá 3 tipos de navio:


Contratorpedeiros, que possuem comprimento de 3 unidades e são representados pelo caractere ‘C’;

Encouraçados, que possuem comprimento de 5 unidades e são representados pelo caractere ‘E’;

Porta-Aviões, que possuem comprimento de 7 unidades e são representados pelo caractere ‘P’;


Cada navio pode ser posicionado em duas orientações distintas: vertical, representada pelo caractere ‘V’, ou horizontal, representada pelo caractere ‘H’. Importante: as coordenadas X e Y referem-se ao centro do navio!

     Após ler as informações e posicionar todos os navios dos dois jogadores, seu programa deve ler outro inteiro não-negativo M (M >= 0) que representa a quantidade de rodadas da partida. Em cada rodada, seu programa deve ler dois inteiros referentes ao ataque do primeiro jogador, calcular o resultado do ataque, ler mais dois inteiros referentes ao ataque do segundo jogador e calcular o resultado deste segundo ataque, em um processo que se repete M vezes (rodadas alternadas). Em um ataque, os seguintes resultados são possíveis:

o jogador acertou um porta-aviões do adversário, ganhando 10 pontos por isso;

o jogador acertou um encouraçado do adversário, ganhando 5 pontos por isso;

o jogador acertou um contratorpedeiro do adversário, ganhando 2 pontos por isso;

o ataque do jogador atingiu apenas água, então nada acontece.

Em todos os resultados acima descritos, a coordenada atacada pelo jogador deve passar a ter uma explosão, representada pelo caractere ‘O’. Ambos os jogadores iniciam com 0 pontos.

    Finalmente, seu programa deve imprimir o tabuleiro do jogador 1, imprimir o tabuleiro do jogador 2 e informar o vencedor através da seguinte mensagem:
O jogador x venceu com px pontos, contra py pontos do jogador y.

Em que x deve ser substituído pelo número do jogador vencedor (1 ou 2) e px por sua respectiva pontuação, enquanto y e py correspondem ao jogador derrotado e sua pontuação.

Caso o jogo termine empatado,seu programa deve exibir a mensagem:

O jogo terminou empatado em px pontos.

Em que px é a pontuação de qualquer um dos jogadores.
