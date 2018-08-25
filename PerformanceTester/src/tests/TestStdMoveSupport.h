#pragma once

#include <string>

#include "../comparator/ComparatorCommons.h"


class TestStdMoveSupport
{
public:
  static void doSomething1(std::string & str);
  static void doSomething2(std::string & str);

private:
  static std::string _str;

};