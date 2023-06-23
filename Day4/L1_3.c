#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    
    int startTimeSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    
    int diffSeconds = (startTimeSeconds > endTimeSeconds) ? (startTimeSeconds - endTimeSeconds) : (endTimeSeconds - startTimeSeconds);
    
    diff.hours = diffSeconds / 3600;
    diff.minutes = (diffSeconds % 3600) / 60;
    diff.seconds = (diffSeconds % 3600) % 60;
    
    return diff;
}

int main() {
    struct Time startTime, endTime, diffTime;
    
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    diffTime = calculateTimeDifference(startTime, endTime);
    
    printf("\nTime difference: %02d:%02d:%02d\n", diffTime.hours, diffTime.minutes, diffTime.seconds);
    
    return 0;
}

