# Weather Analytics Tool 🌦️
### BSc Information Technology (Network and Security Engineering) - Year 1
**Institution:** Eduvos | **Module:** Procedural Programming

## Overview
This project is a statistical analysis tool written in C++ that processes meteorological data. It allows users to input daily temperatures for a week and algorithmically determines key weather statistics.

## Features
* **Data Collection:** Validates and stores user input for 7 days.
* **Error Handling:** Prevents crashes when non-numeric data is entered.
* **Statistical Analysis:** Calculates Average, Lowest, and Highest temperatures.
* **Data Visualization:** Displays a formatted report of the week's data.

## Concepts Demonstrated
* **Arrays:** Storing fixed-size datasets.
* **Loops:** Iterating through data for validation and calculation.
* **Accumulators:** Calculating sums for averages.
* **Min/Max Algorithms:** Logic for finding extreme values in a dataset.

## How to Run
This is a standalone C++ file. You can compile it using G++, Clang, or MSVC.

**Using Terminal (G++):**
1.  Compile the code:
    ```bash
    g++ WeatherAnalytics.cpp -o weather_app
    ```
2.  Run the application:
    ```bash
    ./weather_app
    ```
    *(On Windows, run `weather_app.exe`)*
