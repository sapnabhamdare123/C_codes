const girls = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D'];
const rooms = 10;
const girlsPerRoom = 3;

function shuffleArray(array) {
  for (let i = array.length - 1; i > 0; i--) {
    const j = Math.floor(Math.random() * (i + 1));
    [array[i], array[j]] = [array[j], array[i]];
  }
}

function assignRooms() {
  const shuffledGirls = [...girls];
  shuffleArray(shuffledGirls);
  
  const tableBody = document.querySelector('tbody');
  tableBody.innerHTML = '';

  for (let i = 0; i < rooms; i++) {
    const roomGirls = shuffledGirls.splice(0, girlsPerRoom);
    const newRow = document.createElement('tr');
    newRow.innerHTML = `
      <td>Room ${i + 1}</td>
      <td>${roomGirls.join(', ')}</td>
    `;
    tableBody.appendChild(newRow);
  }
}

const shuffleButton = document.getElementById('shuffleButton');
shuffleButton.addEventListener('click', assignRooms);

// Initial assignment on page load
assignRooms();

