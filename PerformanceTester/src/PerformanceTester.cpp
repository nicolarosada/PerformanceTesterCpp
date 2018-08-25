#include "stdafx.h"

#include "comparator/Comparator.h"

#include "tests/TestExample.h"
#include "tests/TestStdMove.h"


int main()
{
  Comparator compare;
  compare.setIterations(100000000);

  //compare.setSimulation<A>(TestExample::simulation<A>);
  //compare.setSimulation<B>(TestExample::simulation<B>);
  compare.setSimulation<A>(TestStdMove::simulation<A>);
  compare.setSimulation<B>(TestStdMove::simulation<B>);

  compare.compare();
  compare.printResults();

  return 0;
}