#include<iostream>
using namespace std;
int refMonth = 4;
int refDay = 4;
int refYear = 1999;
struct Date{
	int month;
	int day;
	int year;
};
Date getDate(int month, int day, int year);
Date increment(int days);
int main(){
	



	system("pause");
	return 0;
}
Date getDate(int month, int day, int year){
	if (year > refYear){
		Date sameDayofWeekYearsLater;
		sameDayofWeekYearsLater.year = year;
		
		for (int i = refYear + 1; i < year; i++){
			day += 1;
			if (day != 29){
				if (month > 2){
					if (i % 4 == 0){
						day += 2;
					}
					else{
						day += 1;
					}
				}
				else{
					day += 1;
				}
			}

		}
		sameDayofWeekYearsLater.day = day - year + 
	}

}
Date increment(Date ref, int days){
	Date temp;
	if (ref.month == 2||ref.month == 4||ref.month == 6|| ref.month == 10|| ref.month == 12){
		if (ref.day == 1){
			if (ref.year % 4 != 0){
				temp.day = 31;
			}
			else{
				temp.day = 30;
			}
		}
		else{
			if (ref.day == 1){

			}
			if (ref.year % 4 == 0 && ref.month > 2 && ref.day == 2){
				temp.day = 31;
			}
			else{
				temp.day -= 1;
			}
		}
	}
	else if (ref.month == 1 || ref.month == 3 || ref.month == 5 || ref.month == 7 || ref.month == 8 || ref.month == 9 || ref.month == 11){
		if (ref.day == 1){
			if (ref.year % 4 != 0){
				if (ref.month == 3){
					temp.day = 28;
				}
				else{
					temp.day = 30;
				}
			}
			else{
				if (ref.month == 3){
					temp.day = 29;
				}
				else{
					temp.day = 30;
				}
			}
		}
		else{
			if (ref.year % 4 == 0 && ref.month > 2 && ref.month == 3 && ref.day == 2){
				temp.day = ;
			}
			else if (ref.year % 4 == 0 && ref.month > 2 && ref.day == 2){
				temp.day = 30;
			}
			else{
				temp.day -= 1;
			}
		}
	}
}