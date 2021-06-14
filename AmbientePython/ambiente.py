from math import sqrt;
#n = 10
#s2 = 3.4
#mi = 10
#media = 6.2
#tcalc = (media - mi)/  sqrt(s2)/sqrt(n)
#print(tcalc)

#pi = 0.8
#n = 3000
#p = 0.93
#zcalc = p-pi/pi*(1-pi)/sqrt(n)
#print(zcalc)

s2 = [10, 10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10 ,10, 4, 3, 3, 1, 0, 0,0,0,0,0]
x = 0
for s in s2:
    soma = (s2[s] - 5.55)**2 / 20
    x += soma 

dp = sqrt(x)
res = (5.55 - 5)/dp/sqrt(20)
print (res)