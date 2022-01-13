#include "edge.h"
#ifndef TLED
  #include "FX.h"

void Edge::setColor(uint32_t color, uint8_t index) const {
  WS2812FX::getInstance().setColor(startLedIndex + index, color);
}
void Edge::setColors(std::vector<uint32_t> colors) const {
  for (uint8_t index = 0; index < colors.size(); index++) {
    setColor(colors.at(index), index);
  }
}

#endif

void Edge::addPrevEdge(uint8_t edgeIndex, bool isForward) {
  this->prevEdges.push_back(edgeIndex);
  this->prevDirs.push_back(isForward);
}
void Edge::addNextEdge(uint8_t edgeIndex, bool isForward) {
  this->nextEdges.push_back(edgeIndex);
  this->nextDirs.push_back(isForward);
}

void Edge::setAngle(Angle angle) {
  this->angle = angle;
}

const uint8_t &Edge::getLength() const {
  return this->length;
}

const std::vector<uint8_t> &Edge::getPrevEdges() const {
  return this->prevEdges;
}

const std::vector<bool> &Edge::getPrevDirs() const {
  return this->prevDirs;
}

const std::vector<uint8_t> &Edge::getNextEdges() const {
  return this->nextEdges;
}

const std::vector<bool> &Edge::getNextDirs() const {
  return this->nextDirs;
}

const Edge::Angle &Edge::getAngle() const {
  return this->angle;
}

uint16_t Edge::getStartLedIndex() const {
  return this->startLedIndex;
}
