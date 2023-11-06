#include <iostream>
#include <iomanip>

using namespace std;

    class Data {
        int _an, _luna, _zi; // sunt date membre

    public:
        void SetData( int an, int luna, int zi);
        void Print();
        int NrZile(Data dc);
    };

    string luni[] = { "", "IANUARIE", "FEBRUARIE", "MARTIE", "APRILIE",
                    "MAI","IUNIE","IULIE","AUGUST","SEPTEMBRIE",
                    "OCTOMBRIE", "NOIEMBRIE","DECEMBRIE"
    };

    int nr_zile_luni[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    void Data::SetData( int an, int luna, int zi) {
        _an = an;
        _luna = luna;
        _zi = zi;
    }


    void Data::Print() {
        cout << endl << setw(4) << _an << setw(12) << luni[_luna] << setw(3) << _zi;
    }

    int Data::NrZile(Data dc)
    {
        int nr = 0;

        if (_an % 4 == 0)

        cout << endl << "prima: " << dc._luna << endl;
        cout << endl << "second: " << _luna << endl;

        nr += dc._zi >= _zi ? dc._zi - _zi : (dc._luna--, nr_zile_luni[_luna] + dc._zi - _zi);
        nr += 30 * (dc._luna >= _luna ? dc._luna - _luna : (dc._an--, 12 + dc._luna - _luna));
        nr += 365 * (dc._an - _an);

        return nr;
    }

    int main() {
        Data dn, dc; //obiecte apartinand clasei Data
        dn.SetData(2024, 1, 1);
        dc.SetData(2024, 3, 30);
        dn.Print();
        dc.Print();
        cout << endl << "Nr zile trecute = " << dn.NrZile(dc);

        return 0;
    }
