# CS 219 Programming Assignment 1

A scalable machine code simulator that currently only supports the addition operator. The addition operator does report overflow.

## Running
In order to run this project, extract the zip folder to a linux machine, open the directory, run "make" in the terminal and then run the generated executable.
```bash 
make clean
make
./simulator
```

## How it works
This project uses a operator class which holds an operator name and the number of operators. This ABC is used to impliment all the functionality in the driver file. The driver first calls getCommands() which parses all of the commands in the input text file into two string arrays indexed by their respective commands. Then, based on how many commands are found, the driver calls the resolve function which executes each command from the arrays. Implementation for the execution for each command belong to each individual operator class child. The results from the resolve function are outputted to the console.

## Results
The results found by this program are accurate. They have been tested against other values to guarantee there is no sample bias errors. Edge cases were also tested.

The results found are correct for the first second fourth and fifth commands. The third command contains an overflow error, but this is correctly identified by the application.

