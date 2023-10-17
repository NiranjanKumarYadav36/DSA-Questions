/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 7
*/


#include <stdio.h>

// Define the time_struct structure
struct time_struct {
    int hour;
    int minute;
    int second;
};

// Function to input new time
void inputTime(struct time_struct *time) {
    printf("Enter time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time->hour, &time->minute, &time->second);
}

// Function to display the time
void displayTime(struct time_struct time) {
    printf("Time: %02d:%02d:%02d\n", time.hour, time.minute, time.second);
}

// Function to update the time by one second
void updateTime(struct time_struct *time) {
    time->second++;

    if (time->second == 60) {
        time->second = 0;
        time->minute++;
        if (time->minute == 60) {
            time->minute = 0;
            time->hour++;
            if (time->hour == 24) {
                time->hour = 0;
            }
        }
    }
}

int main() {
    struct time_struct current_time;

    inputTime(&current_time);
    displayTime(current_time);

    // Update the time by one second
    updateTime(&current_time);
    displayTime(current_time);

    return 0;
}
