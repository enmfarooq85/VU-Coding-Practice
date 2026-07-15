#include <iostream>
using namespace std;

// ==========================
// Standard Template Library (STL)
// ==========================

// STL has three major components:

// 1. Containers
// 2. Iterators
// 3. Algorithms

// STL provides pre-built and well-tested data structures
// and algorithms, so we don't have to implement everything
// from scratch. This:

// - Reduces development time.
// - Makes code more reliable.
// - Improves readability and maintainability.

// ==========================
// STL Containers
// ==========================

// Containers are used to store data.
//
// They are mainly divided into:

// 1. Sequence Containers
// 2. Associative Containers
// 3. Container Adapters

// ------------------------------------------------------------------
// 1. Sequence Containers
// ------------------------------------------------------------------

// Store elements in a linear order.
//
// Examples:
// - vector
// - deque
// - list

// Vector:
// - Dynamic array.
// - Fast random access.
// - Efficient insertion and deletion at the end only.

// Deque (Double-Ended Queue):
// - Allows insertion and deletion from both front and back.
// - Provides fast random access.

// List:
// - Doubly linked list.
// - Efficient insertion and deletion anywhere.
// - Does not provide fast random access.

// ------------------------------------------------------------------
// 2. Associative Containers
// ------------------------------------------------------------------

// Store elements in a sorted manner (usually implemented using trees).

// Examples:
// - set
// - map
// - multiset
// - multimap

// Features:
// - Fast searching.
// - Automatically maintains sorted order.

// ------------------------------------------------------------------
// First-Class Containers
// ------------------------------------------------------------------

// Sequence containers and associative containers are called
// first-class containers because they directly store data.

// ------------------------------------------------------------------
// 3. Container Adapters
// ------------------------------------------------------------------

// Container adapters are restricted versions of existing containers.
// They provide only specific operations.

// Examples:
// - stack      (LIFO)
// - queue      (FIFO)
// - priority_queue (Highest priority element comes first)

// Note:
// There is NO "priority deque" in STL.

int main()
{
    return 0;
}