#pragma once

#include "avaliacao.hpp"
#include <iostream>


void ClientCode(Component* component) {

  std::cout << "RESULTADO: " << component->Operation();

}
