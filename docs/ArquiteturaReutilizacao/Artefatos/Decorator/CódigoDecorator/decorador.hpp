#pragma once

#include "avaliacao.hpp"

class Decorator : public Component {
protected:
  Component* component_;

public:
  Decorator(Component* component);
  std::string Operation() const override;
};
