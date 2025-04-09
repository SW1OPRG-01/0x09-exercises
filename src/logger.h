#ifndef LOGGER_H
#define LOGGER_H

#include "activity.h"
#include <vector>

class Logger {
  public:
    Logger();
    void log(Activity activity);
    std::vector<Activity> getActivities();
    int getNumberOfActivities();
  private:
    std::vector<Activity> _activities;
};

#endif