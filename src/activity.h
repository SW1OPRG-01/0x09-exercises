#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>

enum Type {
  VOICE,
  SMS,
  MMS,
  INTERNET
};

class Activity {
  public:
    Activity(std::string to, std::string from, int timestamp, Type type);
    std::string getTo();
    std::string getFrom();
    Type getType();
    std::string toString();
    int getTimestamp();
  private:
    bool validate(std::string number);
    std::string typeAsString();
    int timestamp;
    std::string to;
    std::string from;
    Type type;
};

#endif