#include "subject.h"
#include "observer.h"
#include <iostream>


void ClientCode() {

  // Temos um subject que representa um produto desejado qualquer
  Subject *subject = new Subject;

  // Temos 5 Observers, onde em primeiro momento 3 estão interessados no produto, mas 2 não estão.

  std::cout << "\n";
  std::cout << "Quantidade de Observers:" << "\n";
  Observer *observer1 = new Observer(*subject);
  Observer *observer2 = new Observer(*subject);
  Observer *observer3 = new Observer(*subject);
  Observer *observer4;
  Observer *observer5;
  std::cout << "\n";

  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";
  std::cout << "Verifica a quantidade de observadores e envia as mensagem para eles:" << "\n";
  subject->CreateMessage("🌟 Ótima notícia! O Produto Desejado está em promoção, por apenas 3000 pontos. Não perca essa oportunidade! 🌟\n");

  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Um observer para de seguir produto desejado:" << "\n";
  observer3->RemoveMeFromTheList();
  std::cout << "\n";

  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Verifica a quantidade de observadores e envia as mensagem para eles:" << "\n";
  subject->CreateMessage("Que pena! 😢 Nosso Produto Desejado acabou, mas continue seguindo para ser o primeiro a saber assim que ele voltar para o estoque! 🛍️✨");
  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Um observer começa a seguir o produto desejado para saber quando voltará para o estoque:" << "\n";
  observer4 = new Observer(*subject);

  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Um observer para de seguir produto desejado, pois não quer mais trocar seus pontos naquele produto:" << "\n";
  observer2->RemoveMeFromTheList();
  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Um observer começa a seguir o produto desejado para saber quando voltará para o estoque:" << "\n";
  observer5 = new Observer(*subject);

  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Verifica a quantidade de observadores e envia as mensagem para eles:" << "\n";
  subject->CreateMessage("🎉 Produto Reabastecido! Aproveitem a oportunidade! 😉");
  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  std::cout << "Um observer para de seguir produto desejado, pois não quer mais trocar seus pontos naquele produto:" << "\n";
  observer5->RemoveMeFromTheList();
  observer4->RemoveMeFromTheList();
  observer1->RemoveMeFromTheList();
  std::cout << "\n";
  std::cout << "--------------------------------------------" << "\n";
  std::cout << "\n";

  delete observer5;
  delete observer4;
  delete observer3;
  delete observer2;
  delete observer1;
  std::cout << "Retiram o Produto Desejado permanentemente da lista de troca de pontos:" << "\n";
  delete subject;
}

int main() {
  ClientCode();
  return 0;
}
