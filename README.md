# Arduino Powered Christmas Lights
My parents new house was finished just in time for Christmas, as a result we didn't have enough time to move all our belongings across. One of the crucial missing items was our Christmas tree, so we built one along with all its decorations. This is the code for the fairy lights I made. They flash the message "Merry Christmas" in Morse code using flashes for shorts and pulses for longs.

## Tree in Action
<img src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/Tree%20Close%20Up.jpg"/>

**/* Will add more pictures and a video next time I am at home */**

## Schematic
The circuit uses a NPN transistor as a low-side switch to control the lights wich allows it to power brighter LEDs, as the maximum current provided by the I/O pins of the arduino is 40mA, while the Vin pin can provide 1000mA. Using the transistor wasn't strictly necessary as the current configuration of the circuit requires 37mA, see below:

<img src="http://www.sciweavers.org/tex2img.php?eq=I%20%3D%20%20%5Cfrac%7BV%7D%7BR%7D%20%3D%20%5Cfrac%7B12%20-%201.8%20%5Ctimes%209%20-%200.2%7D%7B27%7D%20%3D%200.037A%20%3D%2037%20mA&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0" align="center" border="0" alt="I =  \frac{V}{R} = \frac{12 - 1.8 \times 9 - 0.2}{27} = 0.037A = 37 mA" width="378" height="43" />

A chain can only be made up of a single LED colour, otherwise only the colour with the lowest voltage drop will be lit brightly. More chains can be added with different a colour each, but the resistor values will need to be recalculated very carefully, see <a href="http://electronics.stackexchange.com/a/22293/134776">this for an explanation</a>.

<img width="100%" src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/christmas_lights_schematic.svg"/>

### Breadboard Diagram

<img width="100%" src="https://rawgithub.com/IgniparousTempest/arduino-christmas-lights/master/christmas_lights_breadboard.svg"/>
