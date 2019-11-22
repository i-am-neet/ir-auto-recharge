# IRremote Arduino Library
This library enables you to send and receive using infra-red signals on an arduino.

## Patch by alexbloggt
This branch contains multi transmitter support for 32u4 based boards like Arduino Leonardo, Pro Micro etc. You can use pins 9,13 and 5 for transmitting signals.

## Installation
1. Navigate to the [Releases](https://github.com/shirriff/Arduino-IRremote/releases) page.
2. Download the latest release.
3. Extract the zip file
4. Move the "IRremote" folder that has been extracted to your libraries directory.

## Usage

We get a lot of support for different device types. To keep the size of the library manageable we're moving to a model where different device types use a #define statement, for instance:

```#define SHARP```

You'd put this at the top of your sketch to include the sendSharp() and decodeSharp() methods in your code. This way your sketch only uses the Sharp functions but not the LG, JVC, Sony, etc functions, thus saving you program space that you might want to use for other things. This allows us to support lots of devices without making the library too big.

For using multiple transmitter use sketch as provided in examples. Define your pins like this:
```
IRsend irsend0; // pin 9
IRsend1 irsend1; // pin 13
IRsend2 irsend2; // pin 5
```

## Contributors
Check [here](Contributors.md)

## Copyright
Copyright 2009-2012 Ken Shirriff
