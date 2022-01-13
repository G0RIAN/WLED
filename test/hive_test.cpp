#include "..\wled00\hive.h"
#include "..\wled00\edge.h"
#include "iostream"
#include "cstdlib"

#ifndef TLED 
  #define TLED
#endif

int main(void) {
  std::cout << "START" << std::endl;
  const std::vector<Edge> edges = Hive::getInstance().getEdges();
  
  
  for (uint8_t index = 0; index < edges.size(); index++) {
    // test next dirs 
    // std::cout << (int) index << " " << (long) edge.getStartLedIndex() << std::endl;
    const Edge edge = Hive::getInstance().getEdgeByIndex(index);
    const std::vector<uint8_t> nextEdgeIndices = edge.getNextEdges();
    std::cout << "====== " << (int) index << " ====== " << std::endl;
    for (uint8_t listIndex = 0; listIndex < nextEdgeIndices.size(); listIndex++) {
      uint8_t nextEdgeIndex = nextEdgeIndices.at(listIndex);
      std::cout << "    " << (int) nextEdgeIndex;
      const Edge nextEdge = Hive::getInstance().getEdgeByIndex(nextEdgeIndex);
      //std::cout << (int) edge.getStartLedIndex() << " -> " << (int) nextEdge.getStartLedIndex() << std::endl;
      //std::cout << edge.getAngle() * 60 << "\370 -> " << nextEdge.getAngle() * 60 << "\370" << std::endl;
      if ((edge.getAngle() - nextEdge.getAngle()) % 1 != 0) {
        //std::cout << "ERROR" << std::endl;
        return EXIT_FAILURE;
      } else {
        //std::cout << "different directions" << std::endl;
      }
      std::cout << std::endl;
    }
  }
  return EXIT_SUCCESS;
}