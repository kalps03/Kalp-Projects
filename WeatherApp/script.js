const APIKEY = "8ad358e4028774f95b311d4c8b44a790";
const APIURL = "https://api.openweathermap.org/data/2.5/weather?units=imperial&q=";
const search = document.querySelector(".search input");
const searchButton = document.querySelector(".search button");
const weatherIcon = document.querySelector(".weather-icon");

async function checkingWeather(city) {
    const response = await fetch(APIURL + city + `&appid=${APIKEY}`);

    if (response.status == 404) {
        document.querySelector(".Error").style.display = "block";
        document.querySelector(".weather").style.display = "none";
    } else {

    var data = await response.json();

    document.querySelector(".city").innerHTML = data.name;
    document.querySelector(".temp").innerHTML = Math.round(data.main.temp) + "°";
    document.querySelector(".humidity").innerHTML = data.main.humidity + "%";
    document.querySelector(".wind").innerHTML = data.wind.speed + "km/h";

    const weatherConditionMap = {
        Clouds: "WeatherAppImages/clouds.png",
        Drizzle: "WeatherAppImages/drizzle.png",
        Mist: "WeatherAppImages/misty.png",
        Rain: "WeatherAppImages/rain.png",
        Clear: "WeatherAppImages/sunny.png",
    };

    if (data.weather[0].main in weatherConditionMap) {
        weatherIcon.src = weatherConditionMap[data.weather[0].main];
    } else {
        weatherIcon.src = "WeatherAppImages/sunny.png";
    }


    document.querySelector(".weather").style.display = "block";
    document.querySelector(".Error").style.display = "none";
    }
}

searchButton.addEventListener("click", ()=> {
    checkingWeather(search.value);
});



  