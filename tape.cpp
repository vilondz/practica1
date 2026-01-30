#include "tape.h"
#include <iostream>
Tape::Tape(){
  sizex_ = 10;
  sizey_ = 10;
  cinta_.resize(sizex_);
  for(int i = 0; i < sizex_; i++){
    cinta_[i].resize(sizey_);
  }
  for(int i = 0; i < sizex_; i++){
    for(int j = 0; j < sizey_; j++){
      std::cout << "el bucle funciona" << std::endl;
      std::cout << i  << " " << j << std::endl;
      cinta_[i][j] = false;
    }
  }
}

Tape::Tape(std::string fichero){
  //para el futuro tiene que coger las fichas negras de un fichero y ponerlas en la cinta donde corresponde
}
  
bool Tape::get_color(int& x, int& y){
  return cinta_[x][y];
}
  
void Tape::change_color(int& x, int& y){
  cinta_[x][y] = !cinta_[x][y];
}
  
std::ostream& Tape::drow_tape(std::ostream& out){
  for(int i = 0; i < sizex_; i++){
    for(int j = 0; j < sizey_; j++){
      out << (cinta_[i][j] ? "x" : " ");
      change_color(i,j);
    }
    out << std::endl;
  }
  return out;
}
  

