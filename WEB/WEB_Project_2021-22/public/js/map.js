
let map;
let markers = [];
let markerData = [];
const startingPos = { lat: 38.2359522, lng: 21.7374126 };

function initMap() {
  const styles =
  [
    {
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#1d2c4d"
        }
      ]
    },
    {
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#8ec3b9"
        }
      ]
    },
    {
      "elementType": "labels.text.stroke",
      "stylers": [
        {
          "color": "#1a3646"
        }
      ]
    },
    {
      "featureType": "administrative",
      "elementType": "geometry",
      "stylers": [
        {
          "visibility": "off"
        }
      ]
    },
    {
      "featureType": "administrative.country",
      "elementType": "geometry.stroke",
      "stylers": [
        {
          "color": "#4b6878"
        }
      ]
    },
    {
      "featureType": "administrative.land_parcel",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#64779e"
        }
      ]
    },
    {
      "featureType": "administrative.province",
      "elementType": "geometry.stroke",
      "stylers": [
        {
          "color": "#4b6878"
        }
      ]
    },
    {
      "featureType": "landscape.man_made",
      "elementType": "geometry.stroke",
      "stylers": [
        {
          "color": "#334e87"
        }
      ]
    },
    {
      "featureType": "landscape.natural",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#023e58"
        }
      ]
    },
    {
      "featureType": "poi",
      "stylers": [
        {
          "visibility": "off"
        }
      ]
    },
    {
      "featureType": "poi",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#283d6a"
        }
      ]
    },
    {
      "featureType": "poi",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#6f9ba5"
        }
      ]
    },
    {
      "featureType": "poi",
      "elementType": "labels.text.stroke",
      "stylers": [
        {
          "color": "#1d2c4d"
        }
      ]
    },
    {
      "featureType": "poi.park",
      "elementType": "geometry.fill",
      "stylers": [
        {
          "color": "#023e58"
        }
      ]
    },
    {
      "featureType": "poi.park",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#3C7680"
        }
      ]
    },
    {
      "featureType": "road",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#304a7d"
        }
      ]
    },
    {
      "featureType": "road",
      "elementType": "labels.icon",
      "stylers": [
        {
          "visibility": "off"
        }
      ]
    },
    {
      "featureType": "road",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#98a5be"
        }
      ]
    },
    {
      "featureType": "road",
      "elementType": "labels.text.stroke",
      "stylers": [
        {
          "color": "#1d2c4d"
        }
      ]
    },
    {
      "featureType": "road.highway",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#2c6675"
        }
      ]
    },
    {
      "featureType": "road.highway",
      "elementType": "geometry.stroke",
      "stylers": [
        {
          "color": "#255763"
        }
      ]
    },
    {
      "featureType": "road.highway",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#b0d5ce"
        }
      ]
    },
    {
      "featureType": "road.highway",
      "elementType": "labels.text.stroke",
      "stylers": [
        {
          "color": "#023e58"
        }
      ]
    },
    {
      "featureType": "transit",
      "stylers": [
        {
          "visibility": "off"
        }
      ]
    },
    {
      "featureType": "transit",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#98a5be"
        }
      ]
    },
    {
      "featureType": "transit",
      "elementType": "labels.text.stroke",
      "stylers": [
        {
          "color": "#1d2c4d"
        }
      ]
    },
    {
      "featureType": "transit.line",
      "elementType": "geometry.fill",
      "stylers": [
        {
          "color": "#283d6a"
        }
      ]
    },
    {
      "featureType": "transit.station",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#3a4762"
        }
      ]
    },
    {
      "featureType": "water",
      "elementType": "geometry",
      "stylers": [
        {
          "color": "#0e1626"
        }
      ]
    },
    {
      "featureType": "water",
      "elementType": "labels.text.fill",
      "stylers": [
        {
          "color": "#4e6d70"
        }
      ]
    }
  ]
  map = new google.maps.Map(document.getElementById("map"), {
    center: startingPos,
    zoom: 15,
    styles : styles,
    disableDefaultUI: true
  });
  let infoWindow = new google.maps.InfoWindow();

  const locationButton = document.createElement("button");

  locationButton.textContent = "Pan to Current Location";
  locationButton.classList.add("custom-map-control-button");
  map.controls[google.maps.ControlPosition.TOP_CENTER].push(locationButton);
  locationButton.addEventListener("click", () => {
    // Try HTML5 geolocation.
    if (navigator.geolocation) {
      navigator.geolocation.getCurrentPosition(
        (position) => {
          const pos = {
            lat: position.coords.latitude,
            lng: position.coords.longitude,
          };

          infoWindow.setPosition(pos);
          infoWindow.setContent("Location found.");
          infoWindow.open(map);
          map.setCenter(pos);
        },
        () => {
          handleLocationError(true, infoWindow, map.getCenter());
        }
      );
    } else {
      // Browser doesn't support Geolocation
      handleLocationError(false, infoWindow, map.getCenter());
    }
  });
}

