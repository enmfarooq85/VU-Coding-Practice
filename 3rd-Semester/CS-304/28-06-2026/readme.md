# Smart Traffic Signal Simulation

## Problem Statement

Design a simulation of **Smart Traffic Signals** in a futuristic city. Each traffic signal adapts its behavior based on:

- Vehicle type
- Time of day
- Traffic density

The program must demonstrate the following Object-Oriented Programming (OOP) concepts:

- Abstract Classes
- Inheritance
- Public and Protected Members
- Function Overriding

---

# Class Design

## 1. Base Class: `TrafficSignal` (Abstract Class)

### Private Data Members

- `string signalID`
- `string location`

### Protected Data Members

- `int greenDuration`
- `int redDuration`

### Public Members

- Constructor to initialize all attributes.
- Pure virtual function:

```cpp
virtual void displayStatus() = 0;
```

- Getter functions for all required attributes.

---

## 2. Derived Class: `VehicleSensorSignal`

**Inheritance:** Public Inheritance

```cpp
class VehicleSensorSignal : public TrafficSignal
```

### Private Data Member

- `int vehicleCount`

### Public Members

- Constructor to initialize all attributes.
- Override the `displayStatus()` function to display:
  - Signal ID
  - Location
  - Green Duration
  - Red Duration
  - Vehicle Count
- Implement the following function:

```cpp
float calculateEfficiency();
```

### Formula

```text
Efficiency = (Green Duration / (Green Duration + Red Duration)) × 100
```

---

## 3. Derived Class: `PedestrianSensorSignal`

**Inheritance:** Public Inheritance

```cpp
class PedestrianSensorSignal : public TrafficSignal
```

### Private Data Members

- `int pedestrianCount`
- `bool emergencyMode`

### Public Members

- Constructor to initialize all attributes.
- Override the `displayStatus()` function to display:
  - Signal ID
  - Location
  - Green Duration
  - Red Duration
  - Pedestrian Count
  - Emergency Mode
- Implement the following function:

```cpp
int getGreenDuration();
```

This function should return the protected member:

```cpp
greenDuration
```

---

# Main Program

Perform the following tasks:

1. Create one object of:

   - `VehicleSensorSignal`
   - `PedestrianSensorSignal`

2. Call:

```cpp
displayStatus()
```

for both objects.

3. Call:

```cpp
calculateEfficiency()
```

using the `VehicleSensorSignal` object and display the calculated efficiency.

4. Call:

```cpp
getGreenDuration()
```

using the `PedestrianSensorSignal` object and display the returned value.

---

# Input Dataset

Use the following predefined values exactly as given.

## Signal 1 — Vehicle Sensor Signal

| Attribute | Value |
|-----------|-------|
| Signal ID | `"V789"` *(Replace 789 with the last three digits of your VU ID)* |
| Location | `"Main Street"` |
| Green Duration | `60` |
| Red Duration | `40` |
| Vehicle Count | `25` |

---

## Signal 2 — Pedestrian Sensor Signal

| Attribute | Value |
|-----------|-------|
| Signal ID | `"P789"` *(Replace 789 with the last three digits of your VU ID)* |
| Location | `"Central Park"` |
| Green Duration | `50` |
| Red Duration | `60` |
| Pedestrian Count | `30` |
| Emergency Mode | `true` |

---

## Sample Output

![](./Screenshot%20from%202026-06-28%2015-31-23.png)