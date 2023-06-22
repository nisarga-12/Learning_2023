#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time t1, struct Time t2);

int main() {
    struct Time startTime, endTime, diffTime;
    
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    diffTime = getTimeDifference(startTime, endTime);
    
    printf("The difference is: %02d:%02d:%02d\n", diffTime.hours, diffTime.minutes, diffTime.seconds);
    
    return 0;
}

struct Time getTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int secondsDiff;
    
    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    if (t2Seconds >= t1Seconds) {
        secondsDiff = t2Seconds - t1Seconds;
    } else {
        secondsDiff = t2Seconds + (24 * 3600) - t1Seconds;
    }
    
    diff.hours = secondsDiff / 3600;
    secondsDiff %= 3600;
    diff.minutes = secondsDiff / 60;
    diff.seconds = secondsDiff % 60;
    
    return diff;
}
