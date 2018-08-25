#include "stdafx.h"
#include <iostream>

#include "TestExample.h"

template<>
void
TestExample::simulation<A>()
{
  std::cout << "A";
}

template<>
void
TestExample::simulation<B>()
{
  std::cout << "BBBBBBB";
}