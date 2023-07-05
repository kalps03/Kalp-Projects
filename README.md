Weather Application - Project Documentation

This README provides an overview of how the Weather Application project was implemented, including the technologies used, project structure, and setup instructions.

Project Overview

The Weather Application is a web-based application that allows users to search for weather information based on a specific city. It retrieves weather data from the OpenWeatherMap API and displays it in a user-friendly interface. The application is built using HTML, CSS, and JavaScript.

Technologies Used

The following technologies were used in the implementation of the Weather Application:

HTML: Used for creating the structure and layout of the application.
CSS: Used for styling the application and defining the visual appearance.
JavaScript: Used for handling the functionality and interactivity of the application.
OpenWeatherMap API: Used to retrieve weather data for a specific city.
Project Structure

The project structure is as follows:

markdown
Copy code
- index.html
- styles.css
- script.js
- WeatherAppImages/
  - cloudy.png
  - drizzle.png
  - misty.png
  - rain.png
  - sunny.png
- README.md
index.html: The HTML file that defines the structure of the Weather Application.
styles.css: The CSS file that contains the styling rules for the application.
script.js: The JavaScript file that handles the functionality and API requests of the application.
WeatherAppImages/: A directory that contains the weather icon images used in the application.
README.md: The documentation file that provides an overview of the project.
Setup Instructions

To run the Weather Application locally, follow these steps:

Clone this repository to your local machine.
Open the index.html file in a web browser.
Enter the name of a city in the search input field.
Click the search button or press Enter.
The weather information for the specified city will be displayed.
If the city is not found or there is an error, an error message will be shown.
To customize the application or modify the API key:

Open the project files in a text editor or IDE of your choice.
Modify the styles.css file to customize the visual appearance of the application.
Update the APIKEY constant in the script.js file with your own OpenWeatherMap API key.
Save the changes and follow the setup instructions mentioned above to run the updated application.
