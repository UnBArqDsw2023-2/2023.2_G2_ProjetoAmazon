#include "subject.h"
#include "observer.h"
#include <iostream>

Subject::~Subject() {
  std::cout << "Adeus! 🛒 Este produto não está mais disponível para troca por pontos. Obrigado pela sua atenção!\n";
}

void Subject::Attach(IObserver *observer) {
  list_observer_.push_back(observer);
}

void Subject::Detach(IObserver *observer) {
  list_observer_.remove(observer);
}

void Subject::Notify() {
  std::list<IObserver *>::iterator iterator = list_observer_.begin();
  HowManyObserver();
  while (iterator != list_observer_.end()) {
    (*iterator)->Update(message_);
    ++iterator;
  }
}

void Subject::CreateMessage(std::string message) {
  this->message_ = message;
  Notify();
}

void Subject::HowManyObserver() {
 std::cout << "O Produto Desejado está sendo seguido por " << list_observer_.size() << " observadores. Não perca as próximas atualizações e promoções. Fique atento! \n";
std::cout << "\n";
}

void Subject::SomeBusinessLogic() {
  this->message_ = "change message message";
  Notify();
  std::cout << "I'm about to do something important\n";
}
