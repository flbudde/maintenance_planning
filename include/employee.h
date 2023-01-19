#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
  private:

  int id;
  std::string name;
  std::string qualification;

  public:

  Employee(int a, std::string b, std::string c);
  ~Employee();
  int get_id();
  void set_id(int a);
  std::string get_name();
  void set_name(std::string a);
  std::string get_qualification();
  void set_qualification(std::string a);


};

#endif