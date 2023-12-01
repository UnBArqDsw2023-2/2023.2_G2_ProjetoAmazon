#pragma once

#include "avaliacao.hpp"

class ConcreteComponent : public Component {
public:
  std::string Operation() const override {
    return "Avaliacao Padrao(sem midia e categoria)";
  }
};
