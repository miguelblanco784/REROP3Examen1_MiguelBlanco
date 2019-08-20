#include "Soldado.cpp"
#ifndef SSOPORTE_CPP
#define SSOPORTE_CPP
class SSoporte: public Soldado{
	private:
		int blindaje;
	    int camuflaje;
	public:
	    SSoporte() {
	    }
	
	    SSoporte(string nombre, int puntosdevida, int puntosdefuerza, int blindaje, int camuflaje) {
	    	setNombre(nombre);
	    	setPuntosdevida(puntosdevida);
	    	setPuntosdefuerza(puntosdefuerza);
	        this->blindaje = blindaje;
	        this->camuflaje = camuflaje;
	    }
	
	    int getBlindaje() {
	        return blindaje;
	    }
	
	    void setBlindaje(int blindaje) {
	        this->blindaje = blindaje;
	    }
	
	    int getCamuflaje() {
	        return camuflaje;
	    }
	
	    void setCamuflaje(int camuflaje) {
	        this->camuflaje = camuflaje;
	    }
	    
	    void print(){
	    	cout<<"Nombre: "<<getNombre()<<"  Vida: "<<getPuntosdevida()<<"  Fuerza: "<<getPuntosdefuerza()<<"  Blindaje: "<<blindaje<<"  Camuflaje: "<<camuflaje<<endl;
		}
		
		int atacar(string atacante){
			if(atacante=="SAsalto"){
				return (getPuntosdefuerza()*(15+camuflaje));
			}else{
				return (getPuntosdefuerza()*10);
			}
		}
		
		bool dano(int ataque, string atacante){
			int vivir;
			if(atacante=="SAsalto"){
				vivir = (getPuntosdevida()-(ataque/(blindaje*2)));
				setPuntosdevida(vivir);
			}else{
				vivir = (getPuntosdevida()-ataque);
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
