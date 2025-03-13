// Problem - https://leetcode.com/problems/count-days-spent-together/

void main() {
  String aliceArrival = "10-01";
  String aliceDeparture = "10-31";
  String bobArrival = "11-01";
  String bobDeparture = "12-31";

  int daysSpentTogether = countDaysSpentTogether(aliceArrival, aliceDeparture, bobArrival, bobDeparture);
  print(daysSpentTogether);
}

int countDaysSpentTogether(String aliceArrival, String aliceDeparture, String bobArrival, String bobDeparture) {
  int aliceArrivalDay = convertDateToDayOfYear(aliceArrival);
  int aliceDepartureDay = convertDateToDayOfYear(aliceDeparture);
  int bobArrivalDay = convertDateToDayOfYear(bobArrival);
  int bobDepartureDay = convertDateToDayOfYear(bobDeparture);
  int sharedDays = 0;

  for (int day = aliceArrivalDay; day <= aliceDepartureDay; day++) {
    for (int bobDay = bobArrivalDay; bobDay <= bobDepartureDay; bobDay++) {
      if (day == bobDay) sharedDays++;
    }
  }

  return sharedDays;
}

int convertDateToDayOfYear(String date) {
  List<int> daysInEachMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
  List<String> dateParts = date.split('-');

  int month = int.parse(dateParts[0]);
  int day = int.parse(dateParts[1]);

  int daysPassed = 0;
  for (int i = 0; i < month - 1; i++) {
    daysPassed += daysInEachMonth[i];
  }

  return daysPassed + day;
}
