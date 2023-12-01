#pragma once

#include "decorador.hpp"

class ConcreteDecoratorB : public Decorator {
public:
  ConcreteDecoratorB(Component* component);
  std::string Operation() const override;
};
