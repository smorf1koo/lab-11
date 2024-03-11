#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <list>
#include <deque>
#include <iterator>

//перегрузил оператор вывода для вектора любого типа данных
template<typename Container>
std::ostream& printContainer(std::ostream& os, const Container& cont) {
    auto print = [&os](const typename Container::value_type& value) {
        os << value << ' ';
    };
    for_each(cont.begin(), cont.end(), print);
    os << '\n';
    return os;
}

// Перегрузка оператора вывода для вектора
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    return printContainer(os, vec);
}

// Перегрузка оператора вывода для списка
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& list) {
    return printContainer(os, list);
}

// Перегрузка оператора вывода для двусторонней очереди
template<typename T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& vec) {
    return printContainer(os, vec);
}
int main(){
//
//    //TASK 1
//    std::cout << "TASK 1\n";
//    std::list <int> list;
//    unsigned int n;
//    std::cout << "Enter List size: \n";
//    std::cin >> n;
//    int value;
//    while (list.size() < n){
//        std::cin >> value;
//        list.push_back(value);
//    }
//    std::cout << "Entered List: " << list;
//
//    //проверим, есть ли в векторе число, кратное 5
//    if (std::find_if(list.begin(), list.end(), [](int i) { return i % 5 == 0; }) != std::end(list)) {
//        std::cout << "List includes a number divisible by 5\n";
//    } else {
//        std::cout << "List doesn't include a number divisible by 5\n";
//    }
//
//    // посчитаем отрицательные символы
//    int count = std::count_if(list.begin(), list.end(), [](int i){ return i < 0; });
//    std::cout << "Negative values: " << count << "\n";
//
//    //посчитаем сумму элементов
//    int sum = std::accumulate(list.begin(), list.end(), 0);
//    std:: cout << "Sum of vector elements: " << sum << '\n';
//    list.clear(); //освобождаем память

//    //TASK2
//    std::cout << "TASK 2\n";
//    std::vector <int> vec = {1, 5, 6, -42, 5, 52};
//    std::cout << "Entered vector: " << vec;
//
//    //добавим значения в конец и после 5 элемента
//    std::insert_iterator <std::vector <int>> inserter(vec, 5+vec.begin());
//    *inserter = 10;
//    std::back_inserter(vec) = -1;
//    std::cout << "Vector with new elements: " << vec;
//
//    //переместимся итератором на желаемую позицию и удалим все элменты до нее
//    auto it = vec.begin();
//    std::advance(it, 2);
//    vec.erase(vec.begin(), it);
//    std::cout << "Vector without 1-2 elements: " << vec;

//    // TASK3
//    std::cout << "TASK 3\n";
//    std::ifstream inputfile("input.txt");
//
//    if (!inputfile.is_open()){
//        std::cerr << "error open_file\n";
//        return 1;
//    }
//    std::vector<std::string> lines;
//
//    //считаем все строки из файла
//    std::istream_iterator<std::string> input (inputfile); // итератор поотока ввода (читает строки)
//    std::copy(input,
//              std::istream_iterator<std::string>(),
//              std::back_inserter(lines));
//    inputfile.close();
//    std::cout << lines;
//
//    //немного изменим строки
//    std::for_each(lines.begin(), lines.end(), [](std::string& line){ line = "Pokormite_pls-" + line;});
//    std::cout << lines;
//
//    //открываем файл для записи
//    std::ofstream outputfile("output.txt");
//    if (!outputfile.is_open()){
//        std::cerr << "error open_file\n";
//        return 1;
//    }
//
//    std::copy(lines.begin(),
//              lines.end(),
//              std::ostream_iterator<std::string>(outputfile, "\n"));
//    outputfile.close();

    // TASK4
    std::cout << "TASK 4\n";
    std::vector <int> vec = {2, 6, 66, 2};
    std::deque <int> deq;
    std::copy(vec.begin(), vec.end(), std::back_inserter(deq));
    std::cout << "Copied deque: " << deq;
    return 0;
}