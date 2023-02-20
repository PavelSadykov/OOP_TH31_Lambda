//
//  main.cpp
//  ООП ДЗ 31 Лямбды
//
//  Created by Павел on 20.02.2023.
//
#include <algorithm>
#include <iostream>
#include <vector>


void print_vector(std::vector<int> const &m_vec){
    for  (auto it = m_vec.cbegin(); it != m_vec.cend(); it++) {
            std::cout << *it << ' ';
    }
    std::cout<<std::endl;
    
}

   
int main(int argc, const char * argv[]) {
    
    std::vector<int> m_vec{ 3, 54, 100, 71, 79, 88, 63, 5, 40, 84 };
    std::vector<int> m_vec_even(m_vec.size()); // m_vec = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  

    std::cout << "Vector  = ";
    print_vector(m_vec);

    // is_even проверяет является ли элемент четным
    auto is_even = [](int const elem) { return !(elem % 2); };
    // с помощью copy_if выбираем только четные элементы из  m_vec
    // и коприруем их в m_vec_even, начиная с начальной позиции
    auto ec = copy_if(m_vec.begin(),m_vec.end(), m_vec_even.begin(), is_even);
    m_vec_even.resize(std::distance(m_vec_even.begin(), ec));

    std::cout << "Even numbers are m_vec_even = ";
    print_vector(m_vec_even);
    std::cout<<std::endl;
    
    return 0;
}
