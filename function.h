#ifndef FUNCTION_H
#define FUNCTION_H

using namespace std;

// Визначення типу даних
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
void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size);
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
void EDIT_VALUE(DATA_TYPE* array, int index, DATA_TYPE newValue, int size);
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
#endif