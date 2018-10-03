double elevar(double num, int expoente) {
    double retorno = 1;
    int i;

    for(i=expoente; i>0; i--) {
        retorno = retorno*num;
    }
    return retorno;
}

double fatorial(double num) {
    double retorno = num;
    int i;

    for(i=num-1; i>1; i--){
        retorno = retorno*i;
    }
    return retorno;
}
