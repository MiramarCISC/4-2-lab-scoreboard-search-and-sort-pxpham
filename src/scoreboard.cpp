#include "scoreboard.hpp"
#include <iostream>

using namespace std;

int calculateTotal(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the sum of all scores.
    if ((scores == NULL) || (size <= 0)) return 0;
    int sum = 0;
    for (int i =0; i < size; i++){
        sum += scores[i];
    }
    return sum;
}

double calculateAverage(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.0.
    // Otherwise, return the total divided by size.
    if ((scores == NULL) || (size <= 0)) return 0;
    int sum = 0;
    for (int i =0; i < size; i++){
        sum += scores[i];
    }
    return (double)sum/size;
}

int findLowest(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the smallest score.
    if ((scores == NULL) || (size <= 0)) return 0;
    int smallest = scores[0];
    for (int i =1; i < size; i++){
        if (scores[i] < smallest){smallest = scores[i];}
    }
    return smallest;
}

int findHighest(const int scores[], int size) {
    // TODO:
    // If the array is null or the size is invalid, return 0.
    // Otherwise, return the largest score.
    if ((scores == NULL) || (size <= 0)) return 0;
    int largest = scores[0];
    for (int i =1; i < size; i++){
        if (scores[i] > largest){largest = scores[i];}
    }
    return largest;
}

int findScore(const int scores[], int size, int target) {
    // TODO:
    // Search the array from left to right.
    // Return the index where target is found.
    // Return -1 when target is not found.
    for (int i =0; i < size; i++){
        if (scores[i] == target){return i;}
    }
    return -1;
}

void sortScores(int scores[], int size) {
    // TODO:
    // Sort the array from lowest to highest.
    // A selection sort works well for this lab.
    for (int i = 0; i < size; i++){
        int min_index = i;
        for (int j = i+1; j < size; j++){
            if (scores[min_index] > scores[j]) min_index = j;
        }
        swap(scores[i], scores[min_index]);
    }
}

void printScores(const int scores[], int size) {
    if (scores == nullptr || !isValidSize(size)) {
        cout << "No scores to print." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        cout << scores[i];

        if (i < size - 1) {
            cout << " ";
        }
    }

    cout << endl;
}

bool isValidSize(int size) {
    // TODO: Return true when size is greater than 0.
    return size > 0;
}
