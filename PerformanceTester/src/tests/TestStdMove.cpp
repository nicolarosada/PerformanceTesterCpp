#include "stdafx.h"
#include <iostream>
#include <string>

#include "TestStdMoveSupport.h"
#include "TestStdMove.h"

template<>
void
TestStdMove::simulation<A>()
{
  std::string str = "oaiC";
  TestStdMoveSupport::doSomething1(str);
}

template<>
void
TestStdMove::simulation<B>()
{
  std::string str = "oaiC";
  TestStdMoveSupport::doSomething2(str);
}