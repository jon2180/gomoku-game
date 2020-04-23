
#ifndef BASIC_STUDENT_H
#define BASIC_STUDENT_H

#include <string>
using namespace std;

class Student {
public:
  Student(int no, string name);

  void setNo(int I);
  int getNo();

  void setName(string newName);
  string getName();

  ~Student();

private:
  int no;
  string name;
};

#endif
