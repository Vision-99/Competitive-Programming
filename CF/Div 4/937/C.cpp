#include <bits/stdc++.h>

using namespace std;

string convert_to_12hr(string time_str) {
    int hour, minute;
    char colon;
    stringstream ss(time_str);
    ss >> hour >> colon >> minute;
    string am_pm = "AM";

    if (hour == 0) {
        hour = 12;
    } else if (hour == 12) {
        am_pm = "PM";
    } else if (hour > 12) {
        hour -= 12;
        am_pm = "PM";
    }

    string hour_str = to_string(hour);
    string minute_str = to_string(minute);

    if (hour_str.length() == 1) {
        hour_str = "0" + hour_str;
    }

    if (minute_str.length() == 1) {
        minute_str = "0" + minute_str;
    }

    return hour_str + ":" + minute_str + " " + am_pm;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string time_24hr;
        cin >> time_24hr;
        string time_12hr = convert_to_12hr(time_24hr);
        cout << time_12hr << endl;
    }

    return 0;
}