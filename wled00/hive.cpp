#include "vector"
#include "cstdlib"
#include "iostream"
#include "hive.h"
#include "edge.h"
#ifndef TLED 
#include "FX.h"

const Edge &Hive::getRandomEdge() {
  return getEdges().at(random8(this->edges.size() - 1));
};
#endif

const Edge &Hive::getFirstEdge() {
  return getEdges().at(0);
};
const Edge &Hive::getLastEdge() {
  return getEdges().at(this->edges.size() - 1);
};
const Edge &Hive::getEdgeByIndex(uint8_t index) {
  if (index > this->edges.size()) {
    std::cout << "Out of range: " << index << " > " << this->edges.size() << std::endl;
    return *new Edge(-1, this->edges.at((int) 0).getLength());
  }
  return getEdges().at(index);
};

const std::vector<Edge> &Hive::getEdges() const {
  return this->edges;
}