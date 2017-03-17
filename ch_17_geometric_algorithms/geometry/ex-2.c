
#include <stdio.h>
#include "geodist.h"

int main(int argc, char **argv)
{
    double lat1,
            lon1,
            lat2,
            lon2,
            distance;
    fprintf(stdout, "Computing distances between points on Earth\n");
    lat1 = 37.62;
    lon1 = 122.38;
    lat2 = 33.94;
    lon2 = 118.41;
    if (geodist(lat1, lon1, lat2, lon2, &distance) != 0) {
        return 1;
    }
    fprintf(stdout, "SFO: (%+07.2lf,%+07.2lf)\n", lat1, lon1);
    fprintf(stdout, "LAX: (%+07.2lf,%+07.2lf)\n", lat2, lon2);
    fprintf(stdout, "distance=%d\n", (int) distance);
    lat1 = 49.01;
    lon1 = -2.55;
    lat2 = -31.94;
    lon2 = -115.97;
    if (geodist(lat1, lon1, lat2, lon2, &distance) != 0) {
        return 1;
    }
    fprintf(stdout, "CDG: (%+07.2lf,%+07.2lf)\n", lat1, lon1);
    fprintf(stdout, "PER: (%+07.2lf,%+07.2lf)\n", lat2, lon2);
    fprintf(stdout, "distance=%d\n", (int) distance);
    return 0;
}
