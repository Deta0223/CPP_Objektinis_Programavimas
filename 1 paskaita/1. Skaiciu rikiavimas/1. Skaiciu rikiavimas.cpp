#include <iostream>
#include <vector>
using namespace std;
//be vektoriu
/*void rikiavimas (int a[], int n);
void ivedimas (int a[], int &i);
int main(){
    int a[100], n;
    ivedimas(a, n);
    rikiavimas(a, n);
    for (int i = 0; i < n; i++)
    cout << a[i] << " " << endl;
return 0;
}
void ivedimas (int a[], int &i)
{
    int b=1;
    i = 0;
    while (b != 0)
    {
        cin >> b;
        a[i] = b;
        i++;
    }
}
void rikiavimas (int a[], int n)
{
    //Selection sort

    for (int i = 0; i < n; i++)
    {
        int minElement = i;
        for (int j = i; j < n; j++)
        {
            if (a[minElement] > a[j])
            {
                minElement = j;
            }
        }
        swap (a[i], a[minElement]);
    }
}*/
//su vektoriais
void rikiavimas(vector<int> &v);
void ivedimas(vector<int> &v);
void spausdinimas(vector<int> v);

int main() {
    vector<int> v;
    ivedimas(v);
    rikiavimas(v);
    spausdinimas(v);
    return 0;
}

void ivedimas(vector<int> &v) {
    int b = 1;
    while (b != 0) {
        cin >> b;
        if (b != 0)
            v.push_back(b);
    }
}

void rikiavimas(vector<int> &v) {
    // Selection sort
    for (int i = 0; i < v.size(); i++) {
        int minElement = i;
        for (int j = i + 1; j < v.size(); j++) {
            if (v[minElement] > v[j]) {
                minElement = j;
            }
        }
        swap(v[i], v[minElement]);
    }
}
void spausdinimas(vector<int> v)
{
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    cout << endl;
}
