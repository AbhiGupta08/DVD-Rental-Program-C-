#include <iostream>
#include "DVD.h"

using namespace std;

DVD::DVD(
        string newTitle,
        string newDirector,
        string newReleaseDate,
        string newRating,
        int newRuntime,
        string newGenre,
        bool newInStockStatus,
        int newNumHolds,
        int newDaysOverdue) :
        title(newTitle),
        director(newDirector),
        releaseDate(newReleaseDate), rating(newRating),
        runtime(newRuntime), genre(newGenre),
        inStockStatus(newInStockStatus),
        numHolds(newNumHolds),
        daysOverdue(newDaysOverdue) {
}

double DVD::calculateFines() {
    return daysOverdue * 1.50;
}

// Print function
void DVD::print() {
    cout << "Title: " << title << endl;
    cout << "Director: " << director << endl;
    cout << "Release date: " << releaseDate << endl;
    cout << "Rating: " << rating << endl;
    cout << "Runtime: " << runtime << endl;
    cout << "Genre: " << genre << endl;

    string currentStockStatus;
    if (inStockStatus == 1)
        currentStockStatus = "Yes";
    else
        currentStockStatus = "No";

    cout << "In stock: " << currentStockStatus << endl;
    cout << "The DVD has " << numHolds << " holds placed on it" << endl;
    cout << "The DVD is currently " << daysOverdue << " days past its due date" << endl;
}