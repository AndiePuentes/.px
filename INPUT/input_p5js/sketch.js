// serial communication between a microcontroller with a switch on pin 2
// arduino code can be found here : https://gist.github.com/shfitz/7fd206b7db4e0e6416a443d61c8c988e

let serial; // variable for the serial object
let latestData = "waiting for data"; // variable to hold the data

function setup() {
  createCanvas(windowWidth, windowHeight);
  // serial constructor
  serial = new p5.SerialPort();
  // get a list of all connected serial devices
  serial.list();
  // serial port to use - you'll need to change this
  serial.open('/dev/tty.usbmodem1423201');
  // callback for when the sketchs connects to the server
  serial.on('connected', serverConnected);
  // callback to print the list of serial devices
  serial.on('list', gotList);
  // what to do when we get serial data
  serial.on('data', gotData);
  // what to do when there's an error
  serial.on('error', gotError);
  // when to do when the serial port opens
  serial.on('open', gotOpen);
  // what to do when the port closes
  serial.on('close', gotClose);
}

function serverConnected() {
  console.log("Connected to Server");
}

// list the ports
function gotList(thelist) {
  console.log("List of Serial Ports:");

  for (let i = 0; i < thelist.length; i++) {
    console.log(i + " " + thelist[i]);
  }
}

function gotOpen() {
  console.log("Serial Port is Open");
}

function gotClose() {
  console.log("Serial Port is Closed");
  latestData = "Serial Port is Closed";
}

function gotError(theerror) {
  console.log(theerror);
}

// when data is received in the serial buffer

function gotData() {
  let currentString = serial.readLine(); // store the data in a variable
  trim(currentString); // get rid of whitespace
  if (!currentString) return; // if there's nothing in there, ignore it
  console.log(currentString); // print it out
  latestData = currentString; // save it to the global variable
}

function draw() {
  background(255, 255, 255);
  fill(0, 0, 0);
  text(latestData, 10, 10); // print the data to the sketch

  // in this example, we are reciving a 0 and a 1
  // if the button is not pressed we get a 0
  if (latestData == 0) {
    ellipse(width / 2, height / 2, 100, 100);
  } else { // if it is pressed, we get a 1
    rectMode(CENTER);
    rect(width / 2, height / 2, 100, 100);
  }
}