#pragma once
#include <iterator>

namespace L4F
{
namespace NUMIT
{

template <class T>
class iterator
{
  public:
    typedef iterator<T> self_type;
    typedef const T value_type;
    typedef int difference_type;

    iterator(T pos, int inc)
    {
        position = pos;
        increment = inc;
    }
    value_type operator++()
    {
        T i = position;
        position += increment;
        return i;
    }
    value_type operator++(int utter_garbage)
    {
        position += increment;
        return position;
    }
    value_type operator*()
    {
        return position;
    }
    bool operator==(const self_type &rhs)
    {
        if (rhs.position == position)
        {
            return true;
        }
        return false;
    }
    bool operator!=(const self_type &rhs)
    {
        if (rhs.position == position)
        {
            return false;
        }
        return true;
    }
    T position;
    int increment;
};
} // namespace NUMIT

template <class T>
class range_iterator
{
  public:
    typedef NUMIT::iterator<T> iterator_type;

    range_iterator(T _start, T _end, T _increment = 0)
    {
        range_start = _start;
        range_end = _end;
        increment = _increment;
    }

    iterator_type begin()
    {
        return iterator_type(range_start, increment);
    }
    iterator_type end()
    {
        return iterator_type(range_end, increment);
    }

  private:
    T range_start;
    T range_end;
    T increment;
};
} // namespace kstd
