#include "activity.h"

#include "activity.h"
#include "datetime.h"

Activity::Activity(std::string to, std::string from, int timestamp, Type type) : to(to), from(from), timestamp(timestamp), type(type) {
  validate(to);
  validate(from);
}

std::string Activity::getTo() {
  return to;
}

std::string Activity::getFrom() {
  return from;
}

int Activity::getTimestamp() {
  return timestamp;
}

Type Activity::getType() {
  return type;
}

std::string Activity::typeAsString() {
  switch (type)
  {
  case VOICE:
    return "VOICE";
  case SMS:
    return "SMS";
  case MMS:
    return "MMS";
  case INTERNET:
    return "INTERNET";
  default:
    return "N/A";
  }
}

std::string Activity::toString() {
  return DateTime(timestamp).getString() + "\t" + std::to_string(timestamp) + "\t" + to + "\t" + from + (type == INTERNET ? "\t\t" : "\t") + typeAsString();
}

bool Activity::validate(std::string number) {
  return true;
}