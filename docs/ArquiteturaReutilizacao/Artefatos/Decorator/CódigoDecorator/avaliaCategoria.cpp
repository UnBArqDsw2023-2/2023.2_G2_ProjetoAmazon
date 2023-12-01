#include "concreteDecoratorB.hpp"

ConcreteDecoratorB::ConcreteDecoratorB(Component* component) : Decorator(component) {
}

std::string ConcreteDecoratorB::Operation() const {
  return "Produto Avaliado em Suas categorias(" + Decorator::Operation() + ")";
}
