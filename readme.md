# Food Item Calorie Calculator

## Overview

The Food Item Calorie Calculator is a C++ application that allows users to input food item details and calculate the total calories based on the protein, carbohydrate, and fat content. The program defines a `FoodItem` class with attributes for name, calories, grams of fat, grams of carbohydrates, and grams of protein. It also includes functionality for user interaction to gather and display food item information.

## Features

- **Define Food Item:** Create a `FoodItem` class with attributes for name, calories, grams of fat, grams of carbohydrates, and grams of protein.
- **Constructors:** Provide multiple constructors to create `FoodItem` objects with varying levels of detail (name only, name and calories, or all details).
- **Input Validation:** Implement getter and setter methods to control access and validate inputs (e.g., calories cannot be negative).
- **Calculate Calories:** Use a friend function to calculate total calories based on protein and carbohydrate content.
- **User Interaction:** Continuously prompt users for input until they decide to exit, displaying detailed food item information along the way.

## Requirements

To compile and run the project, you need:

- A C++ compiler (e.g., g++, clang++)
- Basic knowledge of C++ programming concepts

## Code Structure

The project consists of the following key components:

1. **FoodItem Class**
   - Manages individual food item attributes: `name`, `calories`, `grams_of_fats`, `grams_of_proteins`, and `grams_of_carbohydrates`.
   - Provides constructors, getter, and setter methods for each attribute.

2. **Calculate Calories Function**
   - A friend function that calculates total calories based on the food item's protein and carbohydrate content.

3. **Main Function**
   - Interacts with the user to gather food item details and display the calculated calories.

## Usage

1. Compile the code using a C++ compiler:

   ```bash
   g++ -o FoodItemCalorieCalculator main.cpp
   
## Sample
Enter name of Food Item (or 'exit' to 'quit'):

Enter Proteins (in grams):

Enter Carbohydrates (in grams):

Enter Fat content (in grams):
Enter name of Food Item (or 'exit' to 'quit'): Apple
Enter Proteins(in grams): 0.3
Enter Carbohydrates(in grams): 14
Enter Fat content (in grams): 0.2


Name: Apple
Protein Quantity: 0.3
Carbohydrate Quantity: 14
Calculated Calories: 56.6

Food item details displayed successfully!
