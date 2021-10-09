Open Modem Firmware
==========

Open Modem Firmware is an open source firmware implementation of a AFSK modem supporting 300, 1200 and 2400 baud operation, suitable for communication over a wide variety of analogue mediums, both radio and wired. The firmware is designed for and compatible with [unsigned.io's OpenModem](https://unsigned.io/openmodem/), but can be used on any similar build.

Complete modems are available from [the unsigned.io shop](http://unsigned.io/shop), or can be build from scratch by referring to the schematics and documentation on the [OpenModem page](https://unsigned.io/openmodem/)

## A few highlights

- 300, 1200 and 2400 baud operation
- Full KISS TNC compatibility
- Secure in-modem AES-128 encryption
- SD card support
- Packet logging in PCAP format (WireShark compatible)
- Digitally adjustable input and output gain control
- Easy to use graphical config utility
- Supports standard GPS and bluetooth modules
- Supports large packets, 576 byte MTU
- Very large in-modem packet queue

## Usage

Please refer to the manual and instructions posted at the [OpenModem page](https://unsigned.io/openmodem/). The default serial connection settings are 115200 baud, 8N1. For configuring the modem, please see the OpenModem Config Utility.

## Compiling with Docker

1. Build the image:

   ```bash
   docker build -t openmodembuild .
   ```

2. Run the image:

   ```bash
   docker run -it --rm -v "$PWD":/src openmodembuild
   ```

   + Treat the above command as a `make` replacement, for example to invoke the `clean` target with 8 processes:
   ```bash
   docker run -it --rm -v "$PWD":/src openmodembuild -j 8 clean
   ```
