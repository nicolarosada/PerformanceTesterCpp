#include "stdafx.h"

#include "comparator/Comparator.h"

#include "tests/TestExample.h"


int main()
{
  Comparator compare;
  compare.setIterations(1000);

  compare.setSimulation<A>(TestExample::simulation<A>);
  compare.setSimulation<B>(TestExample::simulation<B>);

  compare.compare();
  compare.printResults();

  return 0;
}