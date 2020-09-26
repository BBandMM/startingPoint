#ifndef ESTUDIANT_HH
#define ESTUDIANT_HH

using namespace std;

class Estudiant {

private:    
  int dni;
  double nota;
  bool amb_nota;
  static const int MAX_NOTA = 10;

public:


  /* Constructores */
  Estudiant();

  double consultar_nota();
  /* Modificadores */

  void modificar_nota(double nota);

};
#endif

