#include "stdafx.h"

#include <iostream>

#include "Comparator.h"

/// Public
void
Comparator::compare()
{
  runSimulation<A>();
  runSimulation<B>();
}

void
Comparator::printResults() const
{
  std::cout << std::endl;
  std::cout << "Simulation A: " << getDuration<A>() << " milliseconds" << std::endl;
  std::cout << "Simulation B: " << getDuration<B>() << " milliseconds" << std::endl;
}

/// Private
template<class AB>
inline void
Comparator::runSimulation()
{
  const std::chrono::high_resolution_clock::time_point _time_begin = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < _iterations; i++)
    getSimulation<AB>()();

  const std::chrono::high_resolution_clock::time_point _time_end = std::chrono::high_resolution_clock::now();
  setDuration<AB>(std::chrono::duration_cast<std::chrono::milliseconds>( _time_end - _time_begin ).count());
}