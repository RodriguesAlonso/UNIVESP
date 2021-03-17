class Cidades
{
private:
    int ano; //ano de origem.
    int populacao;
    char pais[50];
public:
    Cidades(int ano, int populacao, char pais);
    ~Cidades();

    void setAno(int ano);
    void setPopilacao(int populacao);
    void setPais(char pais);

    int getAno();
    int getPopulacao();
    char pais();

    int print();
};
