#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) 
{
  return (fahrenheit - 32) * 5/9;
}

int main() 
{
  double fahrenheit, celsius;
  
  cout << "Enter temperature in Fahrenheit: ";
  cin >> fahrenheit;
  
  // Convert Fahrenheit to Celsius
  celsius = fahrenheitToCelsius(fahrenheit);
  
  cout << "Temperature in Celsius: " << celsius << endl;
  
  return 0;
}