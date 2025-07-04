// Included libraries
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

// declare the sorter namespace
namespace srt{
    // Create a class for the sorters
    class sorters{
        // Public functions
        public:
        void bubblesort(vector<int>);
        void mergesort(vector<int>);
        void quicksort(vector<int>);
        void cyclesort(vector<int>);
        void displayList(vector<int>);
    };
}