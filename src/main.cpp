// Sorting Algorithms
// Kamil Chwedura 04.05.25

// Include our header file for the sorters
#include "sorters.h"

using namespace std;
// srt is the namespace given to the sorters header
using namespace srt;

// Setup a test vector
// Sorted should be 2, 4, 9, 20, 55, 56, 104
vector<int> unsortedList = {56, 9, 20, 4, 55, 104, 2, 5, 8, 123, 900, 65, 26, 77, 1, 89, 42, 3, 100, 21};

void main(){
    // Create an instance of the sorters class
    sorters srt;

    cout << "Sorting Algorithms Demonstration" << endl;
    
    // Display the unsorted vector
    cout << "Unsorted List: ";
    srt.displayList(unsortedList);
    
    // Start the bubble sort algorithm
    srt.bubblesort(unsortedList);
}