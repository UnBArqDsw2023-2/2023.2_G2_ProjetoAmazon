#include "avaliacaoBase.hpp"
#include "concreteDecoratorA.hpp"
#include "concreteDecoratorB.hpp"
#include "printResult.hpp"

int main() {
  Component* simple = new ConcreteComponent;
  std::cout << "Esta e uma avaliacao padrao(sem midia ou categorias avaliadas)\n";
  ClientCode(simple);
  std::cout << "\n\n";

  Component* decorator1 = new ConcreteDecoratorA(simple);
  Component* decorator2 = new ConcreteDecoratorB(decorator1);
  std::cout << "Ja essa e uma avaliacao decorada, possuindo tanto midia quanto categorias\n";
  ClientCode(decorator2);
  std::cout << "\n";

  delete simple;
  delete decorator1;
  delete decorator2;

  return 0;
}
