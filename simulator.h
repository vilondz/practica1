#include <fstream>
#include "ant.h"
#include "tape.h"

class Simulator{

  public:
    Simulator();
    Simulator(std::string fichero);
    void Guardar_fichero();
};