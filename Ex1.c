#include <stdio.h>
int main () {
    double Vi=51900.0,Ven=25000.0,parcela=751.0;
    int meses=60,k=0;
    double juro=0.0, juro_teo=1.54, total=Ven+parcela*meses;
    double montanteA=Ven,montanteB=Ven;
    

    double chuteA=3., chuteB=2.,chute;
	while(1) {
	    montanteA=Ven,montanteB=Ven;
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
	    printf("chuteB=%lf\n",chuteB);
	    printf("montanteB=%lf",montanteB);
	    if(montanteB<0.001 && montanteB>-0.001) break;
	    system("sleep 1");
	}
    return 0;
}
