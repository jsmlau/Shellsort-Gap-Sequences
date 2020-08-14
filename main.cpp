/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2020-08-12
 *
 * @copyright Copyright (c) 2020
 *
 */
// #include <time.h>

#include <algorithm>
#include <chrono>
#include <iostream>

#include "Newvector.h"
#include "Shellsort.h"

#define ARRAY_SIZE 60001
#define GAP_ARRAY_SIZE 30

//====================== Declaration of Global Function =====================
float powerExponent(float base, float power);
int generateRandomNumber(const int &range);
void revereseArray(int arr[], int start, int end);
void printArray(int *array, const int arraySize);

//====================== Main =====================
int main() {
  int i, k, randNum, count = 0;

  Newvector<int> vectorInts;
  Newvector<int> vectorInts1;
  Newvector<int> vectorInts2;
  Newvector<int> vectorInts3;
  Newvector<int> vectorInts4;
  Newvector<int> vectorInts5;
  Newvector<int> vectorInts6;

  // Generate random numbers and fill the vectors to compare
  for (i = 0; i < ARRAY_SIZE; i++) {
    randNum = generateRandomNumber(ARRAY_SIZE * 2);
    vectorInts.push_back(randNum);
    vectorInts1.push_back(randNum);
    vectorInts2.push_back(randNum);
    vectorInts3.push_back(randNum);
    vectorInts4.push_back(randNum);
    vectorInts5.push_back(randNum);
    vectorInts6.push_back(randNum);
  }

  // Unsorted vector
  /*
   std::cout << "------------- Unsorted -------------" << std::endl;
   Newvector<int>::iterator iter;
   for (iter = vectorInts1.begin(); iter != vectorInts1.end(); iter++)
      std::cout << *iter << " ";
   std::cout << std::endl;
   */

  int *tempArray = new int[GAP_ARRAY_SIZE];

  // Shell Gap
  int shellArraySize = 0;
  for (k = 0; k < GAP_ARRAY_SIZE; k++) {
    tempArray[k] = ARRAY_SIZE / powerExponent(2, k);
    if (tempArray[k] > 0 && tempArray[k] < ARRAY_SIZE) {
      shellArraySize++;
    }
  }
  int shellArray[shellArraySize];
  for (i = shellArraySize; i >= 0;) {
    if (tempArray[i] < ARRAY_SIZE) {
      shellArray[count] = tempArray[i];
      count++;
    }
    i--;
  }

  printArray(shellArray, shellArraySize);
  std::cout << "\n";
  delete[] tempArray;

  //------------ tokudabard Gap Sequence -------------
  size_t tokudaGap[] = {
      1,         4,          9,          20,         46,          103,
      233,       525,        1182,       2660,       5985,        13467,
      30301,     68178,      153401,     345152,     776591,      1747331,
      3931496,   8845866,    19903198,   44782196,   100759940,   226709866,
      510097200, 1147718700, 2582367076, 5810325920, 13073233321, 29414774973};

  size_t tokudaGapSize = sizeof(tokudaGap) / sizeof(tokudaGap[0]);
  int tokudaArraySize = 0;
  for (k = 0; k < tokudaGapSize; k++) {
    if (tokudaGap[k] > 0 && tokudaGap[k] < ARRAY_SIZE) {
      tokudaArraySize++;
    }
  }
  // new gap array
  int tokudaArray[tokudaArraySize];
  for (i = 0; i < tokudaArraySize; i++) {
    tokudaArray[i] = tokudaGap[i];
  }
  printArray(tokudaArray, tokudaArraySize);
  std::cout << "\n";

  //------------ Sedgewick‘s A003462 Gap Sequence -------------
  size_t sed3462Gap[] = {0,
                         1,
                         4,
                         13,
                         40,
                         121,
                         364,
                         1093,
                         3280,
                         9841,
                         29524,
                         88573,
                         265720,
                         797161,
                         2391484,
                         7174453,
                         21523360,
                         64570081,
                         193710244,
                         581130733,
                         1743392200,
                         5230176601,
                         15690529804,
                         47071589413,
                         141214768240,
                         423644304721,
                         1270932914164};
  size_t sed3462GapSize = sizeof(sed3462Gap) / sizeof(sed3462Gap[0]);
  int sed3462ArraySize = 0;
  for (k = 0; k < sed3462GapSize; k++) {
    if (sed3462Gap[k] > 0 && sed3462Gap[k] < ARRAY_SIZE) {
      sed3462ArraySize++;
    }
  }
  // new gap array
  int sed3462Array[sed3462ArraySize];
  for (i = 0; i < sed3462ArraySize; i++) {
    sed3462Array[i] = sed3462Gap[i];
  }
  printArray(sed3462Array, sed3462ArraySize);
  std::cout << "\n";

  //------------ Sedgewick‘s A036562 Gap Sequence -------------
  size_t sed36562Gap[] = {1,
                          8,
                          23,
                          77,
                          281,
                          1073,
                          4193,
                          16577,
                          65921,
                          262913,
                          1050113,
                          4197377,
                          16783361,
                          67121153,
                          268460033,
                          1073790977,
                          4295065601,
                          17180065793,
                          68719869953,
                          274878693377,
                          1099513200641,
                          4398049656833,
                          17592192335873,
                          70368756760577};

  size_t sed36562GapSize = sizeof(sed36562Gap) / sizeof(sed36562Gap[0]);
  int sed36562ArraySize = 0;
  for (k = 0; k < sed36562GapSize; k++) {
    if (sed36562Gap[k] > 0 && sed36562Gap[k] < ARRAY_SIZE) {
      sed36562ArraySize++;
    }
  }
  // new gap array
  int sed36562Array[sed36562ArraySize];
  for (i = 0; i < sed36562ArraySize; i++) {
    sed36562Array[i] = sed36562Gap[i];
  }
  printArray(sed36562Array, sed36562ArraySize);
  std::cout << "\n";

  //------------ Sedgewick‘s A033622 Gap Sequence -------------
  size_t sed33622Gap[] = {
      1,         5,         19,        41,         109,        209,
      505,       929,       2161,      3905,       8929,       16001,
      36289,     64769,     146305,    260609,     587521,     1045505,
      2354689,   4188161,   9427969,   16764929,   37730305,   67084289,
      150958081, 268386305, 603906049, 1073643521, 2415771649, 4294770689};

  size_t sed33622GapSize = sizeof(sed33622Gap) / sizeof(sed33622Gap[0]);
  int sed33622ArraySize = 0;
  for (k = 0; k < sed33622GapSize; k++) {
    if (sed33622Gap[k] > 0 && sed33622Gap[k] < ARRAY_SIZE) {
      sed33622ArraySize++;
    }
  }
  // new gap array
  int sed33622Array[sed33622ArraySize];
  for (i = 0; i < sed33622ArraySize; i++) {
    sed33622Array[i] = sed33622Gap[i];
    std::cout << sed33622Array[i] << " ";
  }
  printArray(sed33622Array, sed33622ArraySize);
  std::cout << "\n";

  //------------ Marcin ciuraGap's Gap Sequence -------------
  size_t ciuraGap[] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};

  int ciuraSize = sizeof(ciuraGap) / sizeof(ciuraGap[0]);
  int ciuraArraySize = 0;
  for (k = 0; k < ciuraSize; k++) {
    if (ciuraGap[k] > 0 && ciuraGap[k] < ARRAY_SIZE) ciuraArraySize++;
  }

  // new gap array
  int ciuraArray[ciuraArraySize];
  for (i = 0; i < ciuraArraySize; i++) {
    if (ciuraGap[i] < ARRAY_SIZE) {
      ciuraArray[i] = ciuraGap[i];
    }
  }
  printArray(ciuraArray, ciuraArraySize);
  std::cout << "\n";

  //------------------------ Comparision Start
  std::cout << "ARRAY SIZE: " << ARRAY_SIZE << std::endl;

  auto startTime = std::chrono::high_resolution_clock::now();
  shellSort(vectorInts);
  auto finishTime = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = finishTime - startTime;
  std::cout << "\nImplied Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\nshellArray -------------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts1, shellArray, shellArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\nshellArray Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\nSed3462 -----------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts3, sed3462Array, sed36562ArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\nSed3462 Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\nSed36562 -----------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts4, sed36562Array, sed36562ArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\nSed3462 Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\nSed33622 -----------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts5, sed33622Array, sed36562ArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\nSed33622 Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\ntokudaArray -------------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts2, tokudaArray, tokudaArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\ntokudaArray Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  std::cout << "\nciuraArray -----------";
  startTime = std::chrono::high_resolution_clock::now();
  shellSortX(vectorInts6, ciuraArray, ciuraArraySize, ARRAY_SIZE);
  finishTime = std::chrono::high_resolution_clock::now();
  elapsed = finishTime - startTime;
  std::cout << "\nciuraArray Elapsed Time: " << elapsed.count() << "s"
            << std::endl;

  return 0;
}

// Power Exponent Function
float powerExponent(float base, float power) {
  int i;
  float result = 1;

  if (power < 0) {
    for (i = 0; i > power; i--) result /= base;
  } else {
    for (i = 0; i < power; i++) result *= base;
  }
  return result;
}

int generateRandomNumber(const int &range) {
  srand(time(NULL) + rand());
  return (rand() % range);
}

void printArray(int *array, const int arraySize) {
  for (int k = 0; k < arraySize; k++) {
    if (k != arraySize - 1)
      std::cout << array[k] << ", ";
    else
      std::cout << array[k];
  }
}