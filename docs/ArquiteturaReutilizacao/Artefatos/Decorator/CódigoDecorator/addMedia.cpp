#include "concreteDecoratorA.hpp"

ConcreteDecoratorA::ConcreteDecoratorA(Component* component) : Decorator(component) {
}

std::string ConcreteDecoratorA::Operation() const {
  return "Midia Adicionada(" + Decorator::Operation() + ")";
}
