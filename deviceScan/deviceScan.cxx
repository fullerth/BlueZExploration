#include "deviceScan.h"

int DeviceScan::getSocket()
{
    int dev_id, socket;
    dev_id = hci_get_route(NULL);
    socket = hci_open_dev(dev_id);
}

