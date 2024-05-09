#include <iostream>

/*
You work as an analyst in a company that sells electronics. You are provided 
with monthly sales of products for a year in the form of a vector, where each 
element of the vector represents the sales amount for a month. Your task is 
to analyze the data and perform the following operations:

Find the total sales volume for the year.
Determine the month with the maximum sales volume. If there are multiple months 
with the maximum sales, output the first one.
Calculate the average monthly sales.
Determine whether the sales in each month exceed the average monthly sales. 
For each month, output true or false accordingly.
Find the number of months with sales below the average.

Input Data
Vector std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000, 
                                 18000, 21000, 20000, 17000, 22000, 19000};, 
where each element represents the sales amount for a month.

Tasks to Implement
Implement a function to calculate the total sales volume for the year.
Implement a function to find the month with the maximum sales volume.
Calculate the average monthly sales.
Determine whether the sales in each month exceed the average monthly sales, 
and output the corresponding true or false values.
Find the number of months with sales below the average.

Total sales volume for the year: 204000 пхахпхавхпав тут ошибка и из-за этого там везде ошибки
Month with maximum sales volume: 11
Average monthly sales: 17000
Sales above average: false false false true true false true true true true true true
Number of months with sales below average: 3

*/

int totalSalesVolume(const std::vector<int>& data)
{
  int sum = 0;
  for (auto & it : data)
  {
    sum+=it;
  }
  return sum;
};

int maxMonthVolume(const std::vector<int>& data)
{
  int max = 0;
  int maxMonth;
  for (int i = 0; i < data.size(); ++i)
  {
    if (max < data[i]) 
    {
      max = data[i];
      maxMonth = i+1;
    } 
  }
  return maxMonth;
};


int main() {
  std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000,
                            18000, 21000, 20000, 17000, 22000, 19000};

  std::cout << "Total sales volume for the year: " << totalSalesVolume(sales) << '\n';
  std::cout << "Month with maximum sales volume: " << maxMonthVolume(sales) << '\n';

  int avg = totalSalesVolume(sales)/12;
  std::cout << "Average monthly sales: " << avg << '\n';
  int count_below = 0;
  std::cout << "Sales above average: ";
  for (auto & it : sales)
  {
    if (it >= avg) std::cout << "true" << ' ';
    else {std::cout << "false" << ' '; count_below += 1;}
  }

  std::cout << '\n' << "Number of months with sales below average: " << count_below;

  return 0;
}