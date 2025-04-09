#include <iostream>
#include "central.h"
#include "data-log.h"

int main (int argc, char* argv[]) {

  Central c = Central();
  for(Activity a : DATA) {
    c.log(&a);
  }
  c.printLog();

  return 0;
}