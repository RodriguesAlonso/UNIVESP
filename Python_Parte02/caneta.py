class Caneta:
    def __init__(self, modelo, cor, tampa = True):
        self.modelo = modelo
        self.cor = cor
        self.tampa = tampa

    def tampar(self):
        if self.tampa == True:
            print("Caneta já esta tampada")
        else:
            self.tampa = True
            print("Tampando caneta")
    def destampar(self):
        if self.tampa==False:
            print("Caneta já esta sem tampa.")
        else:
            self.tampa = False
            print("Destampando caneta.")
def main():
    bic_azul = Caneta('bic', 'azul', False)
    bic_preta = Caneta('bic', 'preto')
    print(bic_azul.tampa)
    print(bic_preta.tampa)
    bic_azul.tampar()
    print(bic_azul.tampa)
    bic_azul.tampar()
main()