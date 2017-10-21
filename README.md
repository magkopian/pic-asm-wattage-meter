## Description:
This is a simple wattage meter based on a 16F876A PIC microcontroller. The wattage meter uses an analog input to measure the voltage,
and a linear hall sensor to measure the magnetic field produced by a wire to estimate the current.

## Configuration:
To use this code you will need my LCD driver, you can find it [here](https://github.com/magkopian/pic-lcd-driver),
just add the include files of the LCD driver in the same folder with the wattage meter project files, and then build the hex file. For more
info about the LCD configuration read the README.md file of my LCD driver.

Now, when you make the circuit each time before you use it, you'll have to set the voltage reference for the differential amplifier.
By setting the pin 6 of the microcontroller high you'll enter into the INIT mode and you will see a 4 digit number.
You'll then have to adjust the potentiometers in order this number become almost zero, and I warn you it is not easy, that's why I used 3 potentiometers
instead of just 1. I also tried to automate this process, but to do that you need a DAC with at least a 14 bit resolution. That is because the hall sensor is not very sensitive and for
that reason you need a very high gain amplifier, so the voltage reference must be very accurate.

## Hardware:
The program is written for a 16F876A PIC microcontroller, but with some changes you can use it with most 16F PIC microcontrollers,
that has at least 3 analog channels, and with almost no change it should be fine on a 16F876, or 16F877A, or 16F877. You can use any clock you want
but you will have problems with the LCD driver unless you modified it, or don't use it at all.

Also you will need a linear hall sensor to measure the current, and also a ferrite ring to concentrate the magnetic field inside it. You must run the cable you
want to measure its current through the ferrite ring, and the hall sensor must be put in a gap inside the ferrite ring.

So, you will need a setup similar to this:

![Hall Sensor Setup](http://archives.sensorsmag.com/articles/0799/26/fig8.GIF)

After that, you'll need 2 dual supply type op amps like LM741. I tried it with some single supply op amps but with no luck.
I have made a power supply for the op amps that uses, a 12V battery, you can find the schematic in the [SCHEMATICS](SCHEMATICS) directory.

Also you will need some low voltage drop diodes to protect the microcontroller from negative voltages. And also a couple of resistors, capacitors etc.
Check out the schematics for more info. The schematics can be found in under the [SCHEMATICS](SCHEMATICS) directory of this project.
