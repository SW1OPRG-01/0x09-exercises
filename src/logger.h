#ifndef LOGGER_H
#define LOGGER_H

#include "activity.h"
#include <vector>

class Logger {
  public:
    Logger();
    void log(Activity *activity);
    std::vector<Activity> getActivities();
    int getNumberOfActivities();
    std::vector<Activity> filter(int from, int to);
  private:
    std::vector<Activity> _activities;
};

#endif