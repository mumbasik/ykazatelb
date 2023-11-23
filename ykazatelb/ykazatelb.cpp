

#include <iostream>
using namespace std;
//N1
void copy(int* ar){
    const int sizee = 10;
    int arr2[sizee];
    cout << "Copy arrray: " << endl;
    for (int i = 0; i < sizee;  i++) {
        arr2[i] = *(ar + i);
        cout << arr2[i] << " ";

    }
    cout << endl;

}
//N2
void sortback(int* ar, int size) {
    int t = size / 2;
    int x;
    for (int i = 0; i < t; i++) {
        x = ar[i];
        ar[i] = *(ar + size - i - 1);
       ar[size - i - 1] = x;

        
    }
    cout << "Sorted: " << endl;
    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

//N4
void summandproizv(int* ar, const int size, int *sum, double *prozv) {
    double proizv = 1;
    int summ = 0;
    for(int i = 0; i < size; i++) {
        summ += *(ar + i);
        proizv *= *(ar + i);
       
    }
    *sum = summ;
    *prozv = proizv;
    cout <<  "Overall summ: " << *sum << endl;
    cout << "Proizv is equal to: " << *prozv << endl;


}
//N5
void counter(int *ar, int size, int *plus, int *minus, int* zero) {
    int minuselement = 0;
    int pluselement = 0;
    int zeroelement = 0;
    for (int i = 0; i < size; i++) {
        if (*(ar + i) <  0) {
            minuselement++;
           
        }
        else if (*(ar + i) > 0) {
            pluselement++;
            
        }
        else if (*(ar + i) == 0) {
            zeroelement++;
            
        }
    }
    *minus = minuselement;
    *plus = pluselement;
    *zero = zeroelement;
    cout << "Amount of minuselement = " << *minus << endl;
    cout << "Amount of pluselement = " << *plus << endl;
    cout << "Amount of zeroelement = " << *zero << endl;
   
}
//N6
void maxel(int *ar, int size, int *indexOfMax, int *maax) {
    
    int max = ar[0];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (*(ar + i) > max) {
            max = *(ar + i);
            index = i;
            *indexOfMax = index;
            *maax = max;

        }
      
    }
    
    
    cout << "Max element: " << *maax << " " << "Index: " << *indexOfMax << endl;

}
int main()
{
    const int SIZE = 10;
    int ar[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % SIZE ;
    }
    cout << "First array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    copy(ar);
    sortback(ar, SIZE);
    int* summ = new int;
    
    double* proizv = new double;
    summandproizv(ar, SIZE, summ, proizv);
    int* plus = new int;
    int* minus = new int;
    int* zero =  new int;
    counter(ar, SIZE, plus, minus, zero);
    int* indexOfMax = new int;
    int* maax = new int;
    maxel(ar, SIZE, indexOfMax, maax);
    
    delete proizv;
    delete plus;
    delete minus;
    delete zero;
    delete indexOfMax;
    delete maax;
}

