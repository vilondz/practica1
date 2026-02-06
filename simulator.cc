#include "simulator.h"

Simulator::Simulator(){
  Ant horminga;
  Tape cinta(10,40);
  cinta.draw_tape(std::cout);
  cinta.draw_tape(std::cout);
  horminga.write_ant(std::cout);
}
    
Simulator::Simulator(std::string fichero){

}
    
void Simulator::Guardar_fichero(){

}