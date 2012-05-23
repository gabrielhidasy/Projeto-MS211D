#!/bin/python
C=51900.;
Poup=C*1.5;
am=751.
jur=0.006
meses=60;
#OP 1
Poup=Poup-C;
while (meses):
  Poup=Poup*(1+jur);
  Poup=Poup+am;
  meses=meses-1;
print "Opcao 1 - pagar diretamente e aplicar as parcelas - Saldo final:",
print  Poup;
print "Lembrando que nessa opcao foi aplicado um extra de:",
print am*60;

#OP 2
Poup=1.5*C;
meses=60;
Poup=Poup-25000;
while (meses):
    Poup=Poup*(1+jur);
    Poup=Poup-am;
    meses=meses-1;
print "Opcao 2 - pagar o financiamento - Saldo final:",;
print Poup;
  
  

