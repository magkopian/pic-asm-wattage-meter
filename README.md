<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
</head>

<body>

<h3>Description:</h3>
<p>
This is a simple wattage meter based on a 16F876A PIC microcontroller. The wattage meter uses an analog input to measure the voltage, and a linear hall sensor,
to measure the magnetic field produced by a wire and estimate the current. 
</p>


<h3>Configuration:</h3>
<p>
To use this code you will need my LCD driver, you can find it <a href="https://github.com/magkopian/pic-lcd-driver" title="LCD driver">here</a>, just add the include
files of the LCD driver in tha same folder with the wattage meter project files. For more info about the LCD configuration read the readme file of my LCD driver.
</p>
<p>

</p>

<h3>Hardware Support:</h3>
<p>
The programm is written for a 16f876A PIC microcontroller, but with some changes you can use it with most 16F PIC microcontroller, that have at least 3 analog channels.
Also you will need a linear hall sensor to measure the current and a ferite ring to concentrate the magnetic field, you must run the cable you want to measure its current
through the ferite ring and the hall sensor must be in a gap inside the ferite ring.<br>So you will need a setup like this:
</p>

<img src="http://archives.sensorsmag.com/articles/0799/26/fig8.GIF" title="Hall Sensor Setup" alt="Hall Sensor Setup">

<p>
The schematics can be found in under the SCHEMATICS directory of this project.
</p>
</body>
</html>