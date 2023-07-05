# Weather Application - Project Documentation

This README provides an overview of how the Weather Application project was implemented, including the technologies used, project structure, and setup instructions.

## Project Overview

The Weather Application is a web-based application that allows users to search for weather information based on a specific city. It retrieves weather data from the OpenWeatherMap API and displays it in a user-friendly interface. The application is built using HTML, CSS, and JavaScript.

## Technologies Used

The following technologies were used in the implementation of the Weather Application:

- HTML: Used for creating the structure and layout of the application.
- CSS: Used for styling the application and defining the visual appearance.
- JavaScript: Used for handling the functionality and interactivity of the application.
- OpenWeatherMap API: Used to retrieve weather data for a specific city.

## Project Structure

The project structure is as follows:


- `index.html`: The HTML file that defines the structure of the Weather Application.
- `styles.css`: The CSS file that contains the styling rules for the application.
- `script.js`: The JavaScript file that handles the functionality and API requests of the application.
- `WeatherAppImages/`: A directory that contains the weather icon images used in the application.
- `README.md`: The documentation file that provides an overview of the project.

## Setup Instructions

To run the Weather Application locally, follow these steps:

1. Clone this repository to your local machine.
2. Open the `index.html` file in a web browser.
3. Enter the name of a city in the search input field.
4. Click the search button or press Enter.
5. The weather information for the specified city will be displayed.
6. If the city is not found or there is an error, an error message will be shown.

To customize the application or modify the API key:

1. Open the project files in a text editor or IDE of your choice.
2. Modify the `styles.css` file to customize the visual appearance of the application.
3. Update the `APIKEY` constant in the `script.js` file with your own OpenWeatherMap API key.
4. Save the changes and follow the setup instructions mentioned above to run the updated application.

# Image Processing Library - Project Documentation

This is a simple image processing library that provides functionality to manipulate RGB images. It allows you to perform various operations such as loading images from files, performing arithmetic operations on images, and scaling image pixel values.

## Features

- Load an image from a file
- Initialize an image from an RGB byte array
- Create a blank RGB image
- Perform arithmetic operations (addition and subtraction) on images
- Multiply two matrices using matrix-matrix dot product
- Scale the pixel values of an image by a given factor

## Getting Started

### Prerequisites

- C compiler
- stb_image library
- stb_image_write library
- stb_image_resize library

### Installation

1. Clone the repository:
- git clone https://github.com/kalps03/Kalp-Projects.git

2. Compile the library:
- gcc -o libimageutil.so -shared -fPIC imageutil.c stb_image.c stb_image_write.c stb_image_resize.c


3. Link the library to your project:
- gcc -o myproject myproject.c -L/path/to/library -limageutil


4. Include the header file in your project:

### Usage

```c

#include "imageutil.h"

#include "imageutil.h"

int main() {
    // Load an image from a file
    int width, height, channels;
    imatrix* image = init_from_file("image.jpg", &width, &height, &channels);

    // Perform image operations
    // ...

    // Save the modified image to a file
    image->write_image_to_rgb(image);
    stbi_write_jpg("output.jpg", width, height, channels, image->rgb_image, 100);

    // Free memory
    free_imatrix(image);

    return 0;
}
```  
# LoginANDRegistrationSystem - Project Documentation

This program implements a simple login system with registration and password recovery functionalities. It allows users to create an account, log in with their credentials, and recover their password if forgotten. The program utilizes file handling to store and retrieve user information.

How to Use:

1. Upon running the program, a menu is displayed with the following options:

        Press 1 to login

        Press 2 to register

        Press 3 if you forgot your password

        Press 4 to exit

2. To log in (option 1):

        Enter your username and password when prompted.

        The program will check if the entered credentials match any records in the userlogindata.txt file.

        If a match is found, you will be logged in, and a success message will be displayed.

        If no match is found, an error message will be displayed, and you will be returned to the main menu.

3. To register a new account (option 2):

        Enter a desired username and password when prompted.

        Your credentials will be added to the userlogindata.txt file.

        A success message will be displayed.

4. To recover your password (option 3):

      You have two options:

        Enter 1 to search for your password by username.

        Enter 2 to return to the main menu.
  
            If you choose to search by username:

            Enter your username when prompted.

            The program will search for your username in the userlogindata.txt file.

            If your username is found, your password will be displayed.

            If your username is not found, an error message will be displayed.

        If you choose to return to the main menu, you will be taken back to the main menu.

4. To exit the program (option 4):

        Enter 4 to exit the program.

        A thank you message will be displayed.

File Structure

    main() function:

      Displays the menu and handles the user's choice.

      Calls corresponding functions based on the user's input.

    login() function:

      Prompts the user to enter their username and password.
      
      Checks if the entered credentials match any records in the userlogindata.txt file.
      
      Displays login success or failure messages accordingly.

    registration() function:

      Prompts the user to enter a new username and password.

      Appends the entered data to the userlogindata.txt file.

      Displays a registration success message.

    forgot() function:

    Provides options for password recovery: search by username or go back to the main menu.

    If searching by username:

      Prompts the user to enter their username.

      Searches for the username in the userlogindata.txt file.

      Displays the corresponding password if the username is found.

      Displays an error message if the username is not found.

Data Storage

    User account information, including usernames and passwords, is stored in a text file named userlogindata.txt. Each line in the file represents a user's credentials, with the username and password separated by a space.

# Calculator - Project Documentation

This is a simple calculator web application built using HTML, CSS, and JavaScript. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Features

- Clear button (AC): Resets the calculator, clearing all operands and operations.
- Delete button (DEL): Removes the last entered digit or decimal point from the current operand.
- Operation buttons: Select the desired arithmetic operation (+, -, *, /).
- Number buttons: Input numbers (0-9) and decimal point (.) for operands.
- Equals button (=): Computes the result of the entered arithmetic expression.
- Output display: Shows the current and previous operands and the selected operation.

## Getting Started

To use the calculator application, follow these steps:

1. Clone the repository or download the source code.
2. Open the `index.html` file in a web browser.

## Usage

1. Click on the number buttons to input digits for the operands.
2. Click on the decimal point button to input decimal numbers.
3. Click on the operation buttons to select the desired arithmetic operation.
4. Click on the equals button to compute the result.
5. Click on the clear button (AC) to reset the calculator.
6. Click on the delete button (DEL) to remove the last entered digit or decimal point.

## Examples

Here are a few examples of using the calculator:

1. Addition:
   - Input: 5 + 7
   - Output: 12

2. Subtraction:
   - Input: 10 - 3
   - Output: 7

3. Multiplication:
   - Input: 4 * 5
   - Output: 20

4. Division:
   - Input: 12 / 3
   - Output: 4
