#include "DisplayOnMap.h"
#include "NotifyPositionChange.h"
#include "Device.h"

int main() {

    auto iphone = new Device("Iphone 10", "10826482", 0, 0);
    auto samsung = new Device("Samsung A50", "3719213", 0, 0);

    auto notifier = new NotifyPositionChange();
    auto map = new DisplayOnMap();

    iphone->setPosition(0,0);

    notifier->attach(iphone);
    notifier->attach(samsung);
    map->attach(iphone);
    map->attach(samsung);

    iphone->setPosition(100,20);
    samsung->setPosition(20,20);

    notifier->detach(iphone);
    map->detach(iphone);
    iphone->setPosition(29,48);
}
