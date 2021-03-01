#include "counted.h"
#include <iostream>
using namespace std;

Counted::Counted() {
    this->id = uniq;
    uniq++;
}
Counted::~Counted() {
    cout << "delete this id" << endl;
}
