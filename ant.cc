#include "ant.h"

 
Ant::Ant(int pos_x, int pos_y, orientacion direccion){
  pos_x_ = pos_x;
  pos_y_ = pos_y;
  orientacion_ = direccion;
}
    
std::pair<int,int> Ant::get_pos(void){
  return std::pair<int, int>(this->pos_x_, this->pos_y_);
}

//Si está sobre una celda blanca, cambia el color a negra, gira noventa grados a la izquierda
//y avanza una celda.

void Ant::sobre_blanco(){
  switch(this->orientacion_){
    case orientacion::N:
      this->orientacion_ = O;
      this->pos_x_--;
      break;
    case orientacion::E:
      this->orientacion_ = N;
      this->pos_y_++;
      break;
    case orientacion::S:
      this->orientacion_ = E;
      this->pos_x_++;
      break;
    case orientacion::O:
      this->orientacion_ = S;
      this->pos_y_--;
  }
} 
//● Si está sobre una celda negra, cambia el color a blanca, gira noventa grados a la derecha
//y avanza una celda.
void Ant::sobre_negro(){
  switch(this->orientacion_){
    case orientacion::N:
      this->orientacion_ = E;
      this->pos_x_++;
      break;
    case orientacion::E:
      this->orientacion_ = S;
      this->pos_y_--;
      break;
    case orientacion::S:
      this->orientacion_ = O;
      this->pos_x_--;
      break;
    case orientacion::O:
      this->orientacion_ = N;
      this->pos_y_++;
  }
}

std::ostream& Ant::write_ant(std::ostream& out){
  std::pair<int, int> posicion = get_pos();
  out << posicion.first << posicion.second << std::endl;
  return out;
}