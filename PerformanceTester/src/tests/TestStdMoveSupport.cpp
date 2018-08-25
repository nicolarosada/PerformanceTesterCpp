#include "stdafx.h"

#include "TestStdMoveSupport.h"

void
TestStdMoveSupport::doSomething1(std::string & str)
{
  _str = str;
}
void
TestStdMoveSupport::doSomething2(std::string & str)
{
  _str = std::move(str);
}

std::string TestStdMoveSupport::_str;