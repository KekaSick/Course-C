
// Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. Для каждого данного слова 
// определите его синоним.
// Для решения данной задачи используйте STL
// Формат ввода
// Программа получает на вход количество пар синонимов N (0 ≤ N ≤ 105). 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима.
// Затем идет число Q (1 ≤ Q ≤ 105) — количество запросов к словарю. 
// Далее на каждой следующей из Q строк идет слово, к которому надо вывести
// синоним.
// Формат вывода
// Программа должна вывести синонимы к данным слову на отдельных строках.
// Пример
// Ввод Скопировать ввод	Вывод Скопировать вывод
// 3
// car plane
// mouse cat
// base stream
// 3
// plane
// stream
// base
// car
// base
// stream
#include <unordered_map>
#include <string>
#include <iostream>
#include <exception>

int main() 
{
    int N;
    std::unordered_map<std::string, std::string> dict;

    std::cin >> N;

    for (int i = 0; i < N; i++) 
    {
        std::string key, value;
        std::cin >> key >> value;
        dict[key] = value;
        dict[key] = value;
    }

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) 
    {
        std::string word;
        std::cin >> word;
        if (dict.find(word) != dict.end()) 
        {
            std::cout << dict[word] << "\n";
        } 
        else 
        {
            std::cout << "No synonym found" << "\n";
        }
    }

    return 0;
}