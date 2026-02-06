#include <iostream>
 
enum orientacion {N, S, E, O};

class Ant{
  private:
    int pos_x_;
    int pos_y_;
    orientacion orientacion_;
  public:
    //Ant();
    Ant(int pos_x = 0, int pos_y = 0, orientacion direccion = orientacion::N);
    std::pair<int, int> get_pos();
    void sobre_blanco(); 
    void sobre_negro();
    std::ostream& write_ant(std::ostream& out);
};