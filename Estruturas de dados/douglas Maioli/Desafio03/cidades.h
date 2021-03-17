class Cidades
{
private:
    char nome[50];//nome da cidade
    int ano; //ano de origem.
    int populacao;
    char pais[50];
public:
    Cidades(char nome, int ano, int populacao, char pais);
    ~Cidades();

    void setAno(int ano);
    void setPopulacao(int populacao);
    void setPais(char pais);

    int getAno();
    int getPopulacao();
    char getPais();

    void print();
};
