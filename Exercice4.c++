//! 1 
std::set<int> param_set;
for (int i = 1; i <= 100; i++) {
    param_set.insert(i);
}
//!2
bool search(const std::set<int>& set_param, int value) {
    return set_param.find(value) != set_param.end();
}
//!3 
template<typename T>
bool search(T begin, T end, int value) {
    return std::find(begin, end, value) != end;
}
//!4 
#include <vector>
#include <list>

int main() {
    std::vector<std::string> vec_string = {"Hello", "World"};
    std::list<int> list_int = {1, 2, 3, 4, 5};
    int arr_float[] = {1.1, 2.2, 3.3, 4.4, 5.5};

   
    bool found = search(vec_string.begin(), vec_string.end(), "World");

    found = search(list_int.begin(), list_int.end(), 4);
    
    found = search(arr_float, arr_float + sizeof(arr_float) / sizeof(arr_float[0]), 4.4);

    return 0;
}