public class Bola{
    String material, cor;
    int tamanho;
    boolean cheia;

    public Bola() {
    }

    public Bola(String material, String cor, int tamanho, boolean cheia) {
        this.material = material;
        this.cor = cor;
        this.tamanho = tamanho;
        this.cheia = cheia;
    }

    public String getMaterial() {
        return this.material;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public String getCor() {
        return this.cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getTamanho() {
        return this.tamanho;
    }

    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }

    public boolean isCheia() {
        return this.cheia;
    }

    public boolean getCheia() {
        return this.cheia;
    }

    public void setCheia(boolean cheia) {
        this.cheia = cheia;
    }

    public void pintar(String cor, String material){
        setCor(cor);
        setMaterial(material);
    }
    public void encher(){
        setCheia(true);
    }
    public void esvaziar(){
        setCheia(false);
    }
}