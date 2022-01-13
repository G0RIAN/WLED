#ifndef HIVE_H
#define HIVE_H

#include "vector"
#include "cstdlib"
#include "iostream"
#include "edge.h"
#include "hiveConfig.h"

class Hive {
  private:
    std::vector<Edge> edges = std::vector<Edge>();

    Hive() {
      uint16_t ledStartIndex = 0;
      const std::vector<Edge::Angle> hiveAngles HIVE_ANGLES;
      uint8_t nEdges = hiveAngles.size();
      for (uint8_t index = 0; index < nEdges; index++) {
        const Edge::Angle angle = (*new Edge::Angle(hiveAngles.at(index)));
        this->edges.push_back(*new Edge(ledStartIndex, HIVE_EDGE_LENGTH));
        this->edges.at(this->edges.size() - 1U).setAngle(angle);
        ledStartIndex += HIVE_EDGE_LENGTH;
      }
      const std::vector<std::vector<uint8_t>> hivePrevEdges HIVE_PREV_EDGES;
      const std::vector<std::vector<uint8_t>> hiveNextEdges HIVE_NEXT_EDGES;
      const std::vector<std::vector<bool>> hivePrevDirs HIVE_PREV_DIRS;
      const std::vector<std::vector<bool>> hiveNextDirs HIVE_NEXT_DIRS;
      for (uint8_t index = 0; index < nEdges; index++) {
        const std::vector<uint8_t> prevEdges = hivePrevEdges.at(index);
        const std::vector<uint8_t> nextEdges = hiveNextEdges.at(index);
        const std::vector<bool> prevDirs = hivePrevDirs.at(index);
        const std::vector<bool> nextDirs = hiveNextDirs.at(index);
        for (uint8_t prevEdgeIndex = 0; prevEdgeIndex < prevEdges.size(); prevEdgeIndex++) {
          this->edges.at(index).addPrevEdge(prevEdges.at(prevEdgeIndex), prevDirs.at(prevEdgeIndex));
        }
        for (uint8_t nextEdgeIndex = 0; nextEdgeIndex < nextEdges.size(); nextEdgeIndex++) {
          this->edges.at(index).addNextEdge(nextEdges.at(nextEdgeIndex), nextDirs.at(nextEdgeIndex));
        }
      }
    }
    // Hive(Hive const&);
    // void operator=(Hive const&);

  public:
  #ifndef TLED 
    const Edge &getRandomEdge();
  #endif 
    const Edge &getFirstEdge();
    const Edge &getLastEdge();
    const Edge &getEdgeByIndex(uint8_t index);
    const std::vector<Edge> &getEdges() const;

    static Hive &getInstance() {
      static Hive instance;
      return instance;
    }

    Hive(Hive const&) = delete;
    void operator=(Hive const&) = delete;
};

#endif