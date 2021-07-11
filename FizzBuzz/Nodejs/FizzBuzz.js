process.stdin.resume();
process.stdin.setEncoding('utf8');

process.stdout.write("n = ");
var lines = "";
var reader = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

reader.on('line', (line) => {
  lines = line;
  console.log("");
  var n = lines;
  for(var i = 0; i < n; i++) {
  	if ((i+1) % 15 == 0) {
  		console.log("Fizz Buzz");
  	} else if ((i+1) % 5 == 0) {
  		console.log("Buzz");
  	} else if ((i+1) % 3 == 0) {
  		console.log("Fizz");
  	} else {
  		console.log("" + (i+1));
  	}
  }
  console.log("");
  process.exit();
});

/*
reader.on('close', () => {
  var n = lines;
});
//*/