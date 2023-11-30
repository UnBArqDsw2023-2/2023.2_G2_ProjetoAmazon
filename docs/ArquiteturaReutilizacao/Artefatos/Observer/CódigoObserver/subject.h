#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include <string>

class IObserver;

class ISubject {
 public:
  virtual ~ISubject(){};
  virtual void Attach(IObserver *observer) = 0;
  virtual void Detach(IObserver *observer) = 0;
  virtual void Notify() = 0;
};

class Subject : public ISubject {
 public:
  virtual ~Subject();

  void Attach(IObserver *observer) override;
  void Detach(IObserver *observer) override;
  void Notify() override;

  void CreateMessage(std::string message = "Empty");
  void HowManyObserver();
  void SomeBusinessLogic();

 private:
  std::list<IObserver *> list_observer_;
  std::string message_;
};

#endif  // SUBJECT_H
