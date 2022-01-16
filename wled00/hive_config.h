#ifndef HIVE_CONFIG_H
#define HIVE_CONFIG_H

/* Define the wiring of your hive structure here. */
#include "edge.h"

#define HIVE_EDGE_LENGTH 10
#define HIVE_ANGLES {Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_0_DEG,   \
                     Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, \
                     Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, \
                     Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_300_DEG, \
                     Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_300_DEG, \
                     Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_300_DEG, \
                     Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_300_DEG, Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, \
                     Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_240_DEG, Edge::Angle::ANGLE_180_DEG, \
                     Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_240_DEG, \
                     Edge::Angle::ANGLE_180_DEG, Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_60_DEG,  Edge::Angle::ANGLE_0_DEG,   Edge::Angle::ANGLE_120_DEG, Edge::Angle::ANGLE_60_DEG}
#define HIVE_PREV_EDGES {{21, 20}, {0}, {1},      {2, 18},  {3, 14}, {4}, {5},      {6, 12}, {7}, {8},      {9, 35},  {10, 34}, {11, 13}, {11, 12}, {13, 15}, {13, 14}, \
                         {15, 32},  {16, 28}, {17, 19}, {17, 18}, {19, 25}, {0, 20}, {21}, {22},      {23, 59}, {24, 26}, {24, 25}, {26, 52}, {27, 29}, {27, 28}, {29, 49}, \
                         {30, 45}, {31, 33}, {31, 32}, {33, 43},  {9, 10}, {35},     {36, 38}, {36, 37}, {38}, {39}, {40},     {41, 44}, {37, 42},  {41, 42}, {44, 46}, \
                         {44, 45}, {46}, {47},     {48, 50}, {48, 49}, {50, 53}, {51, 57}, {50, 51}, {53}, {54}, {55},  {56, 58},   {56, 57}, {58} \
                        }
#define HIVE_NEXT_EDGES {{1},       {2}, {3, 18}, {4, 14}, {5},     {6}, {7, 12}, {8},     {9}, {10, 35}, {11, 34}, {12, 13}, {6, 7},   {14, 15},  {3, 4},   {16, 32}, \
                         {17, 29}, {18, 19}, {3, 2},   {20, 25}, {0, 21},  {22},     {23}, {24, 59}, {25, 26}, {19, 20}, {27, 52}, {28, 29}, {16, 17}, {30, 49}, {31, 45}, \
                         {32, 33}, {15, 16}, {34, 43}, {10, 11}, {36},     {37, 38}, {42, 43}, {39},      {40}, {41}, {42, 44}, {37, 43}, {34, 33}, {45, 46},  {30, 31}, \
                         {47},      {48}, {49, 50}, {29, 30}, {51, 53},  {52, 57}, {26, 27}, {54},     {55}, {56}, {57, 58}, {51, 52}, {59},      {23, 24}, \
                        }
#define HIVE_PREV_DIRS {{false, true},  {true}, {true}, {true, true},  {true, true}, {true}, {true}, {true, true}, {true}, {true}, {true, false}, {true, true}, {true, false}, {true, false}, {true, false}, {true, false}, \
                        {true, true},  {true, true},  {true, false}, {true, false}, {true, true}, {false, true}, {true}, {true}, {true, true}, {true, false}, {true, false}, {true, true}, {true, false}, {true, false}, {true, true}, \
                        {true, true},  {true, false}, {true, false}, {true, true},  {true, false}, {true}, {true, false}, {true, false}, {true}, {true}, {true}, {true, false}, {true, true},  {true, false}, {true, false}, \
                        {true, false}, {true}, {true}, {true, false}, {true, false}, {true, false}, {true, true}, {true, false}, {true}, {true}, {true}, {true, false}, {true, false}, {true} \
                       }
#define HIVE_NEXT_DIRS {{true},       {true}, {true, false}, {true, false}, {true},     {true}, {true, false}, {true},     {true}, {true, true}, {true, false}, {true, true}, {false, true},   {true, true},  {false, true},   {true, false}, \
                        {true, false}, {true, true}, {true, false},   {true, false}, {true, true},  {true},     {true}, {true, false}, {true, true}, {false, true}, {true, false}, {true, true}, {false, true}, {true, false}, {true, false}, \
                        {true, true}, {false, true}, {true, false}, {false, true}, {true},     {true, true}, {false, true}, {true},      {true}, {true}, {true, true}, {false, true}, {true, false}, {true, true},  {false, true}, \
                        {true},      {true}, {true, true}, {false, true}, {true, true},  {true, false}, {false, true}, {true},     {true}, {true}, {true, true}, {false, true}, {true},      {false, true}, \
                       }
// TODO: add horizontal and vertical position
#define HIVE_POS_HORIZ {}
#define HIVE_POS_VERT {}

#endif