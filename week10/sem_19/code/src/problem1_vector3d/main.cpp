#include <iostream>
#include <set>
#include <cmath>
#include <random>

class Vector3D
{
    public:
    /* class methods */
    
    // Task 1, empty constructor
    Vector3D(): _x(0.0), _y(0.0), _z(0.0){};
    
    // Task 2, constructor with arguments
    Vector3D(double x, double y, double z):_x(x), _y(y), _z(z){};
    
    // Task 3, copy constructor
    Vector3D(const Vector3D& v2):_x(v2._x), _y(v2._y), _z(v2._z){};
    
    
    // Task 4. Getters and setters (define for other attributes)
    // getter
    double getX() const
    {
        return _x;
    }

    double getY() const
    {
        return _y;
    }
    
    double getZ() const
    {
        return _z;
    }
    
    // setter
    void setX(double x)
    {
        _x = x;
    }
    
    void setY(double y)
    {
        _y = y;
    }

    void setZ(double z)
    {
        _z = z;
    }
    
    // Task 8. Magnitude
    double magnitude() const{
        return std::sqrt(_x*_x + _y*_y + _z*_z);
    };
    
    private:
    /* attributes */
    double _x;
    double _y;
    double _z;
    
};

// Task 5. Operator +
// (can be defined here or inside the class)
Vector3D operator+ (const Vector3D& v1, const Vector3D& v2){
    Vector3D v3;
    v3.setX(v1.getX()+v2.getX());
    v3.setY(v1.getY()+v2.getY());
    v3.setZ(v1.getZ()+v2.getZ());
    return v3;
};

// Task 6. Operator * (dot product)
// (can be defined here or inside the class)
double operator* (const Vector3D& v1, const Vector3D& v2){
    return v1.getX()*v2.getX() + v1.getY()*v2.getY() + v1.getZ()*v2.getZ();
};

// Task 7. Operator * (scalar product)
// (can be defined here or inside the class)
Vector3D operator* (const Vector3D& v1, double d){
    Vector3D v2;
    v2.setX(v1.getX()*d);
    v2.setY(v1.getY()*d);
    v2.setZ(v1.getZ()*d);
    return v2;
};

// Task 9. Operator <
// (can be defined here or inside the class)
bool operator<(const Vector3D& v1, const Vector3D& v2){
    return v1.magnitude() < v2.magnitude();
};


// Task 10. Operator << (printing)
// (can't be defined inside the class)
// Use definition from previous workshops
std::ostream& operator<< (std::ostream& out, Vector3D& v1)
{
    // read vector data
    out << "(" << v1.getX() << ", " << v1.getY() << ", " << v1.getZ() << ")";
    return out;
}

// Task 11. Operator >> (reading)
std::istream& operator>> (std::istream& in, Vector3D& v1)
{
    // read vector data
    double x;
    double y;
    double z;
    in >> x >> y >> z;

    v1.setX(x);
    v1.setY(y);
    v1.setZ(z);

    return in;
}


void fillMultiset(size_t n, std::multiset<Vector3D>& mset)
{
    // generating random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(-1, 1);
    
    
    // loop, add a new element to the multiset n times
    
    double newRandomNumber = distr(gen);
    
}


int main()
{

    // Final task
    // Part 1. Fill a multiset of Vector3D objects with random vectors.
    std::multiset<Vector3D> s;
    const size_t setSize = 100;
    fillMultiset(100, s);
    
    
    // Part 2. Print all elements of the multiset
    // printMultiSet(s);
    
    // Part 3. Calculate and print the average of all magnitudes of vectors
    // double averageMagnitude = calcAverageMagnitude(s);
    // std::cout << "Average magnitude is " << averageMagnitude << std::endl;
    
    return 0;
}
