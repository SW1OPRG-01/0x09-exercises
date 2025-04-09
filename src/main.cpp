#include <iostream>
#include "central.h"
#include "data-log.h"

int main (int argc, char* argv[]) {

  Central c = Central();

  // Populate logger with data
  for(Activity a : DATA) {
    c.log(&a);
  }

  c.printLog();

  // Test filter
  std::cout << std::endl << "FILTER" << std::endl;
  for(Activity a : c.getLogger().filter(1711936658, 1712331675)) {
    std::cout << a.toString() << std::endl;
  }
  
  return 0;
}