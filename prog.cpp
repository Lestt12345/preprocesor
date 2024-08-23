//#include "function.h"
//#include "function.cpp"
#include <iostream>
#include <windows.h>;

using namespace std;

// Визначте тип даних тут
#define INTEGER  // Змініть на DOUBLE або CHAR для використання інших типів даних

#ifdef INTEGER
#define DATA_TYPE int
#define FILL_ARRAY FillArrayInt
#define SHOW_ARRAY ShowArrayInt
#define FIND_MIN FindMinInt
#define FIND_MAX FindMaxInt
#define SORT_ARRAY SortArrayInt
#define EDIT_VALUE EditValueInt
void FILL_ARRAY(DATA_TYPE* array, int size);
void SHOW_ARRAY(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size);
void SORT_ARRAY(DATA_TYPE* array, int size);
void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue);
#elif defined(DOUBLE)
#define DATA_TYPE double
#define FILL_ARRAY FillArrayDouble
#define SHOW_ARRAY ShowArrayDouble
#define FIND_MIN FindMinDouble
#define FIND_MAX FindMaxDouble
#define SORT_ARRAY SortArrayDouble
#define EDIT_VALUE EditValueDouble
void FILL_ARRAY(DATA_TYPE* array, int size);
void SHOW_ARRAY(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size);
void SORT_ARRAY(DATA_TYPE* array, int size);
void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue);
#elif defined(CHAR)
#define DATA_TYPE char
#define FILL_ARRAY FillArrayChar
#define SHOW_ARRAY ShowArrayChar
#define FIND_MIN FindMinChar
#define FIND_MAX FindMaxChar
#define SORT_ARRAY SortArrayChar
#define EDIT_VALUE EditValueChar
void FILL_ARRAY(DATA_TYPE* array, int size);
void SHOW_ARRAY(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size);
DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size);
void SORT_ARRAY(DATA_TYPE* array, int size);
void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size);
#endif

#ifdef INTEGER
void FILL_ARRAY(DATA_TYPE* array, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }
}

void SHOW_ARRAY(const DATA_TYPE* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void SORT_ARRAY(DATA_TYPE* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                DATA_TYPE temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}
#elif defined(DOUBLE)
void FILL_ARRAY(DATA_TYPE* array, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = static_cast<DATA_TYPE>(rand()) / RAND_MAX * 100.0;
    }
}

void SHOW_ARRAY(const DATA_TYPE* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void SORT_ARRAY(DATA_TYPE* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                DATA_TYPE temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}
#elif defined(CHAR)
void FILL_ARRAY(DATA_TYPE* array, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        array[i] = 'A' + rand() % 26;
    }
}

void SHOW_ARRAY(const DATA_TYPE* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

DATA_TYPE FIND_MIN(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

DATA_TYPE FIND_MAX(const DATA_TYPE* array, int size) {
    if (size <= 0) return DATA_TYPE();
    DATA_TYPE max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void SORT_ARRAY(DATA_TYPE* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                DATA_TYPE temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}
#endif

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;
    DATA_TYPE* array = new DATA_TYPE[size];

    FILL_ARRAY(array, size);
    cout << "Масив після заповнення:" << endl;
    SHOW_ARRAY(array, size);

    cout << "Мінімальне значення: " << FIND_MIN(array, size) << endl;
    cout << "Максимальне значення: " << FIND_MAX(array, size) << endl;

    SORT_ARRAY(array, size);
    cout << "Масив після сортування:" << endl;
    SHOW_ARRAY(array, size);

    int index;
    DATA_TYPE newValue;
    cout << "Введіть індекс для редагування (0 до " << size - 1 << "): ";
    cin >> index;
    if (index < 0 || index >= size) {
        cout << "Недійсний індекс!" << endl;
        delete[] array;
        return 1;
    }
    cout << "Введіть нове значення: ";
#ifdef INTEGER
    cin >> newValue;
#elif defined(DOUBLE)
    cin >> newValue;
#elif defined(CHAR)
    cin >> newValue;
#endif
    EDIT_VALUE(array, index, newValue, size);
    cout << "Масив після редагування:" << endl;
    SHOW_ARRAY(array, size);
}
