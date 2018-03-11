#ifndef BAMBOO_04_4096_H_
#define BAMBOO_04_4096_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

#define BAMBOO_04_4096_NUM_CELLS 4096
#define BAMBOO_04_4096_SAMPLERATE 16384

CONSTTABLE_STORAGE(int8_t) BAMBOO_04_4096_DATA []  = {0, -1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0,
                -1, 0, 0, 0, 1, 0, 0, -2, -16, -51, -92, -93, -39, 8, 39, 93, 126, 77, 12, -1,
                11, 11, 8, -7, -63, -89, -66, -37, -2, 9, -11, -26, 2, 46, 29, -2, 12, 16, 14,
                58, 88, 36, -12, -9, -36, -60, -25, 14, 8, 3, 0, -37, -48, -30, -32, -23, -1,
                12, 8, 16, 38, 27, 11, 26, 28, 9, 17, 35, 15, -14, -14, -4, -5, -2, -2, -29,
                -53, -50, -38, -18, 4, 21, 13, 2, 1, -7, -3, 20, 34, 30, 35, 42, 30, 11, 0, -16,
                -32, -23, -4, -2, -6, -21, -45, -53, -28, 7, 12, 5, -2, -16, -8, 12, 17, 19, 35,
                45, 38, 30, 17, -14, -30, -19, -6, -5, -2, -6, -20, -30, -30, -34, -36, -18, 6,
                18, 22, 11, -4, 3, 24, 34, 30, 23, 11, 3, 10, 16, 5, -13, -22, -19, -17, -19,
                -27, -39, -39, -19, 3, 16, 16, 3, -6, -4, 8, 19, 24, 31, 33, 31, 21, 11, -3,
                -16, -20, -16, -12, -11, -11, -15, -19, -19, -23, -22, -12, 0, 6, 9, 7, 5, 10,
                18, 22, 23, 22, 16, 8, 8, 9, 2, -7, -14, -18, -24, -23, -19, -21, -21, -16, -10,
                -7, 0, 9, 13, 15, 17, 16, 16, 15, 13, 7, 6, 9, 11, 8, 4, -5, -18, -29, -30, -24,
                -14, -6, -7, -7, -5, -6, -7, -3, 1, 10, 21, 29, 30, 26, 15, 7, 5, 5, -1, -9,
                -10, -12, -14, -14, -16, -18, -16, -11, -9, -12, -13, -12, -1, 13, 24, 23, 17,
                15, 14, 12, 9, 6, 1, 3, 6, 4, -5, -14, -22, -26, -23, -15, -7, -5, -5, -6, -6,
                -1, 3, 9, 13, 17, 22, 21, 17, 11, 5, 3, 0, -1, -2, -6, -12, -17, -20, -20, -16,
                -10, -5, -4, -2, -6, -8, -2, 5, 10, 16, 21, 21, 18, 13, 7, 0, -2, -1, 0, -4, -7,
                -11, -12, -15, -21, -19, -15, -11, -7, -1, 0, 1, 8, 14, 17, 16, 15, 9, 6, 8, 7,
                2, -1, -2, -5, -6, -8, -13, -18, -18, -14, -9, -3, -3, -6, -4, 1, 5, 7, 9, 10,
                13, 17, 20, 17, 7, 1, 0, -2, -4, -8, -10, -10, -10, -10, -12, -14, -16, -12, -4,
                1, 2, 4, 8, 11, 15, 15, 14, 12, 9, 8, 8, 4, -2, -8, -9, -9, -10, -11, -12, -13,
                -14, -11, -10, -8, -1, 3, 6, 9, 11, 10, 9, 10, 11, 9, 9, 9, 6, 2, -2, -7, -12,
                -13, -15, -16, -13, -11, -10, -9, -5, -1, 1, 6, 7, 8, 9, 10, 11, 11, 11, 9, 6,
                3, -1, -4, -6, -8, -10, -9, -8, -8, -9, -11, -13, -11, -8, -2, 2, 6, 9, 13, 13,
                10, 11, 9, 6, 6, 6, 2, -2, -6, -7, -9, -11, -11, -12, -11, -9, -7, -5, -4, -1,
                2, 6, 10, 10, 8, 9, 9, 6, 7, 7, 4, 1, 1, -2, -4, -7, -10, -12, -12, -11, -9, -9,
                -5, -2, 0, 2, 3, 4, 6, 7, 8, 9, 9, 8, 7, 5, 2, -1, -2, -6, -8, -8, -8, -10, -10,
                -10, -8, -6, -4, -2, -1, 1, 5, 7, 9, 9, 9, 9, 8, 7, 4, 0, -2, -3, -5, -4, -6,
                -8, -10, -12, -12, -8, -6, -3, 0, 2, 3, 4, 5, 5, 7, 9, 9, 8, 6, 6, 2, -1, -2,
                -4, -6, -7, -8, -9, -10, -11, -9, -8, -4, -1, 2, 4, 5, 7, 7, 7, 6, 6, 6, 5, 5,
                2, 0, -2, -4, -6, -6, -6, -9, -9, -8, -7, -6, -4, -2, 1, 4, 4, 5, 5, 6, 6, 6, 6,
                6, 5, 4, 0, -2, -5, -5, -6, -7, -8, -9, -9, -7, -6, -5, -3, 0, 2, 4, 6, 6, 6, 6,
                7, 7, 6, 4, 2, 0, 0, -2, -5, -6, -8, -8, -7, -7, -7, -6, -4, -3, -1, 0, 3, 4, 6,
                8, 9, 7, 6, 4, 4, 2, 0, -1, -3, -5, -5, -6, -7, -9, -9, -6, -5, -4, -3, -1, 0,
                2, 4, 5, 4, 6, 7, 8, 7, 4, 2, 1, 0, -1, -4, -5, -7, -9, -9, -8, -7, -8, -5, -2,
                -1, 1, 3, 4, 5, 6, 8, 8, 7, 6, 4, 3, 1, 0, -3, -4, -6, -7, -8, -9, -9, -9, -6,
                -3, -1, 0, 1, 2, 3, 5, 7, 7, 6, 7, 7, 5, 3, 1, -2, -2, -4, -5, -5, -6, -8, -8,
                -8, -7, -5, -4, 0, 0, 2, 3, 5, 6, 6, 6, 5, 4, 5, 5, 3, 0, -2, -4, -5, -5, -7,
                -7, -8, -8, -7, -4, -4, -2, 0, 2, 3, 5, 6, 6, 6, 5, 6, 6, 4, 3, 1, -1, -4, -6,
                -8, -7, -6, -7, -8, -7, -6, -4, -2, 0, 1, 3, 4, 6, 7, 7, 6, 6, 4, 4, 3, 1, -1,
                -4, -5, -6, -6, -7, -7, -7, -7, -6, -4, -3, 0, 2, 3, 5, 6, 6, 6, 6, 6, 5, 4, 3,
                1, -1, -3, -4, -6, -7, -7, -7, -6, -6, -5, -4, -3, 0, 0, 3, 3, 4, 6, 6, 6, 5, 4,
                3, 2, 1, 0, -2, -4, -5, -6, -7, -7, -6, -5, -6, -5, -3, -1, 0, 2, 3, 3, 5, 6, 6,
                6, 5, 4, 3, 1, 0, -3, -4, -5, -5, -6, -6, -6, -6, -4, -4, -4, -2, 0, 1, 3, 4, 4,
                5, 5, 6, 6, 5, 4, 1, -1, -1, -3, -4, -5, -6, -6, -6, -6, -6, -5, -3, -3, 0, 1,
                3, 3, 5, 4, 5, 5, 5, 5, 3, 2, 0, 0, -2, -3, -4, -6, -6, -7, -6, -6, -5, -4, -3,
                -1, 1, 2, 3, 3, 4, 5, 5, 5, 4, 3, 2, 1, 0, -3, -3, -4, -4, -5, -5, -6, -6, -5,
                -4, -3, -1, 0, 1, 2, 3, 5, 4, 4, 5, 4, 4, 3, 2, 0, -2, -3, -3, -4, -5, -6, -6,
                -5, -4, -3, -3, -3, -1, 1, 2, 3, 3, 4, 4, 5, 5, 4, 2, 1, 0, 0, -2, -3, -5, -6,
                -5, -5, -4, -3, -3, -3, -3, 0, 0, 2, 2, 3, 5, 4, 4, 4, 3, 2, 2, 0, -2, -2, -3,
                -4, -4, -6, -5, -5, -5, -3, -3, -2, -1, 0, 1, 2, 3, 3, 5, 5, 4, 3, 2, 1, 0, -1,
                -1, -3, -4, -5, -5, -5, -5, -5, -4, -2, -1, 0, 0, 1, 2, 2, 4, 4, 4, 3, 2, 2, 2,
                0, 0, -3, -3, -4, -4, -4, -5, -5, -5, -3, -2, -1, -1, 0, 0, 2, 3, 4, 4, 4, 3, 3,
                2, 2, 0, 0, -1, -2, -3, -3, -4, -5, -5, -4, -4, -3, -2, 0, 1, 1, 1, 2, 2, 3, 4,
                4, 3, 2, 2, 0, 0, -1, -2, -3, -4, -4, -5, -4, -4, -4, -3, -2, -1, 0, 1, 2, 1, 2,
                3, 4, 3, 3, 2, 1, 1, 0, -1, -3, -3, -3, -4, -3, -5, -4, -3, -3, -2, -1, -1, 1,
                2, 2, 3, 3, 3, 3, 3, 2, 2, 0, -1, 0, -2, -2, -3, -3, -4, -3, -4, -3, -3, -2, -2,
                -1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 1, -1, -1, -1, -3, -3, -3, -4, -3, -3, -3, -3,
                -3, -1, -1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, -2, -2, -3, -3, -3, -4, -4,
                -3, -2, -2, -1, -1, 0, 0, 2, 2, 3, 2, 2, 3, 2, 2, 1, 0, -1, -2, -2, -2, -2, -3,
                -4, -4, -3, -2, -2, -1, -1, -1, 0, 1, 2, 3, 2, 1, 1, 1, 1, 1, 1, -1, -1, -2, -2,
                -3, -3, -3, -2, -3, -2, -2, -2, 0, -1, 0, 1, 1, 3, 2, 1, 2, 2, 1, 1, 1, -1, 0,
                -2, -2, -2, -3, -4, -4, -3, -2, -2, -2, -1, 0, 0, 0, 1, 1, 2, 3, 2, 2, 1, 1, 1,
                1, 0, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -1, 0, -1, 0, 1, 1, 3, 2, 3, 1, 1,
                1, 1, 0, -1, -1, -2, -2, -3, -3, -3, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1,
                2, 2, 1, 2, 1, 0, 0, -1, -2, -2, -3, -2, -3, -3, -2, -3, -2, -2, -1, -1, 0, 1,
                1, 2, 1, 2, 2, 2, 1, 1, 0, -1, -1, -2, -2, -3, -3, -3, -3, -2, -2, -2, -2, -2,
                0, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -2, -2,
                -2, -1, -1, 1, 0, 1, 2, 2, 2, 1, 2, 1, 1, 1, 0, -1, -1, -1, -2, -2, -3, -2, -2,
                -2, -2, -2, -1, 0, -1, 0, 1, 2, 1, 2, 1, 1, 1, 0, 1, 0, 0, -1, -2, -2, -2, -3,
                -3, -2, -2, -2, -2, -1, -1, 0, -1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 0, -1, -2, -2, -2,
                -2, -2, -3, -3, -3, -2, -2, -1, 0, -1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, -1,
                -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1,
                0, -1, -1, -2, -2, -2, -2, -2, -3, -2, -2, -1, -1, 0, -1, 0, 1, 1, 2, 2, 1, 1,
                1, 1, 1, 0, 0, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 1, 1,
                2, 1, 1, 1, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0, 0, 0, 0, 1,
                1, 1, 1, 2, 1, 1, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, 0,
                -1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -1, -2, -2, -2, -3, -2, -2, -2, -1, -2,
                0, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, -1, 0, 0, -2, -2, -2, -2, -2, -2, -2,
                -2, -1, -1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2,
                -2, -3, -2, -1, -1, 0, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2,
                -2, -2, -2, -2, -2, -2, -1, -1, 0, -1, 0, 1, 1, 1, 2, 1, 1, 0, 1, 0, 0, -1, -1,
                -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0,
                -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 1, 1, 1, 0,
                0, 0, -1, 0, -1, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1,
                1, 1, 1, 1, 0, 0, 0, -1, -2, -1, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 1,
                1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, 0, -2, -1, -2, -2, -1, -2, -1, -1, -1, -1, 0,
                0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -2, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -2, -1,
                -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
                0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0,
                -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
                -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
                0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1,
                -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1,
                -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0,
                0, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
                0, -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
                -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
                0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
                -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0,
                -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1,
                0, -1, 0, -1, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1,
                -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
                -1, -1, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, 0, -1, 0,
                0, 0, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1,
                -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0,
                -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 0, -1, -1, 0,
                -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1,
                -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, -1, -1,
                -1, 0, -1, -1, -1, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0, -1,
                0, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1,
                -1, 0, -1, 0, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
                0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1,
                0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0,
                0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0,
                -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1,
                -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, -1, -1, -1,
                -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0,
                -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0,
                -1, 0, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0,
                0, -1, 0, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0,
                -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0,
                0, 0, 0, 0, -1, 0, 0, -1, 0, -1, -1, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0,
                -1, 0, -1, -1, 0, 0, -1, -1, 0, -1, 0, 0, -1, -1, -1, 0, 0, -1, 0, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, 0, -1, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, 0, -1, -1, -1, 0, 0, -1, 0,
                -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1,
                0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, 0,
                -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0,
                -1, -1, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1,
                0, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1,
                -1, 0, 0, -1, -1, 0, -1, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1,
                -1, 0, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0,
                0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, -1, 0, -1, 0, 0, -1, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0,
                0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0,
                -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0,
                -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1,
                0, -1, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0,
                -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,
                0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, -1,
                0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0,
                0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
                -1, 0, -1, -1, 0, -1, 0, -1, 0, -1, 0,};

#endif /* BAMBOO_04_4096_H_ */
