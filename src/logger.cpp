#include "logger.h"

#include "logger.h"


Logger::Logger() {

}

void Logger::log(Activity* activity) {
  _activities.push_back(*activity);
}

std::vector<Activity> Logger::getActivities() {
  return _activities;
}

int Logger::getNumberOfActivities() {
  return _activities.size();
}

std::vector<Activity> Logger::filter(int from, int to) {
  std::vector<Activity> result;
  for(Activity a : _activities) {
    if(a.getTimestamp() >= from && a.getTimestamp() <= to) {
      result.push_back(a);
    }
  }
  return result;
}