#ifndef BAMBOO_03_4096_H_
#define BAMBOO_03_4096_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

#define BAMBOO_03_4096_NUM_CELLS 4096
#define BAMBOO_03_4096_SAMPLERATE 16384

CONSTTABLE_STORAGE(int8_t) BAMBOO_03_4096_DATA []  = {1, 1, -1, 0, 0, 0, 0, 0, 0, 2, 1,
                -22, -80, -127, -72, 39, 54, 23, 80, 124, 53, -22, -22, -2, 13, 40, 24, -40,
                -89, -91, -36, 19, -9, -54, -35, -10, 40, 92, 27, -37, -17, -1, 25, 73, 82, -5,
                -83, -29, 43, 56, 23, -17, -23, -26, -26, -5, 10, -10, -42, -23, 12, -1, -38,
                -56, -13, 50, 53, 23, 9, -23, -39, 23, 72, 41, 7, -4, -12, 4, 24, 20, 0, -22,
                -40, -26, 0, -4, -18, -35, -41, 0, 28, 2, -16, -13, -20, -9, 33, 48, 29, 5, -7,
                4, 23, 20, 23, 20, -5, -15, 0, -1, -18, -23, -17, -6, -6, -29, -41, -27, -12, 6,
                29, 20, -16, -29, -11, 14, 39, 37, 15, 5, 4, 11, 25, 21, -2, -17, -14, -1, 10,
                -4, -30, -31, -23, -16, -3, 1, -13, -25, -21, -6, 13, 23, 16, 7, 3, 2, 10, 23,
                24, 16, 14, 13, 8, -1, -12, -12, -4, -6, -11, -13, -22, -31, -23, -4, 0, -9,
                -18, -22, -7, 14, 25, 26, 19, 8, 9, 18, 22, 18, 6, -3, 4, 13, 4, -6, -14, -24,
                -20, -5, -2, -15, -23, -24, -16, -6, 0, 0, -3, -5, 3, 11, 15, 18, 16, 14, 23,
                30, 12, -6, -2, -1, -1, 4, 5, -10, -30, -31, -16, -3, -1, -10, -21, -24, -13, 4,
                11, 7, 5, 1, 5, 18, 20, 12, 5, 11, 17, 17, 15, 11, -2, -17, -15, 0, -4, -15,
                -16, -19, -23, -13, -3, -8, -14, -11, 0, 7, 7, 1, 6, 16, 22, 18, 11, 5, 3, 3,
                12, 19, 12, -6, -17, -15, -12, -8, -4, -11, -20, -20, -13, -6, -4, -7, -10, -3,
                6, 11, 10, 8, 11, 15, 16, 16, 16, 6, -2, 0, 4, 1, -2, -7, -11, -13, -12, -11,
                -15, -18, -14, -9, -5, -4, -4, -5, -1, 8, 13, 13, 9, 6, 9, 16, 21, 17, 7, 1, -1,
                -6, -4, -1, -6, -11, -11, -11, -16, -17, -13, -10, -10, -6, -1, -2, -2, 4, 7, 5,
                9, 16, 15, 12, 13, 12, 7, 6, 9, 5, -3, -4, -9, -16, -16, -10, -11, -15, -13, -8,
                -9, -10, -4, 2, 3, 5, 8, 4, 8, 17, 15, 10, 11, 10, 4, 4, 7, 4, -4, -7, -3, -4,
                -13, -13, -9, -15, -16, -8, -5, -10, -9, -3, -1, 2, 6, 6, 8, 14, 16, 9, 8, 10,
                10, 6, 4, 5, -2, -10, -6, -2, -8, -10, -8, -11, -15, -12, -8, -7, -5, -2, -1, 1,
                4, 6, 7, 9, 12, 11, 8, 10, 9, 6, 4, 5, 1, -7, -8, -6, -9, -13, -12, -9, -9, -8,
                -6, -5, -7, -5, -1, 4, 7, 7, 4, 5, 8, 9, 7, 9, 11, 7, 1, 3, 3, -3, -7, -5, -5,
                -10, -12, -13, -13, -10, -7, -4, -1, -3, -1, 2, 3, 4, 8, 9, 9, 8, 7, 6, 6, 6, 2,
                1, 1, -2, -7, -7, -5, -5, -7, -10, -10, -8, -9, -6, -3, -4, -2, 2, 4, 5, 4, 4,
                6, 11, 9, 8, 6, 4, 5, 5, 1, -1, -4, -7, -7, -6, -9, -12, -10, -8, -7, -3, -4,
                -6, -5, 0, 4, 8, 8, 5, 4, 6, 10, 11, 8, 5, 3, 0, 0, 2, 0, -6, -7, -6, -7, -11,
                -9, -8, -8, -6, -4, -2, -1, -1, 0, 2, 6, 8, 7, 6, 8, 9, 6, 5, 5, 2, -1, -2, -1,
                -3, -6, -7, -9, -9, -8, -6, -6, -6, -8, -7, -1, 2, 5, 4, 2, 3, 6, 9, 10, 8, 5,
                4, 4, 5, 3, 0, -3, -4, -4, -7, -9, -9, -9, -6, -5, -6, -6, -5, -2, 1, 1, 1, 3,
                5, 6, 7, 8, 5, 5, 7, 5, 3, 3, -1, -5, -5, -3, -5, -8, -8, -7, -8, -8, -7, -6,
                -5, -2, 0, 0, 0, 3, 5, 7, 8, 8, 6, 5, 4, 4, 3, 1, -1, -1, -3, -3, -5, -8, -8,
                -7, -8, -9, -7, -6, -5, -1, 1, 2, 0, 2, 4, 6, 6, 6, 5, 5, 6, 5, 5, 4, 1, -2, -3,
                -4, -4, -5, -8, -8, -8, -9, -7, -5, -5, -5, -3, -1, 1, 4, 5, 6, 6, 5, 6, 7, 8,
                5, 4, 2, 0, 0, -2, -3, -5, -7, -8, -8, -8, -8, -7, -6, -5, -3, -2, -1, 0, 4, 4,
                3, 5, 6, 7, 8, 6, 4, 3, 4, 3, 1, -1, -3, -5, -5, -6, -6, -8, -8, -7, -6, -6, -6,
                -4, -2, 0, 3, 4, 3, 4, 5, 7, 7, 7, 5, 3, 3, 3, 2, -1, -3, -4, -6, -5, -4, -6,
                -8, -8, -7, -5, -4, -2, -1, -1, 0, 2, 4, 4, 6, 7, 5, 5, 6, 4, 3, 2, 0, -2, -1,
                -2, -3, -6, -6, -6, -8, -7, -4, -4, -4, -4, -2, 0, 0, 2, 4, 3, 3, 6, 7, 5, 5, 5,
                4, 3, 2, 0, -2, -4, -4, -4, -6, -6, -5, -7, -7, -6, -4, -4, -2, -1, 0, 1, 3, 4,
                5, 6, 5, 6, 5, 6, 4, 2, 1, 1, -1, -1, -3, -4, -6, -7, -7, -6, -6, -6, -6, -4,
                -4, -2, 0, 2, 3, 4, 4, 4, 6, 6, 5, 5, 5, 3, 2, 1, 0, -3, -4, -4, -5, -7, -7, -7,
                -7, -6, -5, -3, -2, -1, 0, 1, 3, 4, 3, 4, 6, 6, 6, 4, 3, 3, 2, 1, 0, -1, -4, -5,
                -4, -4, -6, -7, -7, -6, -5, -4, -3, -1, -1, 1, 3, 2, 3, 5, 6, 5, 5, 6, 3, 3, 2,
                1, 1, -2, -3, -4, -4, -4, -5, -6, -6, -6, -4, -3, -3, -2, -2, -1, 2, 3, 3, 5, 4,
                5, 4, 4, 4, 3, 2, 1, 0, -1, -3, -3, -4, -4, -6, -6, -5, -5, -6, -4, -3, -3, -2,
                0, 1, 2, 3, 3, 4, 4, 5, 5, 5, 3, 2, 1, 1, -1, -2, -3, -4, -4, -5, -6, -6, -5,
                -5, -4, -3, -2, -2, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 3, 0, 0, 0, -1, -2, -3, -4,
                -5, -4, -4, -4, -5, -4, -4, -3, -2, 0, 0, 1, 1, 3, 5, 4, 4, 5, 3, 2, 4, 2, 1, 0,
                -2, -2, -3, -3, -5, -6, -6, -5, -4, -4, -4, -3, -2, -1, 1, 2, 2, 2, 3, 4, 4, 5,
                2, 2, 2, 2, 2, 1, 0, -2, -2, -3, -4, -5, -5, -5, -5, -4, -3, -3, -3, -2, -1, 1,
                2, 2, 3, 4, 4, 4, 4, 3, 2, 2, 2, 0, 0, -1, -3, -3, -3, -4, -5, -5, -5, -5, -3,
                -2, -2, -1, -1, 0, 1, 3, 4, 3, 3, 3, 4, 4, 3, 2, 1, -1, 0, -1, -3, -3, -4, -5,
                -5, -5, -4, -4, -5, -3, -3, -1, 0, 0, 1, 1, 3, 4, 4, 4, 3, 3, 2, 2, 2, 0, -1,
                -1, -2, -3, -4, -4, -5, -5, -5, -4, -3, -3, -3, -2, 0, 1, 1, 2, 2, 4, 4, 3, 4,
                3, 2, 2, 2, 1, 0, -1, -1, -3, -3, -3, -5, -5, -4, -4, -3, -4, -3, -2, -1, 0, 1,
                2, 2, 3, 3, 4, 4, 3, 2, 2, 1, 1, -1, -1, -2, -3, -3, -3, -3, -4, -4, -5, -3, -3,
                -3, -2, -1, -1, 1, 2, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1, -1, 0, -1, -2, -3, -4, -4,
                -4, -4, -4, -4, -3, -2, -2, -1, -1, 0, 1, 1, 2, 3, 3, 3, 3, 3, 2, 2, 1, 0, -1,
                -1, -2, -2, -3, -4, -4, -4, -3, -3, -3, -3, -2, -1, 0, 0, 1, 1, 1, 3, 3, 3, 3,
                2, 1, 2, 1, 1, 0, -1, -2, -2, -2, -4, -4, -5, -4, -3, -3, -2, -2, -1, 0, 0, 1,
                1, 2, 2, 2, 3, 3, 2, 2, 2, 1, 1, 0, -1, -1, -2, -3, -2, -3, -4, -4, -4, -3, -2,
                -2, -2, -1, 0, 1, 1, 2, 2, 3, 2, 3, 3, 2, 2, 1, 1, 0, -1, -1, -2, -3, -4, -3,
                -3, -3, -3, -4, -4, -2, -2, -1, 0, 1, 1, 1, 3, 3, 3, 3, 2, 2, 2, 1, 1, 0, 0, -1,
                -1, -2, -3, -3, -4, -4, -3, -3, -2, -3, -2, -1, -1, 0, 0, 1, 1, 2, 3, 3, 3, 2,
                2, 1, 1, 0, 0, -2, -2, -2, -3, -3, -4, -4, -4, -3, -2, -2, -2, -1, -1, 0, 1, 1,
                1, 2, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -2, -2, -2, -2, -3, -3, -4, -3, -3, -2, -2,
                -1, 0, -1, 0, 1, 1, 1, 2, 2, 2, 3, 2, 1, 1, 0, 1, -1, -1, -2, -2, -3, -2, -3,
                -4, -3, -3, -3, -2, -2, -1, -1, 0, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 0, -1, -1,
                -1, -2, -2, -3, -3, -3, -3, -2, -2, -2, -2, -2, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1,
                1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 1, 1, 1,
                2, 2, 2, 2, 2, 1, 1, 1, 0, 0, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -2, -2,
                -2, -1, 0, 0, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 0, 0, 0, -1, -1, -2, -3, -2, -3, -3,
                -3, -2, -2, -2, -2, 0, -1, 0, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 0, 0, -1, -2, -2,
                -2, -2, -3, -3, -2, -2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1,
                0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, 1, 1, 1, 1, 1,
                2, 1, 1, 1, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -2, -2, -2, -1, -1, -1,
                0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, 0, -1, -1, -1, -2, -2, -2, -2, -3, -2,
                -2, -2, -2, -1, 0, -1, 0, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 0, -1, -1, -1, -2,
                -3, -2, -3, -3, -2, -2, -2, -2, -2, -1, 0, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 0,
                -1, 0, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2,
                1, 1, 1, 1, 1, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, 0,
                0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2, -2, -3, -2, -2, -2,
                -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, -1, -1, -2, -2,
                -2, -2, -2, -2, -2, -1, -1, -2, -1, -1, 0, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0,
                0, 0, -1, -1, -2, -1, -2, -3, -2, -2, -1, -2, -1, -2, -1, -1, 0, 0, 1, 1, 1, 1,
                2, 0, 1, 0, 1, 0, -1, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -1, -1, -1, 0,
                -1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, 0, -1, -1, -2, -1, -2, -2, -1,
                -2, -1, -1, -1, 0, -1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, -1, 0, -1, -1, -1,
                -2, -2, -2, -2, -2, -1, -2, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0,
                0, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
                1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
                0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -2, -1, -1, -2, -1,
                -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -2, -1,
                -2, -1, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
                -1, -1, -1, -1, -2, -2, -1, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -2, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -1,
                -2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, -1,
                -1, -2, -1, -2, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
                0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1,
                -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
                0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
                0, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0,
                0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
                0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
                0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
                -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1,
                0, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1,
                0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1,
                -1, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1,
                -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0,
                -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1,
                0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
                -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1,
                0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1,
                -1, 0, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1,
                -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1,
                0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, -1,
                0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 0, -1, -1, 0,
                0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, -1,
                0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, 0,
                -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1,
                0, -1, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, -1, 0, 0, -1, -1,
                -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1,
                -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1,
                0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,
                0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0,
                0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
                0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, 0,};

#endif /* BAMBOO_03_4096_H_ */
