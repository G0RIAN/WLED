#ifndef EDGE_H
#define EDGE_H


#include "stdint.h"
#include "const.h"
#include "vector"

class Edge {
  public: 
    enum Angle {
      ANGLE_0_DEG   = 0,
      ANGLE_60_DEG  = 1, 
      ANGLE_120_DEG = 2, 
      ANGLE_180_DEG = 3, 
      ANGLE_240_DEG = 4, 
      ANGLE_300_DEG = 5
    };
  
  private:
    std::vector<uint8_t> prevEdges;
    std::vector<bool> prevDirs;
    std::vector<uint8_t> nextEdges;
    std::vector<bool> nextDirs;
    uint16_t startLedIndex;
    uint8_t length;
    Angle angle;
  
  public: 
    Edge(uint16_t startLedIndex, uint8_t length) {
      this->startLedIndex = startLedIndex;
      this->length = length;
    };

  void setAngle(Angle angle);
  void addPrevEdge(const uint8_t prevEdgeIndex, bool isForward);
  void addNextEdge(const uint8_t nextEdgeIndex, bool isForward);
  const std::vector<uint8_t> &getPrevEdges() const;
  const std::vector<bool> &getPrevDirs() const;
  const std::vector<uint8_t> &getNextEdges() const;
  const std::vector<bool> &getNextDirs() const;
  const uint8_t &getLength() const;
  const Angle &getAngle() const;
  uint16_t getStartLedIndex() const;
};

#endif