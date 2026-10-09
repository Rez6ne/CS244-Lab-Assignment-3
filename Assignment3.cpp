
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string songs[11] = {
        "We Found Love",
        "Old Town Road",
        "Somebody That I Used To Know",
        "Despacito",
        "Rolling In The Deep",
        "Without Me",
        "Call Me Maybe",
        "Perfect",
        "Blurred Lines",
        "I Like It",
        "Just The Way You Are"
    };

    int songsReleaseYear[] = {
        2011, 2020, 2012, 2017, 2011, 2019,
        2012, 2013, 2017, 2018, 2010
    };

    int newest = 0;
    int oldest = 0;

    // Find the newest and oldest songs
    for (int i = 1; i < 11; i++)
    {
        if (songsReleaseYear[i] > songsReleaseYear[newest])
        {
            newest = i;
        }

        if (songsReleaseYear[i] < songsReleaseYear[oldest])
        {
            oldest = i;
        }
    }

    // Choose a random song
    srand(time(0));
    int randomSong = rand() % 11;

    // Display the results
    cout << "Newest Song in the List: "
         << songs[newest] << endl;

    cout << "Oldest Song in the List: "
         << songs[oldest] << endl;

    cout << "Random Song recommendation: "
         << songs[randomSong] << endl;

    return 0;
}
