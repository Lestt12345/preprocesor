#include "function.h"
#include <iostream>

using namespace std;

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

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue) {
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

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue) {
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

void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue) {
    if (index >= 0 && index < size) {
        array[index] = newValue;
    }
}
#endif
