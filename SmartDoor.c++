from machine import Pin
import time
button = Pin(14, Pin.IN, Pin.PULL_UP)
led = Pin(15, Pin.OUT)
buzzer = Pin(16, Pin.OUT)
while True:
if button.value() == 0:
print(" Door Open!")
led.value(1)
buzzer.value(1)
else:
print("Door Closed")
led.value(0)
buzzer.value(0)
time.sleep(0.5)