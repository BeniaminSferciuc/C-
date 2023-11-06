#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }
};

class DateCalculator {
public:
    static int daysBetweenDates(const Date& date1, const Date& date2) {
        // Algoritmul pentru calculul numărului de zile
        int daysInMonth[] = { 31, 28 + (date2.getYear() % 4 == 0 && (date2.getYear() % 100 != 0 || date2.getYear() % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        int days = 0;

        // Adăugăm zilele pentru fiecare an între cele două date
        for (int i = date1.getYear(); i < date2.getYear(); ++i) {
            days += 365 + (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0));
        }

        // Scădem zilele trecute din anul date1
        for (int i = 0; i < date1.getMonth() - 1; ++i) {
            days -= daysInMonth[i];
        }
        days -= date1.getDay();

        // Adăugăm zilele din anul date2
        for (int i = 0; i < date2.getMonth() - 1; ++i) {
            days += daysInMonth[i];
        }
        days += date2.getDay();

        return days;
    }
};

int main() {
    Date date1(1, 2, 2024); // Prima dată
    Date date2(1, 3, 2024); // A doua dată

    int days = DateCalculator::daysBetweenDates(date1, date2);
    std::cout << "Numarul de zile intre date: " << days << std::endl;

    return 0;
}
