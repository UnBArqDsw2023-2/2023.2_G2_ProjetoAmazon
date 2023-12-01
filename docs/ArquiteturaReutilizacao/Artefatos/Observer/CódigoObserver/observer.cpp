#include "observer.h"
#include "subject.h"
#include <iostream>

int Observer::static_number_ = 0;

Observer::Observer(Subject &subject) : subject_(subject) {
  this->subject_.Attach(this);
  std::cout << "Olá Observer \"" << ++Observer::static_number_ << "\". Você está agora seguindo as atualizações do produto desejado. Fique atento para novidades e promoções. Obrigado!\n";
  this->number_ = Observer::static_number_;
}

Observer::~Observer() {
  // std::cout << "Observer \"" << this->number_ << "\" " << "Deletado." << "\n";
}

void Observer::Update(const std::string &message_from_subject) {
  message_from_subject_ = message_from_subject;
  PrintInfo();
}

void Observer::RemoveMeFromTheList() {
  subject_.Detach(this);
  std::cout << "Que triste! Esperamos que você se interesse por este produto novamente. Até breve, Observer \"" << number_ << "\".\n";
}

void Observer::PrintInfo() {
  std::cout << "Observer \"" << this->number_ << "\": " << this->message_from_subject_ << "\n";
}
