# Soil_Moisture_Sensor
Attempting to stop a plant dying, time that could have been spent watering has been spent doing this

## Parts list:
- [Adafruit QTPy ESP32-S2](https://thepihut.com/products/adafruit-qt-py-esp32-s2-wifi-dev-board-with-stemma-qt?variant=41473929773251)
- [Adafruit Lipo charger](https://www.adafruit.com/product/4755)
- [2000mAh Lipo battery](https://thepihut.com/products/2000mah-3-7v-lipo-battery?variant=42143258050755)
- [Soil moisture sensor](https://thepihut.com/products/capacitive-soil-moisture-sensor?variant=32137736421438)
- [6V solar panel](https://thepihut.com/products/6v-2w-solar-panel-etfe-voltaic-p126?variant=41523215859907)
- [DC jack adapter](https://thepihut.com/products/3-8-1-3mm-or-3-5-1-1mm-to-5-5-2-1mm-dc-jack-adapter-cable?variant=27740115985)

## Circuit diagram
![Circuit diagram!](/docs/Circuit_diagram.png)

## Prints

### Body

```stl
solid Mesh
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 79.000000 0.000000
      vertex -54.967999 10.525000 6.029000
      vertex -54.967999 10.880000 6.727000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 78.002998 9.000000
      vertex -54.967999 79.000000 9.000000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.156619 0.000000 0.987659
    outer loop
      vertex -28.968000 79.000000 5.998000
      vertex -28.350000 77.002998 6.096000
      vertex -28.350000 79.000000 6.096000
    endloop
  endfacet
  facet normal -0.156619 0.000000 0.987659
    outer loop
      vertex -28.968000 77.002998 5.998000
      vertex -28.350000 77.002998 6.096000
      vertex -28.968000 79.000000 5.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 61.000999 79.000000 18.000000
      vertex 61.000999 -61.000000 18.000000
      vertex 61.000999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -0.452946 0.000000 0.891538
    outer loop
      vertex -28.350000 79.000000 6.096000
      vertex -27.791000 77.002998 6.380000
      vertex -27.791000 79.000000 6.380000
    endloop
  endfacet
  facet normal -0.452946 0.000000 0.891538
    outer loop
      vertex -28.350000 77.002998 6.096000
      vertex -27.791000 77.002998 6.380000
      vertex -28.350000 79.000000 6.096000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 8.500000 4.998000
      vertex -54.967999 79.000000 0.000000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 61.000999 79.000000 0.000000
      vertex 61.000999 79.000000 18.000000
      vertex 61.000999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -0.707106 0.000000 0.707107
    outer loop
      vertex -27.791000 79.000000 6.380000
      vertex -27.348000 77.002998 6.823000
      vertex -27.348000 79.000000 6.823000
    endloop
  endfacet
  facet normal -0.707106 0.000000 0.707107
    outer loop
      vertex -27.791000 77.002998 6.380000
      vertex -27.348000 77.002998 6.823000
      vertex -27.791000 79.000000 6.380000
    endloop
  endfacet
  facet normal -0.891210 0.000000 0.453591
    outer loop
      vertex -27.348000 79.000000 6.823000
      vertex -27.063999 77.002998 7.381000
      vertex -27.063999 79.000000 7.381000
    endloop
  endfacet
  facet normal -0.891210 0.000000 0.453591
    outer loop
      vertex -27.348000 77.002998 6.823000
      vertex -27.063999 77.002998 7.381000
      vertex -27.348000 79.000000 6.823000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 11.000000
      vertex -49.001999 77.002998 11.003000
      vertex -53.001999 77.002998 11.977336
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -53.001999 77.002998 11.977336
      vertex -52.984901 77.002998 11.000000
      vertex -52.971001 77.002998 11.000000
    endloop
  endfacet
  facet normal -0.987698 0.000000 0.156372
    outer loop
      vertex -27.063999 79.000000 7.381000
      vertex -26.966000 77.002998 8.000000
      vertex -26.966000 79.000000 8.000000
    endloop
  endfacet
  facet normal -0.987698 0.000000 0.156372
    outer loop
      vertex -27.063999 77.002998 7.381000
      vertex -26.966000 77.002998 8.000000
      vertex -27.063999 79.000000 7.381000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -49.001999 77.002998 11.003000
      vertex -52.971001 77.002998 11.000000
      vertex -52.971001 77.002998 10.205243
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.968018 77.002998 10.034830
      vertex -49.001999 77.002998 6.998000
      vertex -49.001999 77.002998 11.003000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -54.000000 5.000000
      vertex 8.017000 -42.002998 4.998000
      vertex 8.017000 -54.000000 4.998000
    endloop
  endfacet
  facet normal -0.891210 0.000000 -0.453592
    outer loop
      vertex -27.063999 79.000000 8.619000
      vertex -27.348000 77.002998 9.177000
      vertex -27.348000 79.000000 9.177000
    endloop
  endfacet
  facet normal -0.891210 0.000000 -0.453592
    outer loop
      vertex -27.063999 77.002998 8.619000
      vertex -27.348000 77.002998 9.177000
      vertex -27.063999 79.000000 8.619000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -37.997002 77.002998 11.003000
      vertex -33.999554 77.002998 11.998000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal -0.707106 0.000000 -0.707107
    outer loop
      vertex -27.348000 79.000000 9.177000
      vertex -27.791000 77.002998 9.620000
      vertex -27.791000 79.000000 9.620000
    endloop
  endfacet
  facet normal -0.707106 0.000000 -0.707107
    outer loop
      vertex -27.348000 77.002998 9.177000
      vertex -27.791000 77.002998 9.620000
      vertex -27.348000 79.000000 9.177000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -33.999554 77.002998 11.998000
      vertex -37.997002 77.002998 11.003000
    endloop
  endfacet
  facet normal -0.452946 0.000000 -0.891538
    outer loop
      vertex -27.791000 79.000000 9.620000
      vertex -28.350000 77.002998 9.904000
      vertex -28.350000 79.000000 9.904000
    endloop
  endfacet
  facet normal -0.452946 0.000000 -0.891538
    outer loop
      vertex -27.791000 77.002998 9.620000
      vertex -28.350000 77.002998 9.904000
      vertex -27.791000 79.000000 9.620000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 10.014000 -35.998001 4.998000
      vertex 8.017000 -42.002998 4.998000
      vertex 10.014000 -42.002998 4.998000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 8.017000 -35.998001 4.998000
      vertex 8.017000 -42.002998 4.998000
      vertex 10.014000 -35.998001 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -49.001999 77.002998 11.003000
      vertex -37.997002 79.000000 11.003000
      vertex -37.997002 77.002998 11.003000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -49.001999 79.000000 11.003000
      vertex -37.997002 79.000000 11.003000
      vertex -49.001999 77.002998 11.003000
    endloop
  endfacet
  facet normal -0.158177 0.000000 -0.987411
    outer loop
      vertex -28.968000 79.000000 10.003000
      vertex -28.350000 79.000000 9.904000
      vertex -28.350000 77.002998 9.904000
    endloop
  endfacet
  facet normal 0.157928 0.000000 -0.987451
    outer loop
      vertex -28.968000 77.002998 10.003000
      vertex -29.587000 77.002998 9.904000
      vertex -29.587000 79.000000 9.904000
    endloop
  endfacet
  facet normal 0.453591 0.000000 -0.891210
    outer loop
      vertex -29.587000 79.000000 9.904000
      vertex -30.145000 77.002998 9.620000
      vertex -30.145000 79.000000 9.620000
    endloop
  endfacet
  facet normal 0.453591 0.000000 -0.891210
    outer loop
      vertex -29.587000 77.002998 9.904000
      vertex -30.145000 77.002998 9.620000
      vertex -29.587000 79.000000 9.904000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 54.002998 12.000000 3.000000
      vertex 54.002998 72.000000 5.000000
      vertex 54.002998 72.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -33.971001 72.000000 4.998000
      vertex -47.970001 72.000000 5.000000
      vertex -47.970001 72.000000 4.998000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex -33.971001 72.000000 5.000000
      vertex -47.970001 72.000000 5.000000
      vertex -33.971001 72.000000 4.998000
    endloop
  endfacet
  facet normal 0.707108 0.000000 -0.707106
    outer loop
      vertex -30.145000 79.000000 9.620000
      vertex -30.587999 77.002998 9.177000
      vertex -30.587999 79.000000 9.177000
    endloop
  endfacet
  facet normal 0.707108 0.000000 -0.707106
    outer loop
      vertex -30.145000 77.002998 9.620000
      vertex -30.587999 77.002998 9.177000
      vertex -30.145000 79.000000 9.620000
    endloop
  endfacet
  facet normal 0.890564 0.000000 -0.454858
    outer loop
      vertex -30.587999 79.000000 9.177000
      vertex -30.872999 77.002998 8.619000
      vertex -30.872999 79.000000 8.619000
    endloop
  endfacet
  facet normal 0.890564 0.000000 -0.454858
    outer loop
      vertex -30.587999 77.002998 9.177000
      vertex -30.872999 77.002998 8.619000
      vertex -30.587999 79.000000 9.177000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 55.998001 11.000000
      vertex -52.984901 55.998001 11.000000
      vertex -53.001999 55.998001 11.977336
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -52.971001 55.998001 11.000000
      vertex -53.001999 55.998001 11.977336
      vertex -33.999554 55.998001 11.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -53.001999 55.998001 11.977336
      vertex -53.001999 55.998001 11.998000
      vertex -33.999554 55.998001 11.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -33.999554 55.998001 11.998000
      vertex -33.971008 55.998001 10.366169
      vertex -52.971001 55.998001 11.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex 54.002998 72.000000 5.000000
      vertex 54.002998 12.000000 3.000000
      vertex 54.002998 12.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 55.998001 10.205243
      vertex -52.971001 55.998001 11.000000
      vertex -33.971008 55.998001 10.366169
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -33.971008 55.998001 10.366169
      vertex -52.968018 55.998001 10.034830
      vertex -52.971001 55.998001 10.205243
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 54.002998 -32.001999 4.998000
      vertex 54.002998 10.003000 5.000000
      vertex 54.002998 10.003000 4.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 54.002998 -32.001999 5.000000
      vertex 54.002998 10.003000 5.000000
      vertex 54.002998 -32.001999 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 54.000000 11.998000
      vertex -32.001949 54.000000 11.998000
      vertex -33.999554 55.998001 11.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -33.999554 55.998001 11.998000
      vertex -53.001999 55.998001 11.998000
      vertex -53.001999 54.000000 11.998000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 9.000000
      vertex 59.004002 -59.002998 9.000000
      vertex 59.004002 -59.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 9.000000
      vertex 59.004002 -59.002998 5.000000
      vertex 10.014000 -59.002998 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -47.970001 72.000000 4.998000
      vertex -47.970001 55.998001 5.000000
      vertex -47.970001 55.998001 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -47.970001 72.000000 5.000000
      vertex -47.970001 55.998001 5.000000
      vertex -47.970001 72.000000 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -47.970001 -19.000000 5.000000
      vertex -47.970001 -19.000000 3.000000
      vertex -47.970001 54.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -53.001999 -19.000000 10.000000
      vertex -53.001999 -19.000000 13.000000
      vertex -52.971001 -19.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 13.000000
      vertex 8.017000 -59.002998 5.000000
      vertex -52.971001 -59.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 -20.997999 13.000000
      vertex -52.971001 -20.997999 5.000000
      vertex -47.970001 -20.997999 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -47.970001 -20.997999 4.998000
      vertex -47.970001 -54.000000 5.000000
      vertex -47.970001 -54.000000 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -47.970001 -20.997999 5.000000
      vertex -47.970001 -54.000000 5.000000
      vertex -47.970001 -20.997999 4.998000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 13.000000
      vertex 8.017000 -59.002998 13.000000
      vertex 8.017000 -59.002998 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -20.997999 13.000000
      vertex -52.971001 -59.002998 13.000000
      vertex -52.971001 -59.002998 5.000000
    endloop
  endfacet
  facet normal -0.000000 0.155882 0.987776
    outer loop
      vertex -52.971001 8.487328 5.000000
      vertex -51.966000 8.487328 5.000000
      vertex -51.966000 8.500000 4.998000
    endloop
  endfacet
  facet normal 0.000000 -0.155882 0.987776
    outer loop
      vertex -51.966000 8.512672 5.000000
      vertex -52.971001 8.512672 5.000000
      vertex -51.966000 8.500000 4.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -59.002998 13.000000
      vertex 8.017000 -42.002998 13.000000
      vertex 8.017000 -54.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 7.727000 5.120000
      vertex -52.971001 7.029000 5.475000
      vertex -52.971001 -19.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 5.000000
      vertex -52.971001 8.487328 5.000000
      vertex -52.971001 7.727000 5.120000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -51.966000 8.487328 5.000000
      vertex -51.966000 8.512672 5.000000
      vertex -51.966000 8.500000 4.998000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 10.014000 -35.998001 13.000000
      vertex 8.017000 -35.998001 13.000000
      vertex 10.014000 -35.998001 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 8.512672 5.000000
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 9.273000 5.120000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 10.014000 -54.000000 5.000000
      vertex 54.002998 -54.000000 5.000000
      vertex 10.014000 -54.000000 3.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 8.017000 -42.002998 13.000000
      vertex 10.014000 -42.002998 13.000000
      vertex 10.014000 -42.002998 4.998000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -52.971001 9.273000 5.120000
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 9.971000 5.475000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 54.000000 10.000000
      vertex -53.001999 8.518853 10.000000
      vertex -52.971001 8.518853 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 -54.000000 4.998000
      vertex 8.017000 -54.000000 5.000000
      vertex 8.017000 -54.000000 4.998000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 -54.000000 5.000000
      vertex 8.017000 -54.000000 5.000000
      vertex -47.970001 -54.000000 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -47.970001 54.000000 3.000000
      vertex -47.970001 54.000000 5.000000
      vertex -47.970001 -19.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 10.525000 6.029000
      vertex -52.971001 9.971000 5.475000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 10.880000 6.727000
      vertex -52.971001 10.525000 6.029000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -37.970001 77.002998 6.998000
      vertex -49.001999 77.002998 6.998000
      vertex -52.971001 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 54.002998 -54.000000 3.000000
      vertex 10.014000 -54.000000 3.000000
      vertex 54.002998 -54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 5.000000
      vertex -33.971001 77.002998 5.000000
      vertex -37.970001 77.002998 6.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -54.999001 79.000000 11.956590
      vertex -54.999718 79.000000 11.998000
      vertex -54.999001 79.000000 11.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -54.999001 79.000000 9.000000
      vertex -54.967999 78.002998 9.000000
      vertex -54.999001 78.002998 9.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -54.967999 79.000000 9.000000
      vertex -54.967999 78.002998 9.000000
      vertex -54.999001 79.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 9.000000
      vertex -37.997002 79.000000 9.000000
      vertex -37.997002 79.000000 11.003000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.999001 78.002998 9.000000
      vertex -54.999001 78.002998 11.956590
      vertex -54.999001 79.000000 11.956590
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.999001 79.000000 11.956590
      vertex -54.999001 79.000000 9.000000
      vertex -54.999001 78.002998 9.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -49.001999 79.000000 6.998000
      vertex -37.970001 79.000000 6.998000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -54.967999 78.002998 9.000000
      vertex -54.967999 78.002998 18.000000
      vertex -54.999001 78.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -54.999001 78.002998 11.956590
      vertex -54.999001 78.002998 9.000000
      vertex -54.967999 78.002998 9.000000
    endloop
  endfacet
  facet normal -0.999850 -0.000000 -0.017316
    outer loop
      vertex -54.999718 79.000000 11.998000
      vertex -54.999001 78.002998 11.956590
      vertex -54.999718 78.002998 11.998000
    endloop
  endfacet
  facet normal -0.999850 -0.000000 -0.017316
    outer loop
      vertex -54.999001 79.000000 11.956590
      vertex -54.999001 78.002998 11.956590
      vertex -54.999718 79.000000 11.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.999001 79.000000 18.000000
      vertex -54.999001 79.000000 11.998000
      vertex -54.999001 78.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -54.999001 79.000000 11.998000
      vertex -54.999718 78.002998 11.998000
      vertex -54.999001 78.002998 11.998000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -54.999718 79.000000 11.998000
      vertex -54.999718 78.002998 11.998000
      vertex -54.999001 79.000000 11.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 59.002998 -59.002998 18.000000
      vertex 61.000999 79.000000 18.000000
      vertex 59.002998 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 61.000999 -61.000000 18.000000
      vertex 61.000999 79.000000 18.000000
      vertex 59.002998 -59.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -54.999001 78.002998 11.998000
      vertex -54.999001 78.002998 11.956590
      vertex -54.967999 78.002998 9.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex -54.999001 78.002998 11.998000
      vertex -54.999718 78.002998 11.998000
      vertex -54.999001 78.002998 11.956590
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.999001 78.002998 18.000000
      vertex -54.999001 79.000000 18.000000
      vertex -54.999001 78.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 6.998000
      vertex -30.587999 79.000000 6.823000
      vertex -30.145000 79.000000 6.380000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 6.998000
      vertex -30.872999 79.000000 7.381000
      vertex -30.587999 79.000000 6.823000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -54.967999 78.002998 18.000000
      vertex -54.999001 79.000000 18.000000
      vertex -54.999001 78.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -30.145000 79.000000 6.380000
      vertex -54.967999 79.000000 0.000000
      vertex -37.970001 79.000000 6.998000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -54.967999 78.002998 18.000000
      vertex -54.999001 78.002998 18.000000
      vertex -54.999001 78.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -30.145000 79.000000 6.380000
      vertex -29.587000 79.000000 6.096000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -29.587000 79.000000 6.096000
      vertex -28.968000 79.000000 5.998000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 10.014000 -59.002998 13.000000
      vertex 59.002998 -59.002998 18.000000
      vertex 59.002998 -59.002998 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex 59.002998 12.000000 17.000000
      vertex 59.002998 10.003000 17.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 10.003000 17.000000
      vertex 59.002998 -59.002998 18.000000
      vertex 59.002998 77.002998 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 18.000000
      vertex 59.002998 10.003000 17.000000
      vertex 59.002998 -32.001999 17.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 18.000000
      vertex 59.002998 -32.001999 17.000000
      vertex 59.002998 -34.000000 17.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex 59.002998 -34.000000 17.000000
      vertex 59.002998 -59.002998 9.000000
      vertex 59.002998 -59.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 42.002998 10.003000 17.000000
      vertex 42.002998 12.000000 17.000000
      vertex 26.007999 10.003000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 59.002998 10.003000 17.000000
      vertex 52.006001 12.000000 17.000000
      vertex 52.006001 10.003000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 59.002998 12.000000 17.000000
      vertex 52.006001 12.000000 17.000000
      vertex 59.002998 10.003000 17.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -27.791000 79.000000 6.380000
      vertex -27.348000 79.000000 6.823000
      vertex 61.000999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -27.348000 79.000000 6.823000
      vertex -27.063999 79.000000 7.381000
      vertex 61.000999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 26.007999 -32.001999 17.000000
      vertex 32.006001 -34.000000 17.000000
      vertex 32.006001 -32.001999 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 52.006001 -34.000000 17.000000
      vertex 59.002998 -32.001999 17.000000
      vertex 52.006001 -32.001999 17.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 59.002998 -34.000000 17.000000
      vertex 59.002998 -32.001999 17.000000
      vertex 52.006001 -34.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -27.063999 79.000000 8.619000
      vertex -27.348000 79.000000 9.177000
      vertex 61.000999 79.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 26.007999 -32.001999 17.000000
      vertex 24.011000 -34.000000 17.000000
      vertex 32.006001 -34.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 26.007999 -32.001999 17.000000
      vertex 26.007999 10.003000 17.000000
      vertex 24.011000 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 26.007999 10.003000 17.000000
      vertex 42.002998 12.000000 17.000000
      vertex 24.011000 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 24.011000 12.000000 17.000000
      vertex 24.011000 -34.000000 17.000000
      vertex 26.007999 -32.001999 17.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -27.348000 79.000000 9.177000
      vertex -27.791000 79.000000 9.620000
      vertex 61.000999 79.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 9.000000
      vertex 10.014000 -59.002998 5.000000
      vertex 10.014000 -59.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -28.350000 79.000000 9.904000
      vertex -28.968000 79.000000 10.003000
      vertex 61.000999 79.000000 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 7.727000 9.880000
      vertex -54.967999 5.998000 13.000000
      vertex -54.967999 8.500000 10.003000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 5.998000 13.000000
      vertex -54.967999 7.029000 9.525000
      vertex -54.967999 6.475000 8.971000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex -54.967999 6.475000 8.971000
      vertex -54.967999 -61.000000 0.000000
      vertex -54.967999 5.998000 13.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 5.998000 13.000000
      vertex -54.967999 7.727000 9.880000
      vertex -54.967999 7.029000 9.525000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -54.967999 9.971000 9.525000
      vertex -54.967999 9.273000 9.880000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 9.000000
      vertex -30.872999 79.000000 8.619000
      vertex -30.971001 79.000000 8.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 12.000000 17.000000
      vertex 59.002998 77.002998 18.000000
      vertex 59.002998 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -26.966000 79.000000 8.000000
      vertex -27.063999 79.000000 8.619000
      vertex 61.000999 79.000000 18.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex -54.967999 78.002998 9.000000
      vertex -54.967999 79.000000 0.000000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 61.000999 79.000000 0.000000
      vertex -28.350000 79.000000 6.096000
      vertex -27.791000 79.000000 6.380000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -28.968000 79.000000 5.998000
      vertex -28.350000 79.000000 6.096000
      vertex 61.000999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 52.006001 12.000000 17.000000
      vertex 59.002998 12.000000 17.000000
      vertex 59.002998 12.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -30.971001 79.000000 8.000000
      vertex -37.970001 79.000000 6.998000
      vertex -37.970001 79.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 6.998000
      vertex -30.971001 79.000000 8.000000
      vertex -30.872999 79.000000 7.381000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -30.872999 79.000000 8.619000
      vertex -37.970001 79.000000 9.000000
      vertex -37.997002 79.000000 11.003000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.997002 79.000000 11.003000
      vertex -30.587999 79.000000 9.177000
      vertex -30.872999 79.000000 8.619000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -52.971001 10.525000 8.971000
      vertex -52.971001 10.880000 8.273000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -54.967999 79.000000 9.000000
      vertex -54.999001 79.000000 9.000000
      vertex -54.999001 79.000000 11.956590
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 8.481147 10.000000
      vertex -53.001999 8.481147 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -54.967999 79.000000 9.000000
      vertex -49.001999 79.000000 6.998000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -54.967999 79.000000 9.000000
      vertex -54.999001 79.000000 11.956590
      vertex -49.001999 79.000000 11.003000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -27.063999 79.000000 7.381000
      vertex -26.966000 79.000000 8.000000
      vertex 61.000999 79.000000 0.000000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -52.971001 9.273000 9.880000
      vertex -52.971001 9.971000 9.525000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 10.000000
      vertex -52.971001 8.518853 10.000000
      vertex -52.971001 9.273000 9.880000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 7.727000 9.880000
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 7.029000 9.525000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 8.481147 10.000000
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 7.727000 9.880000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -34.000000 9.000000
      vertex 59.002998 -59.002998 9.000000
      vertex 59.002998 -34.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -59.002998 9.000000
      vertex 59.002998 -59.002998 9.000000
      vertex 59.004002 -34.000000 9.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 54.000000 10.000000
      vertex -53.001999 8.518853 10.000000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 -59.002998 9.000000
      vertex 59.002998 -34.000000 17.000000
      vertex 59.002998 -34.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 -19.000000 10.000000
      vertex -53.001999 8.481147 10.000000
      vertex -53.001999 -19.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 61.000999 79.000000 0.000000
      vertex 61.000999 -61.000000 0.000000
      vertex 59.004002 77.002998 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 6.475000 8.971000
      vertex -52.971001 7.029000 9.525000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 32.006001 -34.000000 6.998000
      vertex 32.006001 -34.000000 17.000000
      vertex 24.011000 -34.000000 17.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 10.000000
      vertex -52.971001 9.971000 9.525000
      vertex -52.971001 10.525000 8.971000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -52.971001 11.003000 7.500000
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 11.003000 7.500000
      vertex -52.971001 10.880000 6.727000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 10.000000
      vertex -52.971001 10.880000 8.273000
      vertex -52.971001 11.003000 7.500000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 52.006001 -34.000000 6.998000
      vertex 32.006001 -34.000000 6.998000
      vertex 54.002998 -34.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex 59.002998 -34.000000 9.000000
      vertex 54.002998 -34.000000 5.000000
      vertex 59.004002 -34.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 -34.000000 5.000000
      vertex 59.004002 -34.000000 9.000000
      vertex 59.002998 -34.000000 9.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 -34.000000 9.000000
      vertex 52.006001 -34.000000 6.998000
      vertex 54.002998 -34.000000 5.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 -34.000000 9.000000
      vertex 52.006001 -34.000000 17.000000
      vertex 52.006001 -34.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 77.002998 0.000000
      vertex -52.971001 77.002998 0.000000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -54.967999 79.000000 0.000000
      vertex 61.000999 79.000000 0.000000
      vertex 59.004002 77.002998 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -52.971001 -59.002998 0.000000
      vertex 59.004002 -59.002998 0.000000
      vertex 61.000999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 52.006001 -34.000000 17.000000
      vertex 59.002998 -34.000000 9.000000
      vertex 59.002998 -34.000000 17.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -52.971001 -59.002998 0.000000
      vertex -54.967999 -61.000000 0.000000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -54.967999 79.000000 0.000000
      vertex -52.971001 77.002998 0.000000
      vertex -52.971001 -59.002998 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 5.000000
      vertex -52.971001 7.029000 5.475000
      vertex -52.971001 6.475000 6.029000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 5.000000
      vertex -52.971001 6.475000 6.029000
      vertex -52.971001 6.120000 6.727000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 5.000000
      vertex -52.971001 6.120000 6.727000
      vertex -52.971001 5.998000 7.500000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 5.998000 7.500000
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 -19.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 6.120000 8.273000
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 5.998000 7.500000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -19.000000 10.000000
      vertex -52.971001 6.120000 8.273000
      vertex -52.971001 6.475000 8.971000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 61.000999 -61.000000 0.000000
      vertex -54.967999 -61.000000 0.000000
      vertex -52.971001 -59.002998 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -59.002998 0.000000
      vertex 59.004002 77.002998 0.000000
      vertex 61.000999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 5.000000
      vertex -52.971001 -20.997999 5.000000
      vertex -52.971001 -20.997999 13.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.002998 77.002998 9.000000
      vertex 59.004002 12.000000 9.000000
      vertex 59.002998 12.000000 9.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex 59.004002 77.002998 9.000000
      vertex 59.004002 12.000000 9.000000
      vertex 59.002998 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 0.987773 0.155897
    outer loop
      vertex -52.971001 6.120000 6.727000
      vertex -54.967999 5.998000 7.500000
      vertex -52.971001 5.998000 7.500000
    endloop
  endfacet
  facet normal -0.000000 0.987773 0.155897
    outer loop
      vertex -54.967999 6.120000 6.727000
      vertex -54.967999 5.998000 7.500000
      vertex -52.971001 6.120000 6.727000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 9.000000
      vertex 59.002998 12.000000 9.000000
      vertex 59.002998 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.891342 0.453332
    outer loop
      vertex -52.971001 6.475000 6.029000
      vertex -54.967999 6.120000 6.727000
      vertex -52.971001 6.120000 6.727000
    endloop
  endfacet
  facet normal -0.000000 0.891342 0.453332
    outer loop
      vertex -54.967999 6.475000 6.029000
      vertex -54.967999 6.120000 6.727000
      vertex -52.971001 6.475000 6.029000
    endloop
  endfacet
  facet normal 0.000000 0.707107 0.707107
    outer loop
      vertex -52.971001 7.029000 5.475000
      vertex -54.967999 6.475000 6.029000
      vertex -52.971001 6.475000 6.029000
    endloop
  endfacet
  facet normal -0.000000 0.707107 0.707107
    outer loop
      vertex -54.967999 7.029000 5.475000
      vertex -54.967999 6.475000 6.029000
      vertex -52.971001 7.029000 5.475000
    endloop
  endfacet
  facet normal 0.000000 0.453332 0.891342
    outer loop
      vertex -54.967999 7.029000 5.475000
      vertex -52.971001 7.727000 5.120000
      vertex -54.967999 7.727000 5.120000
    endloop
  endfacet
  facet normal 0.000000 0.453332 0.891342
    outer loop
      vertex -52.971001 7.029000 5.475000
      vertex -52.971001 7.727000 5.120000
      vertex -54.967999 7.029000 5.475000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 42.002998 12.000000 6.998000
      vertex 52.006001 12.000000 6.998000
      vertex 54.002998 12.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 3.000000
      vertex -52.971001 77.002998 0.000000
      vertex 59.004002 77.002998 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 0.000000
      vertex 59.004002 77.002998 3.000000
      vertex -52.971001 77.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.155897 0.987773
    outer loop
      vertex -52.971001 8.487328 5.000000
      vertex -54.967999 7.727000 5.120000
      vertex -52.971001 7.727000 5.120000
    endloop
  endfacet
  facet normal 0.000000 0.155882 0.987776
    outer loop
      vertex -52.971001 8.487328 5.000000
      vertex -51.966000 8.500000 4.998000
      vertex -54.967999 8.500000 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.155897 0.987773
    outer loop
      vertex -54.967999 8.500000 4.998000
      vertex -54.967999 7.727000 5.120000
      vertex -52.971001 8.487328 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 59.004002 -59.002998 0.000000
      vertex -52.971001 -59.002998 3.000000
      vertex 59.004002 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 0.000000
      vertex -52.971001 -59.002998 3.000000
      vertex 59.004002 -59.002998 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 42.002998 12.000000 6.998000
      vertex 24.011000 12.000000 17.000000
      vertex 42.002998 12.000000 17.000000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 3.000000
      vertex -52.971001 77.002998 0.000000
      vertex -52.971001 77.002998 3.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 0.000000
      vertex -52.971001 77.002998 0.000000
      vertex -52.971001 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 -0.155897 0.987773
    outer loop
      vertex -54.967999 9.273000 5.120000
      vertex -54.967999 8.500000 4.998000
      vertex -52.971001 8.512672 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.155882 0.987776
    outer loop
      vertex -54.967999 8.500000 4.998000
      vertex -51.966000 8.500000 4.998000
      vertex -52.971001 8.512672 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.155897 0.987773
    outer loop
      vertex -52.971001 8.512672 5.000000
      vertex -52.971001 9.273000 5.120000
      vertex -54.967999 9.273000 5.120000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 12.000000 9.000000
      vertex 59.004002 12.000000 5.000000
      vertex 54.002998 12.000000 5.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 12.000000 9.000000
      vertex 59.004002 12.000000 9.000000
      vertex 59.004002 12.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 54.002998 12.000000 5.000000
      vertex 52.006001 12.000000 6.998000
      vertex 59.002998 12.000000 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 -59.002998 3.000000
      vertex 59.004002 77.002998 3.000000
      vertex 59.004002 77.002998 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 0.000000
      vertex 59.004002 -59.002998 0.000000
      vertex 59.004002 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 -0.453333 0.891341
    outer loop
      vertex -54.967999 9.273000 5.120000
      vertex -52.971001 9.971000 5.475000
      vertex -54.967999 9.971000 5.475000
    endloop
  endfacet
  facet normal 0.000000 -0.453333 0.891341
    outer loop
      vertex -52.971001 9.273000 5.120000
      vertex -52.971001 9.971000 5.475000
      vertex -54.967999 9.273000 5.120000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 12.000000 9.000000
      vertex 52.006001 12.000000 6.998000
      vertex 52.006001 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 24.011000 12.000000 3.000000
      vertex 54.002998 -34.000000 3.000000
      vertex 24.011000 -34.000000 3.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex 54.002998 12.000000 3.000000
      vertex 54.002998 -34.000000 3.000000
      vertex 24.011000 12.000000 3.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex 59.002998 10.003000 17.000000
      vertex 59.002998 -32.001999 9.000000
      vertex 59.002998 -32.001999 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -47.970001 54.000000 3.000000
      vertex -31.974001 72.000000 3.000000
      vertex -31.974001 54.000000 3.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex 10.014000 -19.000000 3.000000
      vertex 10.014000 -54.000000 3.000000
      vertex -47.970001 -19.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.002998 10.003000 9.000000
      vertex 59.004002 -32.001999 9.000000
      vertex 59.002998 -32.001999 9.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex 59.004002 10.003000 9.000000
      vertex 59.004002 -32.001999 9.000000
      vertex 59.002998 10.003000 9.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -31.974001 72.000000 3.000000
      vertex -52.971001 77.002998 3.000000
      vertex 59.004002 77.002998 3.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -31.974001 72.000000 3.000000
      vertex -47.970001 54.000000 3.000000
      vertex -52.971001 77.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 77.002998 3.000000
      vertex 54.002998 72.000000 3.000000
      vertex -31.974001 72.000000 3.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.002998 10.003000 9.000000
      vertex 59.002998 -32.001999 9.000000
      vertex 59.002998 10.003000 17.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 42.002998 12.000000 6.998000
      vertex 42.002998 12.000000 17.000000
      vertex 42.002998 10.003000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 54.002998 12.000000 3.000000
      vertex 59.004002 77.002998 3.000000
      vertex 59.004002 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 54.002998 12.000000 3.000000
      vertex 54.002998 72.000000 3.000000
      vertex 59.004002 77.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -59.002998 3.000000
      vertex 54.002998 -34.000000 3.000000
      vertex 54.002998 12.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -59.002998 3.000000
      vertex 54.002998 -54.000000 3.000000
      vertex 54.002998 -34.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex 42.002998 10.003000 6.998000
      vertex 26.007999 10.003000 4.998000
      vertex 54.002998 10.003000 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -47.970001 -19.000000 3.000000
      vertex -52.971001 77.002998 3.000000
      vertex -47.970001 54.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -47.970001 -19.000000 3.000000
      vertex 10.014000 -54.000000 3.000000
      vertex -52.971001 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -52.971001 -59.002998 3.000000
      vertex -52.971001 77.002998 3.000000
      vertex -47.970001 -19.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 26.007999 10.003000 17.000000
      vertex 26.007999 10.003000 4.998000
      vertex 42.002998 10.003000 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 10.014000 -54.000000 3.000000
      vertex 54.002998 -54.000000 3.000000
      vertex 59.004002 -59.002998 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 59.004002 -59.002998 3.000000
      vertex -52.971001 -59.002998 3.000000
      vertex 10.014000 -54.000000 3.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 52.006001 -32.001999 17.000000
      vertex 59.002998 -32.001999 17.000000
      vertex 59.002998 -32.001999 9.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 42.002998 10.003000 6.998000
      vertex 42.002998 10.003000 17.000000
      vertex 26.007999 10.003000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 10.003000 9.000000
      vertex 52.006001 10.003000 6.998000
      vertex 54.002998 10.003000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex 59.002998 10.003000 9.000000
      vertex 54.002998 10.003000 5.000000
      vertex 59.004002 10.003000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 10.003000 5.000000
      vertex 59.004002 10.003000 9.000000
      vertex 59.002998 10.003000 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 61.000999 79.000000 0.000000
      vertex -54.967999 79.000000 0.000000
      vertex -28.968000 79.000000 5.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 52.006001 10.003000 17.000000
      vertex 59.002998 10.003000 9.000000
      vertex 59.002998 10.003000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 52.006001 10.003000 6.998000
      vertex 59.002998 10.003000 9.000000
      vertex 52.006001 10.003000 17.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 42.002998 12.000000 6.998000
      vertex 52.006001 10.003000 6.998000
      vertex 52.006001 12.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 42.002998 10.003000 6.998000
      vertex 52.006001 10.003000 6.998000
      vertex 42.002998 12.000000 6.998000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex 10.014000 -35.998001 13.000000
      vertex 10.014000 -35.998001 4.998000
      vertex 10.014000 -19.000000 13.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 42.002998 10.003000 17.000000
      vertex 42.002998 10.003000 6.998000
      vertex 42.002998 12.000000 6.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 10.014000 -59.002998 13.000000
      vertex 10.014000 -59.002998 5.000000
      vertex 10.014000 -54.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 10.014000 -54.000000 5.000000
      vertex 10.014000 -42.002998 13.000000
      vertex 10.014000 -59.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 54.002998 -34.000000 3.000000
      vertex 54.002998 -34.000000 5.000000
      vertex 32.006001 -34.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -54.999001 79.000000 18.000000
      vertex -53.001999 77.002998 18.000000
      vertex 59.002998 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex 61.000999 79.000000 18.000000
      vertex -54.999001 79.000000 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex 52.006001 12.000000 17.000000
      vertex 52.006001 12.000000 6.998000
      vertex 52.006001 10.003000 6.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 52.006001 10.003000 6.998000
      vertex 52.006001 10.003000 17.000000
      vertex 52.006001 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 59.002998 -59.002998 18.000000
      vertex -53.001999 -59.002998 18.000000
      vertex -54.967999 -61.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -54.967999 -61.000000 18.000000
      vertex 61.000999 -61.000000 18.000000
      vertex 59.002998 -59.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 54.002998 -32.001999 5.000000
      vertex 32.006001 -32.001999 6.998000
      vertex 52.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -54.999001 79.000000 18.000000
      vertex -54.967999 78.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -54.967999 78.002998 18.000000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -53.001999 -59.002998 18.000000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -54.967999 -61.000000 18.000000
      vertex -53.001999 -59.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 54.000000 3.000000
      vertex -47.970001 54.000000 5.000000
      vertex -47.970001 54.000000 3.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -54.999001 79.000000 18.000000
      vertex 61.000999 79.000000 18.000000
      vertex -28.968000 79.000000 10.003000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -54.967999 78.002998 18.000000
      vertex -54.967999 78.002998 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 5.998000 13.000000
      vertex -54.967999 -61.000000 18.000000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -54.967999 11.003000 7.500000
      vertex -54.967999 10.880000 8.273000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 72.000000 3.000000
      vertex 54.002998 72.000000 3.000000
      vertex 54.002998 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -33.999554 77.002998 11.998000
      vertex -32.001949 77.002998 11.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 -61.000000 0.000000
      vertex -54.967999 -61.000000 18.000000
      vertex -54.967999 5.998000 13.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 8.017000 -59.002998 13.000000
      vertex 59.002998 -59.002998 18.000000
      vertex 10.014000 -59.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 8.017000 -59.002998 13.000000
      vertex -52.971001 -59.002998 13.000000
      vertex -53.001999 -59.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 -59.002998 13.000000
      vertex -53.001999 -59.002998 13.000000
      vertex -53.001999 -59.002998 18.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -53.001999 -59.002998 18.000000
      vertex 59.002998 -59.002998 18.000000
      vertex 8.017000 -59.002998 13.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 -59.002998 18.000000
      vertex -53.001999 -59.002998 13.000000
      vertex -53.001999 -19.000000 13.000000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -53.001999 -19.000000 13.000000
      vertex -53.001999 8.500000 10.003000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -53.001999 -59.002998 18.000000
      vertex -53.001999 -19.000000 13.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -53.001999 8.500000 10.003000
      vertex -53.001999 8.518853 10.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 72.000000 5.000000
      vertex -31.974001 72.000000 3.000000
      vertex 54.002998 72.000000 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 54.002998 -34.000000 3.000000
      vertex 54.002998 -54.000000 5.000000
      vertex 54.002998 -34.000000 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 54.002998 -54.000000 3.000000
      vertex 54.002998 -54.000000 5.000000
      vertex 54.002998 -34.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 -19.000000 13.000000
      vertex -52.971001 -20.997999 13.000000
      vertex 8.017000 -20.997999 13.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 6.120000 6.727000
      vertex -54.967999 6.475000 6.029000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 -61.000000 0.000000
      vertex -54.967999 5.998000 7.500000
      vertex -54.967999 6.120000 6.727000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 -20.997999 13.000000
      vertex -53.001999 -19.000000 13.000000
      vertex -53.001999 -59.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -53.001999 -59.002998 13.000000
      vertex -52.971001 -59.002998 13.000000
      vertex -52.971001 -20.997999 13.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 6.475000 6.029000
      vertex -54.967999 7.029000 5.475000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 7.029000 5.475000
      vertex -54.967999 7.727000 5.120000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 8.017000 -20.997999 13.000000
      vertex 10.014000 -19.000000 13.000000
      vertex -53.001999 -19.000000 13.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 8.017000 -20.997999 13.000000
      vertex 8.017000 -35.998001 13.000000
      vertex 10.014000 -35.998001 13.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 10.014000 -35.998001 13.000000
      vertex 10.014000 -19.000000 13.000000
      vertex 8.017000 -20.997999 13.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 7.727000 5.120000
      vertex -54.967999 8.500000 4.998000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 8.017000 -59.002998 13.000000
      vertex 10.014000 -42.002998 13.000000
      vertex 8.017000 -42.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 10.014000 -59.002998 13.000000
      vertex 10.014000 -42.002998 13.000000
      vertex 8.017000 -59.002998 13.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 61.000999 -61.000000 18.000000
      vertex -54.967999 -61.000000 18.000000
      vertex 61.000999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 79.000000 0.000000
      vertex -54.967999 8.500000 4.998000
      vertex -54.967999 9.273000 5.120000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 61.000999 -61.000000 0.000000
      vertex -54.967999 -61.000000 18.000000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 9.273000 5.120000
      vertex -54.967999 9.971000 5.475000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -30.587999 77.002998 6.823000
      vertex -30.872999 77.002998 7.381000
      vertex -31.974001 77.002998 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 9.971000 5.475000
      vertex -54.967999 10.525000 6.029000
      vertex -54.967999 79.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.707107 0.707107
    outer loop
      vertex -54.967999 9.971000 5.475000
      vertex -52.971001 10.525000 6.029000
      vertex -54.967999 10.525000 6.029000
    endloop
  endfacet
  facet normal 0.000000 -0.707107 0.707107
    outer loop
      vertex -52.971001 9.971000 5.475000
      vertex -52.971001 10.525000 6.029000
      vertex -54.967999 9.971000 5.475000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 77.002998 5.000000
      vertex -30.145000 77.002998 6.380000
      vertex -30.587999 77.002998 6.823000
    endloop
  endfacet
  facet normal 0.000000 -0.891341 0.453333
    outer loop
      vertex -54.967999 10.525000 6.029000
      vertex -52.971001 10.880000 6.727000
      vertex -54.967999 10.880000 6.727000
    endloop
  endfacet
  facet normal 0.000000 -0.891341 0.453333
    outer loop
      vertex -52.971001 10.525000 6.029000
      vertex -52.971001 10.880000 6.727000
      vertex -54.967999 10.525000 6.029000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 77.002998 5.000000
      vertex -29.587000 77.002998 6.096000
      vertex -30.145000 77.002998 6.380000
    endloop
  endfacet
  facet normal 0.000000 -0.987576 0.157144
    outer loop
      vertex -54.967999 10.880000 6.727000
      vertex -52.971001 11.003000 7.500000
      vertex -54.967999 11.003000 7.500000
    endloop
  endfacet
  facet normal 0.000000 -0.987576 0.157144
    outer loop
      vertex -52.971001 10.880000 6.727000
      vertex -52.971001 11.003000 7.500000
      vertex -54.967999 10.880000 6.727000
    endloop
  endfacet
  facet normal 0.000000 -0.987576 -0.157144
    outer loop
      vertex -54.967999 11.003000 7.500000
      vertex -52.971001 11.003000 7.500000
      vertex -54.967999 10.880000 8.273000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -27.791000 77.002998 6.380000
      vertex -28.350000 77.002998 6.096000
      vertex 59.004002 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.987773 -0.155897
    outer loop
      vertex -52.971001 5.998000 7.500000
      vertex -54.967999 6.120000 8.273000
      vertex -52.971001 6.120000 8.273000
    endloop
  endfacet
  facet normal 0.000000 0.987773 -0.155897
    outer loop
      vertex -54.967999 5.998000 7.500000
      vertex -54.967999 6.120000 8.273000
      vertex -52.971001 5.998000 7.500000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 5.000000
      vertex -27.348000 77.002998 6.823000
      vertex -27.791000 77.002998 6.380000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 9.273000 9.880000
      vertex -54.967999 5.998000 13.000000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal 0.000000 -0.987576 -0.157144
    outer loop
      vertex -52.971001 11.003000 7.500000
      vertex -52.971001 10.880000 8.273000
      vertex -54.967999 10.880000 8.273000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 9.273000 9.880000
      vertex -54.967999 8.500000 10.003000
      vertex -54.967999 5.998000 13.000000
    endloop
  endfacet
  facet normal 0.000000 -0.891341 -0.453333
    outer loop
      vertex -54.967999 10.880000 8.273000
      vertex -52.971001 10.525000 8.971000
      vertex -54.967999 10.525000 8.971000
    endloop
  endfacet
  facet normal -0.000000 -0.891341 -0.453333
    outer loop
      vertex -52.971001 10.880000 8.273000
      vertex -52.971001 10.525000 8.971000
      vertex -54.967999 10.880000 8.273000
    endloop
  endfacet
  facet normal 0.000000 -0.707107 -0.707107
    outer loop
      vertex -54.967999 10.525000 8.971000
      vertex -52.971001 9.971000 9.525000
      vertex -54.967999 9.971000 9.525000
    endloop
  endfacet
  facet normal -0.000000 -0.707107 -0.707107
    outer loop
      vertex -52.971001 10.525000 8.971000
      vertex -52.971001 9.971000 9.525000
      vertex -54.967999 10.525000 8.971000
    endloop
  endfacet
  facet normal 0.000000 -0.453333 -0.891341
    outer loop
      vertex -52.971001 9.273000 9.880000
      vertex -54.967999 9.971000 9.525000
      vertex -52.971001 9.971000 9.525000
    endloop
  endfacet
  facet normal 0.000000 -0.453333 -0.891341
    outer loop
      vertex -54.967999 9.273000 9.880000
      vertex -54.967999 9.971000 9.525000
      vertex -52.971001 9.273000 9.880000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 6.475000 8.971000
      vertex -54.967999 6.120000 8.273000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 6.120000 8.273000
      vertex -54.967999 5.998000 7.500000
      vertex -54.967999 -61.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.157143 -0.987576
    outer loop
      vertex -52.971001 9.273000 9.880000
      vertex -52.971001 8.518853 10.000000
      vertex -53.001999 8.518853 10.000000
    endloop
  endfacet
  facet normal 0.000000 -0.157143 -0.987576
    outer loop
      vertex -53.001999 8.518853 10.000000
      vertex -54.967999 9.273000 9.880000
      vertex -52.971001 9.273000 9.880000
    endloop
  endfacet
  facet normal -0.000000 -0.157144 -0.987576
    outer loop
      vertex -54.967999 8.500000 10.003000
      vertex -54.967999 9.273000 9.880000
      vertex -53.001999 8.518853 10.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 10.880000 6.727000
      vertex -54.967999 11.003000 7.500000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 10.880000 8.273000
      vertex -54.967999 10.525000 8.971000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -54.967999 10.525000 8.971000
      vertex -54.967999 9.971000 9.525000
      vertex -54.967999 55.998001 18.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -54.967999 55.998001 18.000000
      vertex -54.967999 79.000000 0.000000
      vertex -54.967999 10.880000 6.727000
    endloop
  endfacet
  facet normal -0.000000 0.157144 -0.987576
    outer loop
      vertex -54.967999 7.727000 9.880000
      vertex -54.967999 8.500000 10.003000
      vertex -53.001999 8.481147 10.000000
    endloop
  endfacet
  facet normal 0.000000 0.157143 -0.987576
    outer loop
      vertex -53.001999 8.481147 10.000000
      vertex -52.971001 7.727000 9.880000
      vertex -54.967999 7.727000 9.880000
    endloop
  endfacet
  facet normal 0.000000 0.157143 -0.987576
    outer loop
      vertex -52.971001 8.481147 10.000000
      vertex -52.971001 7.727000 9.880000
      vertex -53.001999 8.481147 10.000000
    endloop
  endfacet
  facet normal 0.000000 0.453333 -0.891341
    outer loop
      vertex -54.967999 7.727000 9.880000
      vertex -52.971001 7.029000 9.525000
      vertex -54.967999 7.029000 9.525000
    endloop
  endfacet
  facet normal 0.000000 0.453333 -0.891341
    outer loop
      vertex -52.971001 7.727000 9.880000
      vertex -52.971001 7.029000 9.525000
      vertex -54.967999 7.727000 9.880000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 32.006001 -32.001999 6.998000
      vertex 26.007999 -32.001999 4.998000
      vertex 26.007999 -32.001999 17.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 26.007999 -32.001999 17.000000
      vertex 32.006001 -32.001999 17.000000
      vertex 32.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.707107 -0.707107
    outer loop
      vertex -54.967999 7.029000 9.525000
      vertex -52.971001 6.475000 8.971000
      vertex -54.967999 6.475000 8.971000
    endloop
  endfacet
  facet normal 0.000000 0.707107 -0.707107
    outer loop
      vertex -52.971001 7.029000 9.525000
      vertex -52.971001 6.475000 8.971000
      vertex -54.967999 7.029000 9.525000
    endloop
  endfacet
  facet normal 0.000000 0.891341 -0.453333
    outer loop
      vertex -54.967999 6.475000 8.971000
      vertex -52.971001 6.120000 8.273000
      vertex -54.967999 6.120000 8.273000
    endloop
  endfacet
  facet normal 0.000000 0.891341 -0.453333
    outer loop
      vertex -52.971001 6.475000 8.971000
      vertex -52.971001 6.120000 8.273000
      vertex -54.967999 6.475000 8.971000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -32.001999 9.000000
      vertex 54.002998 -32.001999 5.000000
      vertex 52.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -32.001999 9.000000
      vertex 59.004002 -32.001999 9.000000
      vertex 59.004002 -32.001999 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.004002 -32.001999 5.000000
      vertex 54.002998 -32.001999 5.000000
      vertex 59.002998 -32.001999 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 59.002998 -32.001999 9.000000
      vertex 52.006001 -32.001999 6.998000
      vertex 52.006001 -32.001999 17.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 32.006001 -32.001999 6.998000
      vertex 52.006001 -34.000000 6.998000
      vertex 52.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 32.006001 -34.000000 6.998000
      vertex 52.006001 -34.000000 6.998000
      vertex 32.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 -34.000000 5.000000
      vertex 59.004002 -59.002998 9.000000
      vertex 59.004002 -34.000000 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 -59.002998 5.000000
      vertex 59.004002 -59.002998 9.000000
      vertex 59.004002 -34.000000 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 12.000000 9.000000
      vertex 59.004002 77.002998 5.000000
      vertex 59.004002 12.000000 5.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex 59.004002 77.002998 9.000000
      vertex 59.004002 77.002998 5.000000
      vertex 59.004002 12.000000 9.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 32.006001 -34.000000 6.998000
      vertex 32.006001 -32.001999 17.000000
      vertex 32.006001 -34.000000 17.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 32.006001 -32.001999 6.998000
      vertex 32.006001 -32.001999 17.000000
      vertex 32.006001 -34.000000 6.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 10.003000 5.000000
      vertex 59.004002 -32.001999 9.000000
      vertex 59.004002 10.003000 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 59.004002 -32.001999 5.000000
      vertex 59.004002 -32.001999 9.000000
      vertex 59.004002 10.003000 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex 52.006001 -32.001999 17.000000
      vertex 52.006001 -32.001999 6.998000
      vertex 52.006001 -34.000000 6.998000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex 52.006001 -32.001999 17.000000
      vertex 52.006001 -34.000000 6.998000
      vertex 52.006001 -34.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex -27.791000 77.002998 9.620000
      vertex -27.348000 77.002998 9.177000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -26.966000 77.002998 8.000000
      vertex 59.002998 77.002998 9.000000
      vertex 59.002998 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -26.966000 77.002998 8.000000
      vertex 59.004002 77.002998 5.000000
      vertex 59.002998 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -26.966000 77.002998 8.000000
      vertex -27.063999 77.002998 7.381000
      vertex 59.004002 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex -27.063999 77.002998 8.619000
      vertex -26.966000 77.002998 8.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -28.350000 77.002998 9.904000
      vertex -27.791000 77.002998 9.620000
      vertex 59.002998 77.002998 18.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 26.007999 10.003000 4.998000
      vertex 26.007999 10.003000 17.000000
      vertex 26.007999 -32.001999 17.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 26.007999 -32.001999 17.000000
      vertex 26.007999 -32.001999 4.998000
      vertex 26.007999 10.003000 4.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex -27.348000 77.002998 9.177000
      vertex -27.063999 77.002998 8.619000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 5.000000
      vertex 59.004002 77.002998 9.000000
      vertex 59.002998 77.002998 9.000000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex 10.014000 -54.000000 5.000000
      vertex 10.014000 -42.002998 4.998000
      vertex 10.014000 -42.002998 13.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 5.000000
      vertex -27.063999 77.002998 7.381000
      vertex -27.348000 77.002998 6.823000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.004002 77.002998 5.000000
      vertex -28.350000 77.002998 6.096000
      vertex -28.968000 77.002998 5.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -28.968000 77.002998 5.998000
      vertex -31.974001 77.002998 5.000000
      vertex 59.004002 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 77.002998 5.000000
      vertex -28.968000 77.002998 5.998000
      vertex -29.587000 77.002998 6.096000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -47.970001 54.000000 5.000000
      vertex -31.974001 54.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 54.000000 10.000000
      vertex -52.971001 54.000000 5.000000
      vertex -47.970001 54.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 -19.000000 13.000000
      vertex -53.001999 8.481147 10.000000
      vertex -53.001999 8.500000 10.003000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -31.974001 72.000000 5.000000
      vertex -31.974001 77.002998 5.000000
      vertex -31.974001 77.002998 11.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -30.872999 77.002998 7.381000
      vertex -30.971001 77.002998 8.000000
      vertex -31.974001 77.002998 5.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -30.971001 77.002998 8.000000
      vertex -31.974001 77.002998 11.000000
      vertex -31.974001 77.002998 5.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -30.872999 77.002998 8.619000
      vertex -31.974001 77.002998 11.000000
      vertex -30.971001 77.002998 8.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 8.518853 10.000000
      vertex -53.001999 54.000000 11.998000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 8.518853 10.000000
      vertex -53.001999 54.000000 10.000000
      vertex -53.001999 54.000000 11.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 -19.000000 10.000000
      vertex -53.001999 8.481147 10.000000
      vertex -53.001999 -19.000000 13.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -33.971001 77.002998 5.000000
      vertex -33.971001 77.002998 10.366169
      vertex -33.971008 77.002998 10.366169
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -37.970001 77.002998 6.998000
      vertex -33.971001 77.002998 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -33.971001 77.002998 10.366169
      vertex -33.971001 77.002998 5.000000
      vertex -33.971001 72.000000 5.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -33.971001 72.000000 5.000000
      vertex -33.971001 55.998001 10.366169
      vertex -33.971001 77.002998 10.366169
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -33.971001 55.998001 4.998000
      vertex -33.971001 55.998001 10.366169
      vertex -33.971001 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -37.997002 77.002998 9.000000
      vertex -37.970001 79.000000 9.000000
      vertex -37.970001 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -37.997002 79.000000 9.000000
      vertex -37.970001 79.000000 9.000000
      vertex -37.997002 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 -0.157160 -0.987573
    outer loop
      vertex -53.001999 8.518853 10.000000
      vertex -53.001999 8.500000 10.003000
      vertex -54.967999 8.500000 10.003000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -33.971001 55.998001 4.998000
      vertex -47.970001 55.998001 5.000000
      vertex -33.971008 55.998001 10.366169
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 55.998001 5.000000
      vertex -52.971001 55.998001 5.000000
      vertex -52.968018 55.998001 10.034830
    endloop
  endfacet
  facet normal 0.000000 0.157160 -0.987573
    outer loop
      vertex -53.001999 8.481147 10.000000
      vertex -54.967999 8.500000 10.003000
      vertex -53.001999 8.500000 10.003000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -52.971001 54.000000 10.000000
      vertex -47.970001 54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -53.001999 54.000000 11.998000
      vertex -53.001999 54.000000 10.000000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 10.014000 -19.000000 13.000000
      vertex -47.970001 -19.000000 5.000000
      vertex -52.971001 -19.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 -19.000000 5.000000
      vertex -52.971001 -19.000000 5.000000
      vertex -52.971001 -19.000000 10.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -52.971001 -19.000000 10.000000
      vertex -53.001999 -19.000000 13.000000
      vertex 10.014000 -19.000000 13.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -49.001999 77.002998 6.998000
      vertex -37.970001 79.000000 6.998000
      vertex -49.001999 79.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -37.970001 77.002998 6.998000
      vertex -37.970001 79.000000 6.998000
      vertex -49.001999 77.002998 6.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -32.001949 54.000000 11.998000
      vertex -53.001999 54.000000 11.998000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -53.001999 54.000000 11.998000
      vertex -52.971001 54.000000 10.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -37.970001 79.000000 6.998000
      vertex -37.970001 77.002998 9.000000
      vertex -37.970001 79.000000 9.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -37.970001 77.002998 6.998000
      vertex -37.970001 77.002998 9.000000
      vertex -37.970001 79.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -47.970001 -20.997999 5.000000
      vertex 8.017000 -20.997999 13.000000
      vertex -52.971001 -20.997999 13.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 8.017000 -20.997999 4.998000
      vertex 8.017000 -20.997999 13.000000
      vertex -47.970001 -20.997999 5.000000
    endloop
  endfacet
  facet normal -0.987698 0.000000 -0.156371
    outer loop
      vertex -26.966000 79.000000 8.000000
      vertex -27.063999 77.002998 8.619000
      vertex -27.063999 79.000000 8.619000
    endloop
  endfacet
  facet normal -0.987698 0.000000 -0.156371
    outer loop
      vertex -26.966000 77.002998 8.000000
      vertex -27.063999 77.002998 8.619000
      vertex -26.966000 79.000000 8.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -35.998001 4.998000
      vertex 8.017000 -20.997999 13.000000
      vertex 8.017000 -20.997999 4.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -35.998001 13.000000
      vertex 8.017000 -20.997999 13.000000
      vertex 8.017000 -35.998001 4.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -54.000000 5.000000
      vertex 8.017000 -42.002998 13.000000
      vertex 8.017000 -42.002998 4.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 8.017000 -54.000000 5.000000
      vertex 8.017000 -59.002998 5.000000
      vertex 8.017000 -59.002998 13.000000
    endloop
  endfacet
  facet normal 0.987698 0.000000 -0.156374
    outer loop
      vertex -30.872999 77.002998 8.619000
      vertex -30.971001 77.002998 8.000000
      vertex -30.971001 79.000000 8.000000
    endloop
  endfacet
  facet normal 0.987698 0.000000 -0.156374
    outer loop
      vertex -30.971001 79.000000 8.000000
      vertex -30.872999 79.000000 8.619000
      vertex -30.872999 77.002998 8.619000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 8.017000 -35.998001 13.000000
      vertex 8.017000 -35.998001 4.998000
      vertex 10.014000 -35.998001 4.998000
    endloop
  endfacet
  facet normal 0.987698 0.000000 0.156375
    outer loop
      vertex -30.971001 79.000000 8.000000
      vertex -30.872999 77.002998 7.381000
      vertex -30.872999 79.000000 7.381000
    endloop
  endfacet
  facet normal 0.987698 -0.000000 0.156375
    outer loop
      vertex -30.971001 77.002998 8.000000
      vertex -30.872999 77.002998 7.381000
      vertex -30.971001 79.000000 8.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 8.017000 -42.002998 4.998000
      vertex 8.017000 -42.002998 13.000000
      vertex 10.014000 -42.002998 4.998000
    endloop
  endfacet
  facet normal 0.890564 0.000000 0.454858
    outer loop
      vertex -30.872999 79.000000 7.381000
      vertex -30.587999 77.002998 6.823000
      vertex -30.587999 79.000000 6.823000
    endloop
  endfacet
  facet normal 0.890564 -0.000000 0.454858
    outer loop
      vertex -30.872999 77.002998 7.381000
      vertex -30.587999 77.002998 6.823000
      vertex -30.872999 79.000000 7.381000
    endloop
  endfacet
  facet normal 0.707108 0.000000 0.707106
    outer loop
      vertex -30.587999 79.000000 6.823000
      vertex -30.145000 77.002998 6.380000
      vertex -30.145000 79.000000 6.380000
    endloop
  endfacet
  facet normal 0.707108 -0.000000 0.707106
    outer loop
      vertex -30.587999 77.002998 6.823000
      vertex -30.145000 77.002998 6.380000
      vertex -30.587999 79.000000 6.823000
    endloop
  endfacet
  facet normal 0.453590 0.000000 0.891210
    outer loop
      vertex -30.145000 79.000000 6.380000
      vertex -29.587000 77.002998 6.096000
      vertex -29.587000 79.000000 6.096000
    endloop
  endfacet
  facet normal 0.453590 -0.000000 0.891210
    outer loop
      vertex -30.145000 77.002998 6.380000
      vertex -29.587000 77.002998 6.096000
      vertex -30.145000 79.000000 6.380000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 54.002998 72.000000 5.000000
      vertex 59.004002 77.002998 5.000000
      vertex -31.974001 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -31.974001 77.002998 5.000000
      vertex -31.974001 72.000000 5.000000
      vertex 54.002998 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -29.587000 79.000000 9.904000
      vertex -37.997002 79.000000 11.003000
      vertex -28.968000 79.000000 10.003000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -30.145000 79.000000 9.620000
      vertex -37.997002 79.000000 11.003000
      vertex -29.587000 79.000000 9.904000
    endloop
  endfacet
  facet normal 0.156372 0.000000 0.987698
    outer loop
      vertex -29.587000 79.000000 6.096000
      vertex -28.968000 77.002998 5.998000
      vertex -28.968000 79.000000 5.998000
    endloop
  endfacet
  facet normal 0.156372 -0.000000 0.987698
    outer loop
      vertex -29.587000 77.002998 6.096000
      vertex -28.968000 77.002998 5.998000
      vertex -29.587000 79.000000 6.096000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -33.971001 72.000000 5.000000
      vertex -33.971001 77.002998 5.000000
      vertex -47.970001 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 -54.000000 5.000000
      vertex 59.004002 -34.000000 5.000000
      vertex 54.002998 -34.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 72.000000 5.000000
      vertex 54.002998 12.000000 5.000000
      vertex 59.004002 12.000000 5.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 72.000000 5.000000
      vertex 59.004002 12.000000 5.000000
      vertex 59.004002 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 61.000999 79.000000 18.000000
      vertex 61.000999 79.000000 0.000000
      vertex -26.966000 79.000000 8.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 -32.001999 5.000000
      vertex 59.004002 10.003000 5.000000
      vertex 54.002998 10.003000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 59.004002 -32.001999 5.000000
      vertex 59.004002 10.003000 5.000000
      vertex 54.002998 -32.001999 5.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 8.487328 5.000000
      vertex -52.971001 -19.000000 5.000000
      vertex -51.966000 8.487328 5.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -54.999001 79.000000 11.956590
      vertex -54.999001 79.000000 11.998000
      vertex -49.001999 79.000000 11.003000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.997002 79.000000 11.003000
      vertex -30.145000 79.000000 9.620000
      vertex -30.587999 79.000000 9.177000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -51.966000 8.512672 5.000000
      vertex -52.971001 54.000000 5.000000
      vertex -52.971001 8.512672 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -27.791000 79.000000 9.620000
      vertex -28.350000 79.000000 9.904000
      vertex 61.000999 79.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 54.000000 5.000000
      vertex -52.971001 54.000000 5.000000
      vertex -51.966000 8.512672 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 77.002998 5.000000
      vertex -52.971001 55.998001 5.000000
      vertex -47.970001 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -28.968000 79.000000 10.003000
      vertex -37.997002 79.000000 11.003000
      vertex -54.999001 79.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -51.966000 8.512672 5.000000
      vertex -51.966000 8.487328 5.000000
      vertex -47.970001 -19.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -51.966000 8.487328 5.000000
      vertex -52.971001 -19.000000 5.000000
      vertex -47.970001 -19.000000 5.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -51.966000 8.512672 5.000000
      vertex -47.970001 -19.000000 5.000000
      vertex -47.970001 54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 55.998001 5.000000
      vertex -47.970001 55.998001 5.000000
      vertex -47.970001 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -47.970001 72.000000 5.000000
      vertex -33.971001 77.002998 5.000000
      vertex -52.971001 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -47.970001 -54.000000 5.000000
      vertex -47.970001 -20.997999 5.000000
      vertex -52.971001 -20.997999 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.971001 -20.997999 5.000000
      vertex -52.971001 -59.002998 5.000000
      vertex -47.970001 -54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 10.014000 -59.002998 5.000000
      vertex 54.002998 -54.000000 5.000000
      vertex 10.014000 -54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 -54.000000 5.000000
      vertex 10.014000 -59.002998 5.000000
      vertex 59.004002 -59.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 59.004002 -59.002998 5.000000
      vertex 59.004002 -34.000000 5.000000
      vertex 54.002998 -54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -49.001999 79.000000 11.003000
      vertex -49.001999 79.000000 6.998000
      vertex -54.967999 79.000000 9.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -54.999001 79.000000 11.998000
      vertex -54.999001 79.000000 18.000000
      vertex -49.001999 79.000000 11.003000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 8.017000 -59.002998 5.000000
      vertex 8.017000 -54.000000 5.000000
      vertex -47.970001 -54.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 -54.000000 5.000000
      vertex -52.971001 -59.002998 5.000000
      vertex 8.017000 -59.002998 5.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex 24.011000 12.000000 17.000000
      vertex 24.011000 -34.000000 3.000000
      vertex 24.011000 -34.000000 17.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 24.011000 12.000000 3.000000
      vertex 24.011000 -34.000000 3.000000
      vertex 24.011000 12.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -37.997002 79.000000 11.003000
      vertex -49.001999 79.000000 11.003000
      vertex -54.999001 79.000000 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 24.011000 -34.000000 3.000000
      vertex 32.006001 -34.000000 6.998000
      vertex 24.011000 -34.000000 17.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 24.011000 -34.000000 3.000000
      vertex 54.002998 -34.000000 3.000000
      vertex 32.006001 -34.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex -28.968000 77.002998 10.003000
      vertex -28.350000 77.002998 9.904000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 42.002998 12.000000 6.998000
      vertex 54.002998 12.000000 5.000000
      vertex 54.002998 12.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 54.002998 12.000000 3.000000
      vertex 24.011000 12.000000 3.000000
      vertex 42.002998 12.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 24.011000 12.000000 3.000000
      vertex 24.011000 12.000000 17.000000
      vertex 42.002998 12.000000 6.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 54.002998 10.003000 5.000000
      vertex 52.006001 10.003000 6.998000
      vertex 42.002998 10.003000 6.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 54.002998 10.003000 4.998000
      vertex 54.002998 10.003000 5.000000
      vertex 42.002998 10.003000 6.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 32.006001 -32.001999 6.998000
      vertex 54.002998 -32.001999 5.000000
      vertex 54.002998 -32.001999 4.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 54.002998 -32.001999 4.998000
      vertex 26.007999 -32.001999 4.998000
      vertex 32.006001 -32.001999 6.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 54.002998 10.003000 4.998000
      vertex 26.007999 -32.001999 4.998000
      vertex 54.002998 -32.001999 4.998000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 26.007999 10.003000 4.998000
      vertex 26.007999 -32.001999 4.998000
      vertex 54.002998 10.003000 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 10.014000 -19.000000 13.000000
      vertex 10.014000 -35.998001 4.998000
      vertex 10.014000 -19.000000 3.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 10.014000 -54.000000 5.000000
      vertex 10.014000 -54.000000 3.000000
      vertex 10.014000 -42.002998 4.998000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -30.587999 77.002998 9.177000
      vertex -31.974001 77.002998 11.000000
      vertex -30.872999 77.002998 8.619000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 10.014000 -35.998001 4.998000
      vertex 10.014000 -42.002998 4.998000
      vertex 10.014000 -54.000000 3.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 10.014000 -54.000000 3.000000
      vertex 10.014000 -19.000000 3.000000
      vertex 10.014000 -35.998001 4.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 54.000000 3.000000
      vertex -31.974001 54.000000 11.000000
      vertex -31.984484 54.000000 11.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -30.145000 77.002998 9.620000
      vertex -29.587000 77.002998 9.904000
      vertex -31.974001 77.002998 11.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -29.587000 77.002998 9.904000
      vertex -28.968000 77.002998 10.003000
      vertex -32.001949 77.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex -31.974001 77.002998 11.000000
      vertex -29.587000 77.002998 9.904000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 59.002998 77.002998 18.000000
      vertex -32.001949 77.002998 11.998000
      vertex -28.350000 77.002998 9.904000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -31.974001 72.000000 3.000000
      vertex -31.974001 72.000000 5.000000
      vertex -31.974001 54.000000 3.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -33.971001 72.000000 4.998000
      vertex -33.971001 55.998001 4.998000
      vertex -33.971001 72.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -31.974001 77.002998 11.000000
      vertex -30.587999 77.002998 9.177000
      vertex -30.145000 77.002998 9.620000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 72.000000 4.998000
      vertex -33.971001 55.998001 4.998000
      vertex -33.971001 72.000000 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 55.998001 4.998000
      vertex -33.971001 55.998001 4.998000
      vertex -47.970001 72.000000 4.998000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 55.998001 5.000000
      vertex -33.971001 55.998001 4.998000
      vertex -47.970001 55.998001 4.998000
    endloop
  endfacet
  facet normal -0.158177 0.000000 -0.987411
    outer loop
      vertex -28.350000 77.002998 9.904000
      vertex -28.968000 77.002998 10.003000
      vertex -28.968000 79.000000 10.003000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 -19.000000 5.000000
      vertex 10.014000 -19.000000 13.000000
      vertex 10.014000 -19.000000 3.000000
    endloop
  endfacet
  facet normal 0.157928 0.000000 -0.987451
    outer loop
      vertex -29.587000 79.000000 9.904000
      vertex -28.968000 79.000000 10.003000
      vertex -28.968000 77.002998 10.003000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -47.970001 -19.000000 3.000000
      vertex -47.970001 -19.000000 5.000000
      vertex 10.014000 -19.000000 3.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -47.970001 -20.997999 4.998000
      vertex 8.017000 -20.997999 4.998000
      vertex -47.970001 -20.997999 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -31.974001 72.000000 5.000000
      vertex -31.974001 77.002998 11.000000
      vertex -31.974001 54.000000 11.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 -54.000000 4.998000
      vertex 8.017000 -42.002998 4.998000
      vertex 8.017000 -35.998001 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -47.970001 -54.000000 4.998000
      vertex 8.017000 -54.000000 4.998000
      vertex 8.017000 -42.002998 4.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 8.017000 -35.998001 4.998000
      vertex -47.970001 -20.997999 4.998000
      vertex -47.970001 -54.000000 4.998000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 8.017000 -35.998001 4.998000
      vertex 8.017000 -20.997999 4.998000
      vertex -47.970001 -20.997999 4.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -31.974001 54.000000 11.000000
      vertex -31.974001 54.000000 3.000000
      vertex -31.974001 72.000000 5.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 55.998001 5.000000
      vertex -52.971001 77.002998 10.034779
      vertex -52.971001 55.998001 10.034779
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -52.971001 77.002998 5.000000
      vertex -52.971001 77.002998 10.034779
      vertex -52.971001 55.998001 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -49.001999 77.002998 11.003000
      vertex -52.971001 77.002998 10.205243
      vertex -52.968018 77.002998 10.034830
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.968018 77.002998 10.034830
      vertex -52.971001 77.002998 10.034779
      vertex -52.971001 77.002998 5.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 5.000000
      vertex -49.001999 77.002998 6.998000
      vertex -52.968018 77.002998 10.034830
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -37.997002 77.002998 11.003000
      vertex -37.970001 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -37.997002 77.002998 11.003000
      vertex -37.997002 77.002998 9.000000
      vertex -37.970001 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -37.970001 77.002998 9.000000
      vertex -37.970001 77.002998 6.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -49.001999 79.000000 6.998000
      vertex -49.001999 79.000000 11.003000
      vertex -49.001999 77.002998 11.003000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -49.001999 77.002998 11.003000
      vertex -49.001999 77.002998 6.998000
      vertex -49.001999 79.000000 6.998000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -37.997002 77.002998 9.000000
      vertex -37.997002 77.002998 11.003000
      vertex -37.997002 79.000000 11.003000
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -37.997002 79.000000 11.003000
      vertex -37.997002 79.000000 9.000000
      vertex -37.997002 77.002998 9.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -52.971001 55.998001 5.000000
      vertex -52.971001 55.998001 10.034779
      vertex -52.968018 55.998001 10.034830
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -52.968018 55.998001 10.034830
      vertex -33.971008 55.998001 10.366169
      vertex -47.970001 55.998001 5.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -33.971008 55.998001 10.366169
      vertex -33.971001 55.998001 10.366169
      vertex -33.971001 55.998001 4.998000
    endloop
  endfacet
  facet normal 0.017261 0.000000 -0.999851
    outer loop
      vertex -52.971001 55.998001 10.034779
      vertex -52.968018 77.002998 10.034830
      vertex -52.968018 55.998001 10.034830
    endloop
  endfacet
  facet normal 0.017261 0.000000 -0.999851
    outer loop
      vertex -52.971001 77.002998 10.034779
      vertex -52.968018 77.002998 10.034830
      vertex -52.971001 55.998001 10.034779
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -33.971001 55.998001 10.366169
      vertex -33.971008 55.998001 10.366169
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -33.971001 77.002998 10.366169
      vertex -33.971001 55.998001 10.366169
      vertex -33.971008 77.002998 10.366169
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex 59.002998 77.002998 18.000000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex -31.984484 77.002998 11.000000
      vertex -31.974001 77.002998 11.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -31.974001 77.002998 11.000000
      vertex -31.984484 77.002998 11.000000
      vertex -31.984484 54.000000 11.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -31.974001 54.000000 11.000000
      vertex -31.974001 77.002998 11.000000
    endloop
  endfacet
  facet normal 0.999847 0.000000 0.017498
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex -32.001949 54.000000 11.998000
      vertex -31.984484 54.000000 11.000000
    endloop
  endfacet
  facet normal 0.999847 -0.000000 0.017498
    outer loop
      vertex -31.984484 54.000000 11.000000
      vertex -31.984484 77.002998 11.000000
      vertex -32.001949 77.002998 11.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -53.001999 77.002998 11.977336
      vertex -53.001999 77.002998 18.000000
      vertex -53.001999 55.998001 11.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex -53.001999 55.998001 11.998000
      vertex -53.001999 77.002998 18.000000
      vertex -53.001999 54.000000 11.998000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -53.001999 55.998001 11.998000
      vertex -53.001999 55.998001 11.977336
      vertex -53.001999 77.002998 11.977336
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -52.984901 77.002998 11.000000
      vertex -52.971001 55.998001 11.000000
      vertex -52.971001 77.002998 11.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -52.984901 55.998001 11.000000
      vertex -52.971001 55.998001 11.000000
      vertex -52.984901 77.002998 11.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 10.205243
      vertex -52.971001 55.998001 11.000000
      vertex -52.971001 55.998001 10.205243
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -52.971001 77.002998 11.000000
      vertex -52.971001 55.998001 11.000000
      vertex -52.971001 77.002998 10.205243
    endloop
  endfacet
  facet normal 0.999847 0.000000 0.017491
    outer loop
      vertex -52.984901 55.998001 11.000000
      vertex -53.001999 77.002998 11.977336
      vertex -53.001999 55.998001 11.977336
    endloop
  endfacet
  facet normal 0.999847 0.000000 0.017491
    outer loop
      vertex -52.984901 77.002998 11.000000
      vertex -53.001999 77.002998 11.977336
      vertex -52.984901 55.998001 11.000000
    endloop
  endfacet
  facet normal 0.999847 0.000000 0.017502
    outer loop
      vertex -52.968018 55.998001 10.034830
      vertex -52.971001 77.002998 10.205243
      vertex -52.971001 55.998001 10.205243
    endloop
  endfacet
  facet normal 0.999847 0.000000 0.017502
    outer loop
      vertex -52.968018 77.002998 10.034830
      vertex -52.971001 77.002998 10.205243
      vertex -52.968018 55.998001 10.034830
    endloop
  endfacet
  facet normal -0.999847 0.000000 -0.017490
    outer loop
      vertex -33.971008 55.998001 10.366169
      vertex -33.999554 55.998001 11.998000
      vertex -33.999554 77.002998 11.998000
    endloop
  endfacet
  facet normal -0.999847 -0.000000 -0.017490
    outer loop
      vertex -33.971008 77.002998 10.366169
      vertex -33.971008 55.998001 10.366169
      vertex -33.999554 77.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -32.001949 77.002998 11.998000
      vertex -33.999554 55.998001 11.998000
      vertex -32.001949 54.000000 11.998000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -33.999554 77.002998 11.998000
      vertex -33.999554 55.998001 11.998000
      vertex -32.001949 77.002998 11.998000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -49.001999 77.002998 11.003000
      vertex -37.997002 77.002998 11.003000
      vertex -53.001999 77.002998 18.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -53.001999 77.002998 18.000000
      vertex -53.001999 77.002998 11.977336
      vertex -49.001999 77.002998 11.003000
    endloop
  endfacet
endsolid Mesh
```

### Lid

```stl
solid Mesh
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 49.000000 68.000000 0.000000
      vertex 49.000000 -72.000000 2.000000
      vertex 49.000000 -72.000000 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 49.000000 68.000000 2.000000
      vertex 49.000000 -72.000000 2.000000
      vertex 49.000000 68.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -67.000000 -72.000000 0.000000
      vertex -67.000000 68.000000 2.000000
      vertex -67.000000 68.000000 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -67.000000 -72.000000 2.000000
      vertex -67.000000 68.000000 2.000000
      vertex -67.000000 -72.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -67.000000 68.000000 0.000000
      vertex 49.000000 -72.000000 0.000000
      vertex -67.000000 -72.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex 49.000000 68.000000 0.000000
      vertex 49.000000 -72.000000 0.000000
      vertex -67.000000 68.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 47.000000 -70.000000 2.000000
      vertex -65.000000 -70.000000 5.000000
      vertex -65.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 47.000000 -70.000000 5.000000
      vertex -65.000000 -70.000000 5.000000
      vertex 47.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 47.000000 66.000000 2.000000
      vertex 47.000000 -70.000000 5.000000
      vertex 47.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 47.000000 66.000000 5.000000
      vertex 47.000000 -70.000000 5.000000
      vertex 47.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -65.000000 -70.000000 2.000000
      vertex -65.000000 66.000000 5.000000
      vertex -65.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -65.000000 -70.000000 5.000000
      vertex -65.000000 66.000000 5.000000
      vertex -65.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -65.000000 -70.000000 5.000000
      vertex 47.000000 66.000000 5.000000
      vertex -65.000000 66.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 47.000000 -70.000000 5.000000
      vertex 47.000000 66.000000 5.000000
      vertex -65.000000 -70.000000 5.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -65.000000 66.000000 2.000000
      vertex 47.000000 66.000000 5.000000
      vertex 47.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -65.000000 66.000000 5.000000
      vertex 47.000000 66.000000 5.000000
      vertex -65.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -67.000000 68.000000 0.000000
      vertex 49.000000 68.000000 2.000000
      vertex 49.000000 68.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -67.000000 68.000000 2.000000
      vertex 49.000000 68.000000 2.000000
      vertex -67.000000 68.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 47.000000 66.000000 2.000000
      vertex 49.000000 68.000000 2.000000
      vertex -67.000000 68.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 47.000000 -70.000000 2.000000
      vertex 49.000000 68.000000 2.000000
      vertex 47.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 49.000000 -72.000000 2.000000
      vertex 49.000000 68.000000 2.000000
      vertex 47.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 49.000000 -72.000000 2.000000
      vertex 47.000000 -70.000000 2.000000
      vertex -65.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 49.000000 -72.000000 0.000000
      vertex -67.000000 -72.000000 2.000000
      vertex -67.000000 -72.000000 0.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 49.000000 -72.000000 2.000000
      vertex -67.000000 -72.000000 2.000000
      vertex 49.000000 -72.000000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 47.000000 66.000000 2.000000
      vertex -67.000000 68.000000 2.000000
      vertex -65.000000 66.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -67.000000 -72.000000 2.000000
      vertex 49.000000 -72.000000 2.000000
      vertex -65.000000 -70.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -65.000000 -70.000000 2.000000
      vertex -67.000000 68.000000 2.000000
      vertex -67.000000 -72.000000 2.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -65.000000 66.000000 2.000000
      vertex -67.000000 68.000000 2.000000
      vertex -65.000000 -70.000000 2.000000
    endloop
  endfacet
endsolid Mesh
```
