#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
class Aviao{
    private:

    public:
    int vel = 0, velMax;
    std::string tipo;
    Aviao(int Atipo);
    void imprimir();
};

// Método construtor;
Aviao::Aviao(int Atipo){
    if (Atipo == 1){
        velMax = 800;
        tipo = "Lambreta da vovó";

    }else if (Atipo == 2){
        velMax = 300;
        tipo = "Bicicleta da tia Ana";

    }else if (Atipo == 3){
        velMax = 150;
        tipo = "Eu correndo de tarde";
    }
};

void Aviao::imprimir(){
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Velocidade Máxima: " << velMax << " Km/h" << std::endl;
    std::cout << "velocidade: " << vel << " Km/h"<< std::endl;
    std::cout << "--------------------" << std::endl; 
}

#endif