#pragma once

#include <iostream>
using namespace std;

template <typename T>
class List {
public:
    List(int maxSize = 1024);

    ~List();

    List(const List& origList);

    const List& operator=(const List& rightHandSide);

    bool empty() const;

    void insert(T item, int pos);

    void erase(int pos);

    void display(ostream& out) const;

    void push_back(T item);

private:
    int mySize;
    int myCapacity;
    T* myArray;
};

template <typename T>
ostream& operator<<(ostream& out, const List<T>& aList);
