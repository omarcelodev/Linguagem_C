//Configurar exibição das Listagens
void ConfigurarListagem(void){
    printf("\n+--------------------------------------+");
    printf("\n|Escolha como deseja Listar as Array's.|\n");
    printf("+--------------------------------------+\n");

    printf("Para imprimir números com índice - Pressione 1\n");
    printf("Para imprimir numero sem índice - Pressione 0\n");
    indice = lerSimOuNao("Sua opção: ");


    printf("\nPara imprimir na Horizontal - Pressione 1\n");
    printf("Para imprimir na Vertical - Pressione 0\n");
    posicao = lerSimOuNao("Sua opção: ");

    printf("Configurações aplicadas com sucesso!");
}




