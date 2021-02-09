'''
função busca1(x)
     i := 1;      busca1 := 0
     enquanto i≤ n faça
          se L[i] . chave = x então
               busca1 := i          % chave encontrada
               i := n + 1
          senão i := i + 1           % pesquisa prossegue
'''
#%%
def busca1(x,l):
  i = 0
  try:     
    while i <= len(l):
        if l[i] == x:
            return print(f'O valor {x} foi encontrado na chave {i} da lista {l}')
        else:
            i += 1
  except:
       print('Elemento não encontrado')          
      

    
# %%
def busca (x, l):    
    i = 0
       
    while l[i] != x:              
        i += 1
        if i == len(l):
            print('elemento não encontrado')
    print(f'O valor {x} foir encontrado na chave {i} da lista {l}.')    
l = [1,2,3,4]        
busca (4,l)
busca (5,l)
        
# %%
