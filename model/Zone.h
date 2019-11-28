/**
 * @file Zone.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef ZONE
#define ZONE
#include "BoundingBox.h"
#include <iostream>

/**
 * @brief
 *
 */
class Zone
{
private:
  BoundingBox bBox;
  std::string type;

public:
  Zone();
  Zone(BoundingBox box, std::string name);
  ~Zone();
  std::string getType();
  void setBbox(BoundingBox box);
  BoundingBox getBbox();
  void setType(std::string name);
};
#endif
