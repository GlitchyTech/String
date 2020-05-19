//
// Created by Vasiliy Evdokimov on 18.05.2020.
//

#pragma once

#include <iostream>
#include "ISequence.hpp"
#include "DynamicArray.hpp"

template<typename T>
class ArraySequence : public ISequence<T>{
public:

    // **** Constructor ****

    ArraySequence();
    explicit ArraySequence(size_t);
    ArraySequence(T *, size_t);

    // ** Copy Constructor **

    ArraySequence(ArraySequence<T> const &);


    // **** Destructor ****

    ~ArraySequence();


    // **** Operators ****

    ArraySequence<T> * operator+(ISequence<T>);
    ArraySequence<T> & operator=(ArraySequence<T> const  &);
    T operator[](size_t) const;
    T & operator[](size_t);


    // **** Getters ****

    DynamicArray<T> GetArray() const;
    DynamicArray<T> & GetArray();
    T GetFirst() const;
    T & GetFirst();
    T GetLast() const;
    T & GetLast();
    T GetElementData(size_t) const;
    T & GetElementData(size_t);
    size_t GetSize() const;
    size_t GetCapacity() const;
    ArraySequence<T> * GetSubSequence(size_t, size_t) const;


    // **** Setters ****

    void Resize(size_t);
    void SetSize(size_t);
    void SetCapacity(size_t);
    void SetData(T *);
    void SetElement(size_t, T);


    // **** Modifiers ****

    void Prepend(T);
    void InsertAt(size_t, T);
    void Append(T);
    void PopFirst();
    void EraseAt(size_t);
    void PopBack();
    ArraySequence<T> * Concatenation(ISequence<T> *);


    // **** Utils ****

    //


private:
    DynamicArray<T> *array_;
};


#include "ArraySequenceImplementation.hpp"