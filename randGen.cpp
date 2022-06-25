#include "randGen.h"

#include <random>

static std::random_device randomDevice;
static std::mt19937 randomGenerator(randomDevice());

int randGen(int minRange, int maxRange) {
  std::uniform_int_distribution<> distribution(minRange, maxRange);
  return distribution(randomGenerator);
}
