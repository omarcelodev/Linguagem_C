//Configurar exibi��o das Listagens
void ConfigurarListagem(void){
    printf("\n+--------------------------------------+");
    printf("\n|Escolha como deseja Listar as Array's.|\n");
    printf("+--------------------------------------+\n");

    printf("Para imprimir n�meros com �ndice - Pressione 1\n");
    printf("Para imprimir numero sem �ndice - Pressione 0\n");
    indice = lerSimOuNao("Sua op��o: ");


    printf("\nPara imprimir na Horizontal - Pressione 1\n");
    printf("Para imprimir na Vertical - Pressione 0\n");
    posicao = lerSimOuNao("Sua op��o: ");

    printf("Configura��es aplicadas com sucesso!");
}




