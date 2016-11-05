#ifndef __YTELSE_COMM_H_
#define __YTELSE_COMM_H_

#include <libusb.h>

/* Device types */
typedef enum YtelseDevices {YTELSE_MCU_DEVICE, YTELSE_FPGA_DEVICE, YTELSE_BOTH_DEVICES, YTELSE_NO_DEVICE} ytelse_device_t;

/* Return codes */
enum {CONNECT_SUCCESS, CONNECT_FAILURE};

int connect(libusb_context* context,			/* In  */ /* libusb context */
			libusb_device_handle** dev_handle, 	/* Out */ /* Pointer to usb handle */
			ytelse_device_t device,				/* In  */ /* Type of device to conenct to */
			int* interface);					/* Out */ /* Device interface claimed by host */

#endif /* __YTELSE_COMM_H_ */