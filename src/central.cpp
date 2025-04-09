#include "central.h"
#include <iostream>
#include "central.h"
#include "datetime.h"

Central::Central() {

}

Central::Central(Logger logger) : _logger(logger) { }

void Central::log(Activity* activity) {
  _logger.log(activity);
}

void Central::printLog() {
  for(int i = 0; i < getLogger().getNumberOfActivities(); i++) {
    std::cout << _logger.getActivities()[i].toString() << std::endl;
  }
  
  std::vector<Activity> result = _logger.filter(1711936658, 1712331675);

  for(int i = 0; i < result.size(); i++) {
    std::cout << result[i].toString() << std::endl;
  }
}

void Central::setLogger(Logger logger) {
  _logger = logger;
}

Logger Central::getLogger() {
  return _logger;
}
