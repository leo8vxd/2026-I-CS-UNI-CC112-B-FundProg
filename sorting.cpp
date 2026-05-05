#include "sorting.h"
#include "util.h"
#include <iostream>
// #include "array.h"

using namespace std;

void DemoBurbuja() {
  cout << "DemoBurbuja \n";

  cout << "BurbujaClasico \n";
  T1 arr1[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
  auto n1 = sizeof(arr1) / sizeof(arr1[0]);

  PrintArray(arr1, n1);
  BurbujaClasico(arr1, n1, Mayor<T1>);
  PrintArray(arr1, n1);
  BurbujaClasico(arr1, n1, Menor<T1>);
  PrintArray(arr1, n1);

  cout << "BurbujaRecursivo \n";
  T1 arr2[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
  auto n2 = sizeof(arr2) / sizeof(arr2[0]);

  PrintArray(arr2, n2);
  BurbujaRecursivo(arr2, n2, Mayor<T1>);
  PrintArray(arr2, n2);
  BurbujaRecursivo(arr2, n2, Menor<T1>);
  PrintArray(arr2, n2);

  T2 arr3[] = {5.2, 7.5, 8.1, 1.9, 8.9, 9.1, 4.4, 7.7, 3.3, 6.6};
  auto n3 = sizeof(arr3) / sizeof(arr3[0]);
  BurbujaRecursivo(arr3, n3, Mayor<T2>);
  cout << "Array ordenado Ascendente:\n";
  PrintArray(arr3, n3);
  BurbujaRecursivo(arr3, n3, Menor<T2>);
  cout << "Array ordenado Descendente:\n";
  PrintArray(arr3, n3);

  string arr4[] = {"Hola", "Mundo", "Adios", "Mundo"};
  auto n4 = sizeof(arr4) / sizeof(arr4[0]);
  BurbujaRecursivo(arr4, n4, Mayor<string>);
  cout << "Array ordenado Ascendente:\n";
  PrintArray(arr4, n4);
  BurbujaRecursivo(arr4, n4, &Menor<string>);
  cout << "Array ordenado Descendente:\n";
  PrintArray(arr4, n4);

  // BurbujaRecursivo(arr, n, &Menor);
  // cout << "Array ordenado Descendente:\n";
  // PrintArray(arr, 10, cout);

  // cout << endl;
  int a = 3;
  double b = 3.14;
  auto x = suma(a, b);
  cout << x << endl;

  string str1 = "Fund", str2 = "Prog";
  auto str3 = suma(str1, str2);
  cout << str3 << endl;

  //     string str3 = "CS-UNI";
  //     auto str4 = suma(str3, 7.7);
  //     cout << str4 << endl;
}



void DemoQuickSort() {
    cout << "DemoQuickSort \n";
    T1 arr[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, n, Mayor<T1>);
    cout << "Arreglo ordenado Ascendente: \n";
    PrintArray(arr, n);

    QuickSort(arr, n, Menor<T1>);
    cout << "Arreglo ordenado Descendente: \n";
    PrintArray(arr, n);

    cout << endl;
}



void DemoMergeSort(){
    cout << "DemoMergeSort" << endl;
    T1 arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, n, Mayor<T1>);
    cout << "Array ordenado Ascendente:\n";
    PrintArray(arr, n);

    MergeSort(arr, n, Menor<T1>);
    cout << "Array ordenado Descendente:\n";
    PrintArray(arr, n);

    cout << endl;
}

void DemoSorting() {
    DemoBurbuja();
    DemoQuickSort();
    DemoMergeSort();
}