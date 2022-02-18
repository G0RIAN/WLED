#include "vector"
#include "cstdlib"
#include "iostream"
#include "hive.h"
#include "edge.h"
#ifndef TLED 
#include "FX.h"

const Edge &Hive::getRandomEdge() const{
  return getEdges().at(random8(this->edges.size() - 1));
};
#endif

const Edge &Hive::getFirstEdge() const {
  return getEdges().at(0);
};
const Edge &Hive::getLastEdge() const {
  return getEdges().at(this->edges.size() - 1);
};
const Edge &Hive::getEdgeByIndex(uint8_t index) const {
  return getEdges().at(index);
};

const std::vector<Edge> &Hive::getEdges() const {
  return this->edges;
}