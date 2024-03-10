#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
//перегрузил оператор вывода для вектора любого типа данных
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec){
    auto print = [&os](const T& value) {os << value << ' ';};
    for_each(vec.begin(), vec.end(), print);
    os << '\n';
    return os;
}
int main(){

    //TASK 1
    std::cout << "TASK 1\n";
    std::vector <int> vec;
    unsigned int n;
    std::cout << "Enter vector size: \n";
    std::cin >> n;
    int value;
    while (vec.size() < n){
        std::cin >> value;
        vec.push_back(value);
    }
    std::cout << "Entered vector: " << vec;

    //проверим, есть ли в векторе число, кратное 5
    if (std::find_if(vec.begin(), vec.end(), [](int i) { return i % 5 == 0; }) != std::end(vec)) {
        std::cout << "Vector includes a number divisible by 5\n";
    } else {
        std::cout << "Vector doesn't include a number divisible by 5\n";
    }

    // отсортируем по убыванию
    std::cout << "Sorting...\n";
    std::sort(vec.begin(), vec.end(), [](int a, int b){return a < b;});
    std::cout << "Sorted vector: " << vec;

    //посчитаем сумму элементов
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std:: cout << "Sum of vector elements: " << sum << '\n';

    return 0;
}