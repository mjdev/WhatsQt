#ifndef NULLNOTIFICATIONSERVICE_H
#define NULLNOTIFICATIONSERVICE_H

#include "notificationservice.h"

class NullNotificationService : public NotificationService
{
public:
    NullNotificationService(QObject *parent = 0);

    void setApplicationBadge(QString badge);
};

#endif // NULLNOTIFICATIONSERVICE_H