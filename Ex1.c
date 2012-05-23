#include <stdio.h>
int main () {
  double Vi=51900.0;
  double Ven=25000.0;
  double parcela=751.0;
  int meses=60,k=0;
  double montanteA=Ven;
  double montanteB=Ven;
  double chuteA=3.;
  double chuteB=2.;
  double chute;

  while(1) {
    montanteA=Vi-Ven,montanteB=Vi-Ven;
    while(k<meses) {
      montanteA=(montanteA*(1+chuteA/100))-parcela;
      k++;
    }
    k=0;
    while(k<meses) {
      montanteB=(montanteB*(1+chuteB/100))-parcela;
      k++;
    }
    k=0;
    chute = chuteB - ((chuteB - chuteA)*montanteB)/(montanteB-montanteA);
    chuteA=chuteB;
    chuteB=chute;
    if(montanteB<0.001 && montanteB>-0.001) break;	    
  }
  printf("Taxa de juros real=%lf\n",chuteB);
  return 0;
}
