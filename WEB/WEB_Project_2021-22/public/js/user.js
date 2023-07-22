/* When the user clicks on the button,
toggle between hiding and showing the dropdown content */
function openDropdown(from) {
  const menu = document.getElementById('menu')
  const map = document.getElementById('item-map')
  const nervous = document.getElementById('item-nervous')
  const patient = document.getElementById('item-patient')
  const edit = document.getElementById('item-edit')

  closeEverything(menu, map, nervous, patient, edit)
  menu.style.display = 'block'
 
  switch(from){
    case 'map':
      map.style.display = 'block'
    break;
    case 'nervous':
      nervous.style.display = 'block'
    break;
    case 'patient':
      patient.style.display = 'block'
    break;
    case 'edit':
      edit.style.display = 'block'
    break;
  }
  delay(100).then(() => menu.scrollIntoView({ behavior: 'smooth', block: 'center' }));
}

function closeEverything(menu, map, nervous, patient, edit){

  menu.style.display = 'none'
  map.style.display = 'none'
  nervous.style.display = 'none'
  patient.style.display = 'none'
  edit.style.display = 'none'
}

function delay(time) {
  return new Promise(resolve => setTimeout(resolve, time));
}

function openHistoryLogin(){
  const historyListLogin = document.getElementById('history-links-login')
  const historyListCovid = document.getElementById('history-links-covid')
  if(historyListCovid.style.display == 'block'){
    historyListCovid.style.display = 'none'
  }
  if (historyListLogin.style.display == 'block'){
    historyListLogin.style.display = 'none'
  }else{
    historyListLogin.style.display = 'block'
  }
  
}

function openHistoryCovid(){
  const historyListLogin = document.getElementById('history-links-login')
  const historyListCovid = document.getElementById('history-links-covid')
  if(historyListLogin.style.display == 'block'){
    historyListLogin.style.display = 'none'
  }
  if (historyListCovid.style.display == 'block'){
    historyListCovid.style.display = 'none'
  }else{
    historyListCovid.style.display = 'block'
  }
  
}
//api key: AIzaSyAPmkodwFVGpcTcpFyUbeDxaAwYYlUJjnM
