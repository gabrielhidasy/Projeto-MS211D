#include <stdio.h>
int main () {
  double Vi=52.90;
  double Ven=0.0;
  double parcela=5.58;
  int meses=10,k=0;
  double montanteA=Vi-Ven;
  double montanteB=Vi-Ven;
  double chuteA=7.;
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
