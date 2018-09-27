#include "Selectionsort.h"

std::vector<double> Selectionsort::selectionSort(std::vector<double> list){
  int lowest = 0;
  int temp = 0;
  for(int i = 0;i< list.size();i++){
    lowest = i;
    for(int j = i + 1;j < list.size();j++){
      if(list[j] < list[lowest]){
        lowest = j;
      }
    }
    temp = list[i];
    list[i] = list[lowest];
    list[lowest] = temp;
  }
  return list;
}
