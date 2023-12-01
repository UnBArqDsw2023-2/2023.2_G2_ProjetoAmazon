#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Subject;

class IObserver {
 public:
  virtual ~IObserver(){};
  virtual void Update(const std::string &message_from_subject) = 0;
};

class Observer : public IObserver {
 public:
  Observer(Subject &subject);
  virtual ~Observer();

  void Update(const std::string &message_from_subject) override;
  void RemoveMeFromTheList();
  void PrintInfo();

 private:
  std::string message_from_subject_;
  Subject &subject_;
  static int static_number_;
  int number_;
};

#endif  // OBSERVER_H
