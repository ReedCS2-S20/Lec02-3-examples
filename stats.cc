#include <iostream>

//
// stats.cc
//
// Jim Fix, Reed CS2, S20
//
// Modification of the Lab 02 code so that it uses a heap-allocated
// array.
//


// minValue(array,length):
//
// Computes and returns the smallest value in the array of memory
// referenced by `array`, assumed to be of the given `length`.
//
double meanValue(double* array, int length) {
  double total = 0.0;
  for (int i=0; i<length; i++) {
    total += array[i];
  }
  return total / static_cast<double>(length);
}

// minValue(array,length):
//
// Computes and returns the smallest value in the array of memory
// referenced by `array`, assumed to be of the given `length`.
//
double minValue(double* array, int length) {
  double min = array[0];
  for (int i=1; i<length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

// main():
//
// Requests a data set size, then the data of that set. Reports
// two statistics about that data set.
//
int main() {

  // Get the data set size. 
  int size;
  std::cout << "What's the size of your data set? ";
  std::cin >> size;

  // Allocate an array of memory of that size from the heap.
  double *data = new double[size]; 

  // Get the data.
  for (int i=0; i < size; i++) {
    std::cout << "Enter entry number "<< i << ": ";
    std::cin >> data[i];
  }

  // Report the data.
  std::cout << "Here is what you entered:\n";
  for (int i=0; i < size; i++) {
    std::cout << "Entry " << i << ": " << data[i] << "\n";
  }

  // Report two statistics about that data.
  std::cout << "The mean value of that data is " << meanValue(data) << ".\n";
  std::cout << "The minimum value of that data is " << minValue(data) << ".\n";

  // Done with the data. Give back its memory to the heap.
  delete [] data;
  
  return 0;
}


