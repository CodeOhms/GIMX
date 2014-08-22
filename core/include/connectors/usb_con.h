/*
 Copyright (c) 2014 Mathieu Laurendeau
 License: GPLv3
 */

#ifndef USB_CON_H_
#define USB_CON_H_

int usb_init(int usb_number, unsigned short vendor, unsigned short product);
int usb_close(int usb_number);
int usb_send(int usb_number, unsigned char* buffer, unsigned char length);
int usb_handle_events(int unused);

#endif /* USB_CON_H_ */