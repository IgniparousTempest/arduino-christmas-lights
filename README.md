# Arduino Powered Christmas Lights
My parents new house was finished just in time for Christmas, as a result we didn't have enough time to move all our belongings across. One of the crucial missing items was our Christmas tree, so we built one along with all its decorations. This is the code for the fairy lights I made. They flash the message "Merry Christmas" in Morse code using flashes for shorts and pulses for longs.

## Tree in Action
<img src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/Tree%20Close%20Up.jpg"/>

**/* Will add more pictures and a video next time I am at home */**

## Schematic
The circuit uses a NPN transistor as a low-side switch to control the lights wich allows it to power brighter LEDs, as the maximum current provided by the I/O pins of the arduino is 40mA, while the Vin pin can provide 1000mA. Using the transistor wasn't strictly necessary as the current configuration of the circuit requires 37mA, see below:

<img src="http://www.sciweavers.org/tex2img.php?eq=%20I%20%3D%20%20%5Cfrac%7BV%7D%7BR%7D%20%3D%20%5Cfrac%7B5.5%20-%201.8%7D%7B100%7D%20%3D%200.037A%20%3D%2037%20mA&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0" align="center" border="0" alt=" I =  \frac{V}{R} = \frac{5.5 - 1.8}{100} = 0.037A = 37 mA" width="303" height="43" />

Since I used a single resistor on the LED chain, the ciruit could only power a single LED colour, each aditional colour would need its own resistor. Additional LEDs can be added to the chain, if desired.

<img width="100%" src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/christmas_lights_schematic.svg"/>

### Breadboard Diagram

In the diagram below I used different LED colours to help with visualisation, don't actually do this as the green LEDs have a higher voltage drop and as a result will barely light up, if they light up at all.

<img width="100%" src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/christmas_lights_breadboard.svg"/>
