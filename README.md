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
