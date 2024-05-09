#include <iostream>

/*
Imagine you are conducting a survey among the residents of a city on the topic
of "Your favorite season". The answers are collected in the form of a string, 
where each letter represents the respondent's choice:

W for winter,
S for spring,
U for summer, and
A for autumn.
Your task is to analyze the survey results using an std::vector<char> container 
to store the responses and STL algorithms to process them.

Tasks to Implement:
- Fill the std::vector<char> responses with the survey results.
- Use std::accumulate to count the total number of responses.
- Find the most popular season using a combination of std::count_if and 
  comparing the results.
- Use std::find_if to find the first response that chose summer (U).
Output the obtained results: the total number of responses, the most and least 
popular seasons, and the position of the first response choosing summer.
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>

int main() {
  std::vector<char> responses = {'W', 'S', 'S', 'A', 'W', 'S', 'U',
                                 'A', 'S', 'U', 'A', 'W', 'S', 'U', 'A', 'W'};

  int w = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'W';});
  int s = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'S';});
  int u = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'U';});
  int a = std::count_if(responses.begin(), responses.end(), [](char c){return c == 'A';});
  int first = std::find_if(responses.begin(), responses.end(), [](char c){return c == 'U';}) - responses.begin() + 1;

  std::string monthMax;
  if (std::max({w, s, u, a}) == w)monthMax = "winter";
  if (std::max({w, s, u, a}) == s)monthMax = "spring";
  if (std::max({w, s, u, a}) == u)monthMax = "summer";
  if (std::max({w, s, u, a}) == a)monthMax = "autumn";

  std::string monthMin;
  if (std::min({w, s, u, a}) == w)monthMin = "winter";
  if (std::min({w, s, u, a}) == s)monthMin = "spring";
  if (std::min({w, s, u, a}) == u)monthMin = "summer";
  if (std::min({w, s, u, a}) == a)monthMin = "autumn";

  std::cout << "Amount of responses: " << responses.size() << '\n';
  std::cout << "The most popular season: " << monthMax << " = " << std::max({w, s, u, a}) << '\n';
  std::cout << "The least popular season: "<< monthMin << " = " << std::min({w, s, u, a}) << '\n';
  std::cout << "The first response that choose summer: " << first;
  
  return 0;
}
