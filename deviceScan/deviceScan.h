#ifndef __deviceScan_h__
#define __deviceScan_h__

#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>

class DeviceScan {
    public:
        int getSocket();
        
    private:
        int socket;

};


#endif //__deviceScan_h__
