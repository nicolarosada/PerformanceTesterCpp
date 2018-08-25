#pragma once

#include <chrono>
#include <functional>

#include "ComparatorCommons.h"


class Comparator
{
public:
  Comparator() {};
  ~Comparator() {};

  /// Set
  void setIterations(const long long iterations);
  template<class AB>
  void setSimulation(const std::function<void(void)> & method);

  /// Compute
  void compare();

  /// Get
  void printResults() const;

private:
  /// Set
  template<class AB>
  void setDuration(const long long duration);

  /// Get
  template<class AB>
  std::function<void(void)> getSimulation() const;

  template<class AB>
  long long getDuration() const;

  /// Compute
  template<class AB>
  void runSimulation();

private:
  long long _iterations = -1;
  std::function<void(void)> _method_A = nullptr;
  std::function<void(void)> _method_B = nullptr;

  long long _duration_A;
  long long _duration_B;

};

/// Public
inline void
Comparator::setIterations(const long long iterations)
{
  _iterations = iterations;
}

template<>
inline void
Comparator::setSimulation<A>(const std::function<void(void)> & method)
{
  _method_A = method;
}

template<>
inline void
Comparator::setSimulation<B>(const std::function<void(void)> & method)
{
  _method_B = method;
}

/// Private
template<>
inline std::function<void(void)>
Comparator::getSimulation<A>() const
{
  return _method_A;
}

template<>
inline std::function<void(void)>
Comparator::getSimulation<B>() const
{
  return _method_B;
}

template<>
inline long long
Comparator::getDuration<A>() const
{
  return _duration_A;
}

template<>
inline long long
Comparator::getDuration<B>() const
{
  return _duration_B;
}

template<>
inline void
Comparator::setDuration<A>(const long long duration)
{
  _duration_A = duration;
}

template<>
inline void
Comparator::setDuration<B>(const long long duration)
{
  _duration_B = duration;
}