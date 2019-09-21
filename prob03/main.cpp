// Random Rectangle
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main ()
{
  // Create variables for dimensions, random numbers, and ouputting #.
  const int MAX = 40;
  const int HEIGHT = 3;
  int length;
  unsigned seed = time(0);
  std::string hashtag_length;

  // Create random seed number.
  srand(seed);

  // Set length to a randomm number that is at most 40.
  length = rand() % MAX + 1;

  // Create number of hashtags to output on length.
  hashtag_length.assign(length, '#');

  // Output reactangle with proper dimensions.
  std::cout << hashtag_length << std::endl;
  std::cout << hashtag_length << std::endl;
  std::cout << hashtag_length << std::endl;

  return 0;
}
