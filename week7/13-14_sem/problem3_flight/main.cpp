///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Describe the “Flight” structure with flight identifier fields,
/// departure airport, destination airport and departure time
/// (structure “Time”). Write a function that takes as input
/// vector of flights and airport name displaying information
/// first about all flights arriving at the specified airport, and then
/// about all flights departing from this airport.
///
// destination / departure / departure time

// get length of flight
#include <iostream>
#include <fstream> 
#include <vector>

struct Time
{
    int hours, minutes;
};

struct Flight
{
    std::string flight_identifier_fields;
    std::string departure_airport;
    std::string destination_airport;
    Time departure_time;

    Flight(std::string id, std::string departure, std::string destination, Time time){
        flight_identifier_fields = id; 
        departure_airport = departure; 
        destination_airport = destination;
        departure_time = time;
    }

    static void magic(std::vector<Flight> flights, std::string airport_name) {

        std::cout << "Arriving at " << airport_name << ":" << std::endl;
        for (auto flight : flights) {
            if (flight.destination_airport == airport_name) {
                std::cout << "Flight "; 
                std::cout << flight.flight_identifier_fields << " | ";
                std::cout << flight.destination_airport << " | ";
                std::cout << flight.departure_time.hours << ":";
                std::cout << flight.departure_time.minutes << std::endl;
            }
        }


        std::cout << std::endl << "Departing flights from " << airport_name << ":" << std::endl;
        for (auto flight : flights) {
        if (flight.departure_airport == airport_name) {
                std::cout << "Flight "; 
                std::cout << flight.flight_identifier_fields << " | ";
                std::cout << flight.destination_airport << " | ";
                std::cout << flight.departure_time.hours << ":";
                std::cout << flight.departure_time.minutes << std::endl;
            }
        }


    }
};

int main() {
    
    std::vector<Flight> flights = {
        Flight("AB123", "JFK", "LAX", Time{15, 30}),
        Flight("CD456", "LAX", "JFK", Time{17, 45}),
        Flight("EF789", "JFK", "MIA", Time{9, 15}),
        Flight("PI736", "JFK", "LAX", Time{0, 0}),
        Flight("XK626", "LAX", "MIA", Time{1, 15}),
        Flight("KQ339", "MIA", "ORD", Time{2, 30}),
        Flight("DU389", "ORD", "ATL", Time{3, 45}),
        Flight("JA533", "ATL", "DFW", Time{4, 0}),
        Flight("PZ803", "DFW", "DEN", Time{5, 15}),
        Flight("BT194", "DEN", "SFO", Time{6, 30}),
        Flight("TC675", "SFO", "SEA", Time{7, 45}),
        Flight("CJ099", "SEA", "LAS", Time{8, 0}),
        Flight("EO461", "LAS", "JFK", Time{9, 15}),
        Flight("AB124", "JFK", "LAX", Time{15, 45}),
        Flight("CD457", "LAX", "JFK", Time{18, 0}),
        Flight("EF790", "JFK", "MIA", Time{9, 45}),
        Flight("PI737", "JFK", "LAX", Time{1, 15}),
        Flight("XK627", "LAX", "MIA", Time{2, 30}),
        Flight("KQ340", "MIA", "ORD", Time{3, 45}),
        Flight("DU390", "ORD", "ATL", Time{4, 0}),
        Flight("JA534", "ATL", "DFW", Time{5, 15}),
        Flight("PZ804", "DFW", "DEN", Time{6, 30}),
        Flight("BT195", "DEN", "SFO", Time{7, 45}),
        Flight("TC676", "SFO", "SEA", Time{8, 0}),
        Flight("CJ100", "SEA", "LAS", Time{9, 15}),
        Flight("EO462", "LAS", "JFK", Time{10, 30}),
        Flight("AB125", "JFK", "LAX", Time{16, 0}),
        Flight("CD458", "LAX", "JFK", Time{18, 15}),
        Flight("EF791", "JFK", "MIA", Time{10, 0}),
        Flight("PI738", "JFK", "LAX", Time{2, 30}),
        Flight("XK628", "LAX", "MIA", Time{3, 45}),
        Flight("KQ341", "MIA", "ORD", Time{5, 0}),
        Flight("DU391", "ORD", "ATL", Time{6, 15}),
        Flight("JA535", "ATL", "DFW", Time{7, 30}),
        Flight("PZ805", "DFW", "DEN", Time{8, 45}),
        Flight("BT196", "DEN", "SFO", Time{10, 0}),
        Flight("TC677", "SFO", "SEA", Time{11, 15}),
        Flight("CJ101", "SEA", "LAS", Time{12, 30}),
        Flight("EO463", "LAS", "JFK", Time{13, 45}),
    };


   Flight::magic(flights, "SEA");

    return 0;
}
