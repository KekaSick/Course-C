#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>

//     Main task - to implement the function fillCountries to put countries into a container]
//     (vector<Country> or map<std::string, Country>).

//     Intermediate steps:
//     1. Define operator< for both Cities and Countries based on their names.
//     2. Read cities as pairs <City, name of the country>.
//     3. Use the name of the country to find if there is such country in the container.
//     4. Add a country to the container or a city to an existing country.

struct Coordinate 
{
    double latitude, longitude;

    Coordinate(double latitude = 0.0, double longitude = 0.0) : latitude(latitude), longitude(longitude) {}

};

struct City 
{
    std::string name;
    Coordinate coordinates;
    int population;

    City(const std::string& name, double latitude, double longitude, int population) : name(name), coordinates(latitude, longitude), population(population) {}

    bool operator< (City compare)
    {
        return name < compare.name;
    }
};

struct Country 
{
    std::string name;
    std::vector<City> cities;

    Country() = default;
    Country(const std::string& name) : name(name) {}

    void add_city(const City& city) 
    {
        cities.push_back(city);
    }

    bool operator< (Country compare)
    {
        return name < compare.name;
    }
};


void fillCountries(std::istream& inputFile, std::map<std::string, Country>& countries) 
{
    std::string line;
    std::getline(inputFile, line); //skip line

    while (std::getline(inputFile, line)) 
    {
        std::stringstream ss(line);
        std::string city_name, latitude, longitude, country_name, population;

        getline(ss, city_name, ',');
        getline(ss, latitude, ',');
        getline(ss, longitude, ',');
        getline(ss, country_name, ',');
        getline(ss, population, ',');

        City city(city_name, std::stod(latitude), std::stod(longitude), std::stoi(population));

        if (countries.find(country_name) == countries.end()) 
        {
            countries[country_name] = Country(country_name);
        }

        countries[country_name].add_city(city);
    }
}

void printCountries(const std::map<std::string, Country>& countries) 
{
    for ( auto pair : countries) 
    {

        const auto& country = pair.second;
        std::cout << country.name << '\n' << country.cities.size() << " cities" << '\n';

        for (const auto& city : country.cities) 
        {
            std::cout << "City name: " << city.name << "; "
                      << "Coordinates: (" << city.coordinates.latitude << ", " << city.coordinates.longitude << "); "
                      << "Population: " << city.population << '\n';
        }

        std::cout << "\n";
    }
}

int main() 
{
    const std::string filename = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week9/18_sem/data/problem1_cities/cities.csv";
    std::ifstream inputFile(filename);

    if (!inputFile) 
    {
        std::cout << "Ahtung failed to open file\n";
        return 1;
    }

    std::map<std::string, Country> countries;
    fillCountries(inputFile, countries);
    printCountries(countries);

    return 0;
}
