<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	</head>
	<body>
		<h3>Description:</h3>
		<p>
		This is a simple wattage meter based on a 16F876A PIC microcontroller. The wattage meter uses an analog input to measure the voltage, 
		and a linear hall sensor to measure the magnetic field produced by a wire to estimate the current.
		</p>

		<h3>Configuration:</h3>
		<p>
		To use this code you will need my LCD driver, you can find it <a href="https://github.com/magkopian/pic-lcd-driver" title="LCD driver">here</a>, 
		ust add the include files of the LCD driver in the same folder with the wattage meter project files. For more 
		info about the LCD configuration read the readme file of my LCD driver.
		</p>
		<p>
		Also when you make the circuit, each time before you use it, you have to set the voltage for the differential amplifier. 
		By setting the pin 6 of the microcontroller high you enter into the INIT mode and you will see a 4 digit number. 
		You will have to adjust the potentiometers in order this number become almost zero. I tried to automate this process 
		but to do that you need a DAC at least 14 bit resolution. This is because the hall sensor is not very sensitive and for 
		that you need a very high gain amplifier, so the voltage reference must be very accurate.
		</p>

		<h3>Hardware:</h3>
		<p>
		The program is written for a 16f876A PIC microcontroller, but with some changes you can use it with most 16F PIC microcontroller, 
		that has at least 3 analog channels. Also you will need a linear hall sensor to measure the current and a ferrite 
		ring to concentrate the magnetic field, you must run the cable you want to measure its current through the 
		ferrite ring and the hall sensor must be in a gap inside the ferrite ring.
		</p>
		<p>So you will need a setup similar to this:</p>

		<img src="http://archives.sensorsmag.com/articles/0799/26/fig8.GIF" title="Hall Sensor Setup" alt="Hall Sensor Setup"><br>

		<p>
		The schematics can be found in under the SCHEMATICS directory of this project.
		</p>
	</body>
</html>