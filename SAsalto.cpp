#include "Soldado.cpp"

using namespace std;

#ifndef SASALTO_CPP
#define SASALTO_CPP
class SAsalto: public Soldado{
	private:
		int velocidad;
		int fuerza;
	public:
		SAsalto() {
	    }
	
	    SAsalto(string nombre, int puntosdevida, int puntosdefuerza, int velocidad, int fuerza) {
	    	setNombre(nombre);
	    	setPuntosdevida(puntosdevida);
	    	setPuntosdefuerza(puntosdefuerza);
	        this->velocidad = velocidad;
	        this->fuerza = fuerza;
	    }
	
	    int getVelocidad() {
	        return velocidad;
	    }
	
	    void setVelocidad(int velocidad) {
	        this->velocidad = velocidad;
	    }
	
	    int getFuerza() {
	        return fuerza;
	    }
	
	    void setFuerza(int fuerza) {
	        this->fuerza = fuerza;
	    }
		
		void print(){
	    	cout<<"Nombre: "<<getNombre()<<"  Vida: "<<getPuntosdevida()<<"  Fuerza: "<<getPuntosdefuerza()<<"  Velocidad: "<<velocidad<<"  Fuerza: "<<fuerza<<endl;
		}
		
		int atacar(string atacante){
			if(atacante=="SAsalto"){
				return (getPuntosdefuerza()*10);
			}else{
				return (getPuntosdefuerza()*(10+(getVelocidad()*2)));
			}
		}
		
		bool dano(int ataque, string atacante){
			int vivir;
			if(atacante=="SAsalto"){
				vivir = (getPuntosdevida()-ataque);
				setPuntosdevida(vivir);
			}else{
				vivir = (getPuntosdevida()-(ataque/fuerza));
				setPuntosdevida(vivir);
			}
			if(vivir > 0){
				return false;
			}else{
				return true;
			}	
		}
};
#endif
