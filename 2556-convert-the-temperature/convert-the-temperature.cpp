class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>tem;
        double Kelvin = celsius + 273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;
        tem.push_back(Kelvin);
        tem.push_back(Fahrenheit);
        return tem;


        
    }
};