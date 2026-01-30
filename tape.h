#include <string>
#include <vector>
typedef bool celda;
typedef std::vector<celda> fila_de_celdas ;
typedef std::vector<fila_de_celdas> Cinta;
class Tape {
  private:
    int sizex_;
    int sizey_;
    Cinta cinta_;
  public:
    Tape();
    Tape(std::string fichero);
    bool get_color(int& x, int& y);
    void change_color(int& x, int& y);
    std::ostream& drow_tape(std::ostream& out);
};