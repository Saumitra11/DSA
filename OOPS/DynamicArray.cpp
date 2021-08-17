#include <bits/stdc++.h>

using namespace std;
class DynamicArray {
  private:
    int * data;
    int nextIndex = 0;
    int capacity;
  public:
    DynamicArray(){
      data = new int[5];
      capacity = 5;
      nextIndex = 0;
    }
    DynamicArray(DynamicArray const &d){
      this->nextIndex = d.nextIndex;
      this->capacity = d.capacity;
      // this->data = d.data;
      this->data = new int[d.capacity];
      for(int i = 0; i<d.nextIndex; i++){
        this->data[i] = d.data[i];
      }
    }
    DynamicArray(int c){
      data = new int[c];
      capacity = c;
      nextIndex = 0;
    }
  void addElement(int ele) {
    if (nextIndex == capacity) {
      int *newData = new int[capacity * 2];
      for (int i = 0; i < capacity; i++) {
        newData[i] = data[i];
      }
      delete[] data;
      data = newData;
      capacity *= 2;
    }
    data[nextIndex] = ele;
    nextIndex++;
  }
  int getElement(int index){
    if(index < nextIndex && index >= 0)
      return data[index];
    else
      return -1;
  }
  void addElementWithPos(int ele, int index){
   if(index < nextIndex){
     data[index] = ele;
   } else if(index == nextIndex){
      addElement(ele);
   } else {
     return;
   }
  }
  void operator=(DynamicArray const &d){
      this->nextIndex = d.nextIndex;
      this->capacity = d.capacity;
      // this->data = d.data;
      this->data = new int[d.capacity];
      for(int i = 0; i<d.nextIndex; i++){
        this->data[i] = d.data[i];
      }
  };
  const void print(){
    for(int i = 0; i<nextIndex; i++){
      cout << data[i] << " ";
    }
    cout << endl;
  }
  const int* getter(){
    return data;
  }
  const int getCapacity(){
    return capacity;
  }
};
