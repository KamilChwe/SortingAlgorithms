// Sorting Algorithms
// Kamil Chwedura 04.05.25

// Include our header file for the sorters
#include "sorters.h"

using namespace std;
// srt is the namespace given to the sorters header
using namespace srt;

// Setup a test vector
// Sorted should be 1, 2, 3, 4, 5, 8, 9, 20, 21, 26, 42, 55, 56, 65, 77, 89, 100, 104, 123, 900
vector<int> unsortedList = {56, 9, 20, 4, 55, 104, 2, 5, 8, 123, 900, 65, 26, 77, 1, 89, 42, 3, 100, 21};
vector<int> randomUnsortedList;


void main(){

    // Generate a random vector filled with 1000 random numbers from 1-100
    

    // Create an instance of the sorters class
    sorters srt;

    cout << "Sorting Algorithms Demonstration" << endl;
    
    // Display the unsorted vector
    cout << "Unsorted List: ";
    srt.displayList(unsortedList);
    
    // Start the bubble sort algorithm
    srt.bubblesort(unsortedList);
}

