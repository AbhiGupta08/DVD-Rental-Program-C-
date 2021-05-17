#ifndef DVD_H
#define DVD_H
#include <string>

using namespace std;

class DVD {
private:
    string title;
    string director;
    string releaseDate;
    string rating;
    int runtime;
    string genre;

public:
    bool inStockStatus; // Whether the movie is in stock (true = 1 = yes, false = 0 = no)
    int numHolds; // How many customers have placed a hold on the DVD
    int daysOverdue;

    DVD(
            string newTitle,
            string newDirector,
            string newReleaseDate,
            string newRating,
            int newRuntime,
            string newGenre,
            bool newInStockStatus,
            int newNumHolds,
            int newDaysOverdue
    );

    // Determine the late fees on a movie that is checked out
    double calculateFines();

    // Print function
    void print();
};
#endif //DVD_H