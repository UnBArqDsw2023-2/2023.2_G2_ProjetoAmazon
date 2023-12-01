#pragma once

#include "decorador.hpp"

class ConcreteDecoratorA : public Decorator {
public:
  ConcreteDecoratorA(Component* component);
  std::string Operation() const override;
};
