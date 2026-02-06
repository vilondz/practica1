#include "tape.h"
#include <iostream>
Tape::Tape(int size_x, int size_y){
  size_x_ = size_x;
  size_y_ = size_y;
  cinta_.resize(size_x_);
  for(int i = 0; i < size_x_; i++){
    cinta_[i].resize(size_y_);
  }
  for(int i = 0; i < size_x_; i++){
    for(int j = 0; j < size_y_; j++){
     // std::cout << "el bucle funciona" << std::endl;
     // std::cout << i  << " " << j << std::endl;
      cinta_[i][j] = '0';
    } 
  }
}

Tape::Tape(int x, int y, std::vector<std::pair<int, int>> negras){
  //para el futuro tiene que coger las fichas negras de un fichero y ponerlas en la cinta donde corresponde
}
  
bool Tape::get_color(int& x, int& y){
  return cinta_[x][y];
}
  
void Tape::change_color(int& x, int& y){
  if (cinta_[x][y] == '0'){
    cinta_[x][y] = '1';
  }
  else {
    cinta_[x][y] = '0';
  }
}
  
std::ostream& Tape::draw_tape(std::ostream& out){
  for(int i = 0; i < size_x_; i++){
    for(int j = 0; j < size_y_; j++){
      out << (cinta_[i][j]);
      change_color(i,j);
    }
    out << std::endl;
  }
  return out;
}
  