function handleLocationError(browserHasGeolocation, infoWindow, pos) {
  infoWindow.setPosition(pos);
  infoWindow.setContent(
    browserHasGeolocation
      ? "Error: The Geolocation service failed."
      : "Error: Your browser doesn't support geolocation."
  );
  infoWindow.open(map);
}

function makeMarker(){
  
  //delete all the previous markers
  deleteMarkers()

  //the user's searching tags
  var tags = document.getElementById('findPlaces').value.split(' ')
  
  //get day and hour, the day number does not correspond exactly to the database number
  var date = new Date();
  var day = date.getDay() - 1;
  if(day == -1){ day = 6; }

  //find the next 2 hours
  var firstHour = date.getHours() + 1
  if(firstHour > 23) firstHour = 0
  var secondHour = firstHour + 1

  //get the data from db to map
  fetch("http://localhost:3000/Login/user.json")
  .then(r => r.json()) 
  .then(data => {
    for(let i=0; i<data.length; i++){
      
      //make every marker possible, with the keyword everything
      if(tags[0] == 'everything'){
        
        //get the exact popularity of the place for the next 2 hours
        const firstHourPopularity = data[i].populartimes[day].data[firstHour]
        const secondHourPopularity = data[i].populartimes[day].data[secondHour]
        //averagePopularity of the next 2 hours
        const averagePopularity = (firstHourPopularity + secondHourPopularity)/2

        const contentString = '<p>Name: ' + data[i].name + '</p>' 
        + '<p>address: ' + data[i].address + '</p>' 
        + '<p>rating: ' + data[i].rating + '</p>'
        + '<p>averagePopularity: ' + averagePopularity + '% </p>'
        + '<p>tags: #' + data[i].types.join(', #') + '</p>';

        const window = new google.maps.InfoWindow({
          content: contentString,
        });
      
        //make the marker
        const marker = setMarker(data[i], averagePopularity);
        //put all the markers in an array so I can delete them
        markers.push(marker);
      
        //button for closing window
        marker.addListener("click", () => {
          window.open({
            anchor: marker,
            map,
            shouldFocus: false
          });
        });

      }else{ //make the markers for the places the user wants
      // circle through the type array on db
        data[i].types.forEach(type => {
          // circle through the given tags
          tags.forEach(tag => {
            // if the type wants this type make the marker 
            if(type == tag){

              //get the exact popularity of the place for the next 2 hours
              const firstHourPopularity = data[i].populartimes[day].data[firstHour]
              const secondHourPopularity = data[i].populartimes[day].data[secondHour]
              //averagePopularity of the next 2 hours
              const averagePopularity = (firstHourPopularity + secondHourPopularity)/2
              console.log('firsthour : ' + firstHour + ' secondHour : ' + secondHour + ' averagePopularity : ' + averagePopularity);

              const contentString = '<p>Name: ' + data[i].name + '</p>' 
              + '<p>address: ' + data[i].address + '</p>' 
              + '<p>rating: ' + data[i].rating + '</p>'
              + '<p>averagePopularity: ' + averagePopularity + '% </p>'
              + '<p>tags: #' + data[i].types.join(', #') + '</p>';

              const window = new google.maps.InfoWindow({
                content: contentString,
              });
            
              //make the marker
              const marker = setMarker(data[i], averagePopularity);
              //put all the markers in an array so I can delete them
              markers.push(marker);
            
              //button for closing window
              marker.addListener("click", () => {
                window.open({
                  anchor: marker,
                  map,
                  shouldFocus: false
                });
              });
            }
          });
        });
      }
    }
  }).catch((error) => console.log(error));
}

function setMarker(place, averagePopularity){
  
  if (averagePopularity <= 32){
    const marker = new google.maps.Marker({
      position: { lat: place.coordinates.lat, lng: place.coordinates.lng },
      icon: '../../icon/map-green.png',
      map
    });
    return marker;
  }else if(averagePopularity > 32 && averagePopularity <= 65){
    const marker = new google.maps.Marker({
      position: { lat: place.coordinates.lat, lng: place.coordinates.lng },
      icon: '../../icon/map-orange_2.png',
      map
    });
    return marker;
  }else{
    const marker = new google.maps.Marker({
      position: { lat: place.coordinates.lat, lng: place.coordinates.lng },
      icon: '../../icon/map-red.png',
      map
    });
    return marker;
  }
}

function deleteMarkers (){
  for (let i = 0; i<markers.length; i++){
    markers[i].setMap(null);
  }
  markers = [];
}