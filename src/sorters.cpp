#include "sorters.h"

// SRT is the namespace used in the 
using namespace srt;

// Utilising the headers define bubblesort function
void sorters::bubblesort(vector<int> unsortedVector)
{
    // A boolean to store if there are any swapped happening
    bool swapped;
    // The size of the vector provided
    int listLength = unsortedVector.size();

    // Display the start of the algorithm
    cout << "Bubble Sort - Started" << endl;

    // Save the time of the start of algorithm
    auto timeStart = chrono::high_resolution_clock::now();

    // Go through the list (minus one)
    for(int i = 0; i < listLength - 1; i++){
        // Set the swaps to false
        // So that it is set for when no swaps occur at the end
        swapped = false;
        // Go through the length of the list excluding what we already went through
        for(int j = 0; j < listLength - i - 1; j++){
            // If the current value is bigger than the next value
            if(unsortedVector[j] > unsortedVector[j+1]){
                // Swap the values in the vector
                swap(unsortedVector[j], unsortedVector[j+1]);
                // Set the swapped boolean to true as we just swapped values
                swapped = true;
            }
        }
        // If there are no more swaps this flag will be false and the algorithm is finished
        if(!swapped){
            break;
        }
    }

    // Save the time of the end of algorithm
    auto timeEnd = chrono::high_resolution_clock::now();
    // Save the elapsed time in milliseconds
    auto totalTime = chrono::duration_cast<chrono::milliseconds>(timeEnd - timeStart);
    
    // Display the sorted vector listed
    displayList(unsortedVector);

    // Display the end of the algorithm and the time taken
    cout << "Bubble Sort - Finished in " << totalTime.count() << "ms" << endl;
}

void sorters::displayList(vector<int> Vector){
    cout << "Sorted List: " << endl;
    for(int i = 0; i < Vector.size(); i++){
        if(i != Vector.size() - 1){
            cout << Vector[i] << ", ";
        }
        else{
            cout << Vector[i] << endl;
        }
    }
}