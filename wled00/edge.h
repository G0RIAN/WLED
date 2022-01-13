#ifndef EDGE_H
#define EDGE_H


#include "stdint.h"
#include "const.h"
#include "vector"
//#include "FX.h"


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
      switch (angle) {
        case ANGLE_0_DEG:
          this->angle = ANGLE_0_DEG;
          break;
        case ANGLE_60_DEG:
          this->angle = ANGLE_60_DEG;
          break;
        case ANGLE_120_DEG:
          this->angle = ANGLE_120_DEG;
          break;
        case ANGLE_180_DEG:
          this->angle = ANGLE_180_DEG;
          break;
        case ANGLE_240_DEG:
          this->angle = ANGLE_240_DEG;
          break;
        case ANGLE_300_DEG:
          this->angle = ANGLE_300_DEG;
          break;
      }
      this->angle = (*new Angle());
    };

  void setAngle(Angle angle);
  void setColors(std::vector<uint32_t> colors) const;
  void setColor(uint32_t color, uint8_t index) const;
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