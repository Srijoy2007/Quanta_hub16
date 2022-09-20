# Quanta_hub16
Quanta Hub 16 is  a 16 key Macro pad which can connect to upto 4 devices at  a time via usb using USB 2.0 and  Tap dance feature 

### Repo Contents

- `Documents` contains all documentation and images for the project.
- `Firmware` contains both the source and precompiled binaries for Hub16.
- `Hardware` contains the KiCad design files for the keyboard.
- `josh-kicad-lib` is my personal KiCad parts library which contains many of the parts used.
- `Mechanicals` contain the plate and case design for Hub16.
- `Production` contains all the files required to produce the PCB. It also contains test scripts and jigs.
- `Software` contains all the VIA config, along with template script to use Hub16 as a macropad with software on your computer.


### Notes on the USB Hub

The Quantahub is a four port USB 2.0 Hub with Type-C connectors, aimed at allowing connection of keyboards, mice, memory sticks, wireless receivers, and other small devices (including a second Hub16!)  to your computer.

Due to cost and space constraints, the hub has some limitations. The hub **is not**:

- USB 3.x, Power Delivery, Thunderbolt, DisplayPort, etc compatible.
- Designed to charge your phone quickly. Only 100mA is guaranteed per port.
- Designed to work with power hungry devices such as spinning hard drives.
- Guaranteed to provide full USB 2.0 speeds and performance on all ports.

Might you be able to charge your phone whilst copying files at full speed of a spinning hard drive over a long cable? Maybe. However Quantahub16 is a macropad first, USB hub second, so if you are looking for a high performance device I'd suggest picking up a dedicated USB hub and just using Hub16 as a macropad.
