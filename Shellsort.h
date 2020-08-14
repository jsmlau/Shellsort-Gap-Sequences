/**
 * @file Shellsort.h
 * @author your name (you@domain.com)
 * @brief Template definitions for shell sort.
 * @version 0.1
 * @date 2019-11-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHELLSORT_H
#define SHELLSORT_H

#include "Newvector.h"

template <typename T>
void shellSort(Newvector<T>& a) {
  /**
   * @brief Using Shell's original outer loop and implied gap sequence.
   * @param vector
   */
  int k, pos, arraySize, gap;
  T tmp;

  arraySize = a.size();
  for (gap = arraySize / 2; gap > 0; gap /= 2)  // outer gap loop
    // middle loop (outer of "insertion-sort")
    for (pos = gap; pos < arraySize; pos++) {
      tmp = a[pos];
      for (k = pos; k >= gap && tmp < a[k - gap]; k -= gap)  // inner loop
        a[k] = a[k - gap];
      a[k] = tmp;
    }
}

template <typename T>
void shellSortX(Newvector<T>& workingArray, T gapArray[], int gapArraySize,
                int arraySize) {
  /**
   * @brief shellSort function.
   * @param workingArray
   * @param gapArray
   * @param gapArraySize
   * @param arraySize
   */
  int i, k, pos, gap;
  int workingArraySize = workingArray.size();
  T tmp;

  for (i = gapArraySize - 1; i >= 0; i--) {
    if (gapArray[i] > 0 && gapArray[i] < arraySize) {
      gap = gapArray[i];
      for (pos = gap; pos < workingArraySize; pos++) {
        tmp = workingArray[pos];
        for (k = pos; k >= gap && tmp < workingArray[k - gap]; k -= gap)
          workingArray[k] = workingArray[k - gap];
        workingArray[k] = tmp;
      }
    }
  }
}
#endif