// Question: Write a program that calculates the day of the year for a given date in the format "YYYY-MM-DD".

void main() {
  String date = "2025-12-15";
  List<String> dateList = date.split('-');

  int year = int.parse(dateList[0]);
  int month = int.parse(dateList[1]);
  int day = int.parse(dateList[2]);

  int dayOfYear = calculateDayOfYear(year, month, day);

  print(dayOfYear);
}

bool isLeapYear(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthDays(int month, int year) {
  switch (month) {
    case 1: return 31;
    case 2: return isLeapYear(year) ? 29 : 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 0;
  }
}

int calculateDayOfYear(int year, int month, int day) {
  int totalDays = 0;

  for (int i = 1; i < month; i++) {
    totalDays += monthDays(i, year);
  }

  return (totalDays + day);
}