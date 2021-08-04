#include<math.h>
#include<stdlib.h>
#define PI 3.14

typedef struct esfera{
    double diam, raio, volume, area;
}tipo_esfera;

tipo_esfera *criarEsfera() {
    tipo_esfera *esfera = (tipo_esfera*) malloc(sizeof(tipo_esfera));
     if(esfera != NULL)
         return esfera;
     else return NULL;
}

tipo_esfera *excluirEsfera(tipo_esfera *esfera){
    free(esfera);
    return NULL;
}

double calcRaio(tipo_esfera *esfera, double diam){
    return esfera->raio = diam / 2;
}

double calcArea(tipo_esfera *esfera){
    return esfera->area = 4*PI*pow(esfera->raio, 2);
}

double calcVolume(tipo_esfera *esfera){
    return esfera->volume = (4*PI*pow(esfera->raio, 3)) / 3;
}

double getRaio(tipo_esfera *esfera){
    return esfera->raio;
}