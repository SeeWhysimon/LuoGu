#include <stdio.h>

struct Country {
    int strength;
    int id;
};

struct Country compete(struct Country a, struct Country b, struct Country* loser) {
    if (a.strength > b.strength) {
        *loser = b; 
        return a;   
    } else {
        *loser = a;
        return b;
    }
}

struct Country tournament(struct Country* countries, int length, struct Country* runnerUp) {
    if (length == 2) {
        return compete(countries[0], countries[1], runnerUp);
    }

    int half = length / 2;
    struct Country losers1[half];
    struct Country losers2[half];
    
    struct Country winner1 = tournament(countries, half, &losers1[0]);
    struct Country winner2 = tournament(countries + half, half, &losers2[0]);

    struct Country finalLoser;
    struct Country champion = compete(winner1, winner2, &finalLoser);
    *runnerUp = finalLoser;

    return champion;
}

int main() {
    int n;
    scanf("%d", &n);

    int countryCount = 1 << n;
    struct Country countries[countryCount];

    for (int i = 0; i < countryCount; i++) {
        scanf("%d", &countries[i].strength);
        countries[i].id = i + 1;
    }

    struct Country runnerUp;
    tournament(countries, countryCount, &runnerUp);

    printf("%d\n", runnerUp.id);

    return 0;
}
