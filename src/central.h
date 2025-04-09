#ifndef CENTRAL_H
#define CENTRAL_H

#include <vector>
#include "logger.h"

class Central {
public:
  Central();
  Central(Logger);
  void log(Activity *activity); 
  void printLog();
  Logger getLogger();
  void setLogger(Logger logger);
private:
  Logger logger;
};

#endif