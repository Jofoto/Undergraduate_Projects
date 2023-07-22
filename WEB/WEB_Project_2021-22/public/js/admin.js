/* When the user clicks on the button,
toggle between hiding and showing the dropdown content */
function myFunctionA(from) {
  var menu = document.getElementById('menu')
  var upload = document.getElementById('item-upload')
  var piechart = document.getElementById('item-piechart')
  
  closeEverything(menu, upload, piechart)

  menu.style.display = 'block'

  switch(from){
    case 'upload':
      upload.style.display = 'block'
      
      //upload data button
      const uploadInput = document.getElementById('upload_data');
      const uploadTextarea = document.getElementById('previewUpload')
      uploadInput.addEventListener('change', function(){
        document.getElementById("uploadBtn").disabled = false;
        uploadTextarea.style.display = 'block'
        const reader = new FileReader();

        reader.onload = function(){
          uploadTextarea.innerHTML = reader.result
        }

        reader.onerror = function(){
          console.log(reader.error);
        };
      
        reader.readAsText(uploadInput.files[0])


      }, false)

      //update data button
      const updateInput = document.getElementById('update_data');
      const updateTextarea = document.getElementById('previewUpdate')
      updateInput.addEventListener('change', function(){
        document.getElementById("updateBtn").disabled = false;
        updateTextarea.style.display = 'block'
        const reader = new FileReader();

        reader.onload = function(){
          updateTextarea.innerHTML = reader.result
        }

        reader.onerror = function(){
          console.log(reader.error);
        };
      
        reader.readAsText(updateInput.files[0])

        
      }, false)
    break;
    case 'piechart':
      
      piechart.style.display = 'block'
      console.log('search pressed')
    break;
  }

  

  delay(100).then(() => menu.scrollIntoView({ behavior: 'smooth', block: 'center' }));
}

function delay(time) {
  return new Promise(resolve => setTimeout(resolve, time));
}

function closeEverything(menu, upload, piechart){
  menu.style.display = 'none'
  upload.style.display = 'none'
  piechart.style.display = 'none'
}

//button for total number of visits
async function getVisits(){
  const totalVisits = document.getElementById('getVisits')
  if(totalVisits.style.display=='block'){
    totalVisits.style.display ='none'
  }else{
    totalVisits.style.display ='block'

  await fetch("http://localhost:3000/Login/logs.json")
  .then(r => r.json())
  .then(logs =>  {
    totalVisits.innerHTML = logs.length
  })

  }
}

//button for total number of covid cases that have been registered
async function getCases(){
  const totalCases = document.getElementById('getCases')
  if(totalCases.style.display=='block'){
    totalCases.style.display ='none'
  }else{
    totalCases.style.display ='block'

    fetch("http://localhost:3000/Login/covidCases.json")
    .then(r => r.json())
    .then(covidCases => {
      totalCases.innerHTML = covidCases.length
    })

  }
}

async function activeCases(){
  const activeCases = document.getElementById('activeCases')
  if(activeCases.style.display=='block'){
    activeCases.style.display ='none'
  }else{
    activeCases.style.display ='block'
    //get the logs cases
    fetch("http://localhost:3000/Login/logs.json")
    .then(r => r.json())
    .then(logs =>  {
      //get the covid cases
      fetch("http://localhost:3000/Login/covidCases.json")
      .then(r => r.json())
      .then(covidCases => {
        //logs = login of every user
        //covidCases = all of covid cases register from the users

        logs.forEach(log => {
          covidCases.forEach(covidCase => {
            //check through all covid cases and logs
            if(log.user_id === covidCase.user_id){ //checkarei an ta user_id einai idia gia na brw meta an exei mpei sto date pou theloume

            }
          });
        });

      })
    })

  }
}

//den zhteitai, apla o num of places
async function getPlaces(){
  const totalPlaces = document.getElementById('getPlaces')
  if(totalPlaces.style.display == 'block'){
    totalPlaces.style.display = 'none'
  }else{
    totalPlaces.style.display = 'block'
    fetch("http://localhost:3000/Login/user.json")
    .then(r => r.json())
    .then(places => {
      totalPlaces.innerHTML = 'Number of places: ' + places.length
    })
  }
}



//for the number of visits
async function placeCategory(places, visit_registrations){
  const placeCategoryV = document.getElementById('placeCategory')
  
  if(placeCategoryV.style.display == 'block'){
    placeCategoryV.style.display = 'none'
  }else{
    placeCategoryV.style.display = 'block'
    fetch("http://localhost:3000/Login/user.json")
    .then(r => r.json())
    .then(places => {
      fetch("http://localhost:3000/Login/visitReg.json")
      .then(r => r.json())
      .then(visit_registrations =>{
        fetch("http://localhost:3000/Login/logs.json")
        .then(r => r.json())
        .then(logs =>{
          logs.forEach(log=>{
            visit_registrations.forEach(visitRegs => { 
              if(log.user_id === visitRegs.user_id){

      
                for(var i=0; i < places.length && visit_registrations.length; i++){
                placeCategoryV.innerHTML = 'P.O.I. type: ' + places[i].types + '\n' + 'P.O.I. Total visits: ' + visit_registrations[i].crowd_number; //crowd num is wrong
                console.log(places[i].types)
                }
              }
            })
          })
        })
      })
    })
  }
}

//for the number of cases

async function placeCategoryCase(places, covidCases){
  const placeCategoryC = document.getElementById('placeCategoryCase')
  if(placeCategoryC.style.display == 'block'){
    placeCategoryC.style.display = 'none'
  }else{
    placeCategoryC.style.display = 'block'
    fetch("http://localhost:3000/Login/user.json")
    .then(r => r.json())
    .then(places => {
      fetch("http://localhost:3000/Login/covidCases.json")
      .then(r => r.json())
      .then(covidCases =>{
        fetch("http://localhost:3000/Login/logs.json")
        .then(r => r.json())
        .then(logs =>{
          logs.forEach(log=>{
            covidCases.forEach(covidReg => { 
              if(log.user_id === covidReg.user_id){

      
                for(var i=0; i < places.length && covidCases.length; i++){
                placeCategoryC.innerHTML = 'P.O.I. type: ' + places[i].types + '\n' + 'P.O.I. Total visits: ' + covidCases[i].length;  
                }
              }
            })
          })
        })
      })
    })
  }
}

//me auto pairneis ola ta login pou exoun ginei apo users
fetch("http://localhost:3000/Login/logs.json")
.then(r => r.json())
.then(logs =>  {
  //edw mesa mporeis na pareis ta logs me thn onomasia logs kai na baleis teleia gia na xrhsimopoihseis to otidhpote

})

//me auto pairneis ola ta covid cases pou exoun dhlwthei apo users
fetch("http://localhost:3000/Login/covidCases.json")
  .then(r => r.json())
  .then(covidCases => {
    //edw mesa mporeis na pareis ta covidCases me thn onomasia covidCases kai na baleis teleia gia na xrhsimopoihseis to otidhpote
})

//me auto pairneis ola ta visit_registrations pou exoun ginei apo user
fetch("http://localhost:3000/Login/visitReg.json")
  .then(r => r.json())
  .then(visit_registrations => {
    //edw mesa mporeis na pareis ta visit_registrations me thn onomasia covidCases kai na baleis teleia gia na xrhsimopoihseis to otidhpote
})

//me auto pairneis ola ta places
fetch("http://localhost:3000/Login/user.json")
  .then(r => r.json())
  .then(places => {
    //edw mesa mporeis na pareis ta places me thn onomasia places kai na baleis teleia gia na xrhsimopoihseis to otidhpote
})

