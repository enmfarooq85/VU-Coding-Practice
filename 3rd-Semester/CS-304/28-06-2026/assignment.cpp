#include "iostream"
#include "string"
using namespace std;

class TrafficSignal
{
private:
    string signalId;
    string location;

protected:
    int greenDuration;
    int redDuration;

public:
    TrafficSignal()
    {
        signalId = "";
        location = "";
        greenDuration = 0;
        redDuration = 0;
    };

    void virtual displayStatus(){

    };

    // getter functions:
    string getSignalId()
    {
        return signalId;
    }

    string getLocation()
    {
        return location;
    };

    void setSignalId(string sgId)
    {
        signalId = sgId;
    }
    void setLocation(string loc)
    {
        location = loc;
    }
};

class VehicleSensorSignal : public TrafficSignal
{
private:
    int vehicleCount;

public:
    VehicleSensorSignal()
    {
        setLocation("Main Street");
        setSignalId("507");
        vehicleCount = 25;
        greenDuration = 60;
        redDuration = 40;
    }

    void displayStatus() override
    {
        cout << "Vehicle Sensor Signal Information " << endl;
        cout << "Signal ID: " << getSignalId() << endl;
        cout << "Location: " << getLocation() << endl;
        cout << "Green Duration: " << greenDuration << endl;
        cout << "Red Duration: " << redDuration << endl;
        cout << "Vehicle Count: " << vehicleCount << endl;
        cout << endl;
    };
    float calculateEfficiency()
    {
         return ((float)greenDuration /
            (greenDuration + redDuration)) * 100;
    };
};

class PedistrianSensorSignal : public TrafficSignal
{
private:
    int pedisterianCount;
    bool emergencyMode;

public:
    PedistrianSensorSignal()
    {
        setLocation("Central Park");
        setSignalId("507");
        greenDuration = 50;
        redDuration = 60;
        pedisterianCount = 30;
        emergencyMode = true;
    };

    void displayStatus() override
    {

        cout << "Pedisterian Sensor Signal Information " << endl;
        cout << "Signal ID: " << getSignalId() << endl;
        cout << "Location: " << getLocation() << endl;
        cout << "Green Duration: " << greenDuration << endl;
        cout << "Red Duration: " << redDuration << endl;
        cout << "Pedisterian Count: " << pedisterianCount << endl;
        cout << "Emeregency Mode: " << (emergencyMode == true ? "True" : "False") << endl;
        cout << endl;
    };

    int getGreenDuration()
    {
        return greenDuration;
    };
};

int main()
{
    VehicleSensorSignal v1;
    PedistrianSensorSignal p1;

    v1.displayStatus();
    p1.displayStatus();

    cout << "Signal Efficiency: " << v1.calculateEfficiency() << "%" << endl;
    cout << "Green Duration of Pedisterian Signal: " << p1.getGreenDuration() << endl;

    cout << endl;

    cout << "----------------------" << endl;

    return 0;
};