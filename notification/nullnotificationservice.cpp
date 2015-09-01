#include "nullnotificationservice.h"

NullNotificationService::NullNotificationService(QObject *parent)
    : NotificationService(parent)
{

}

void NullNotificationService::setApplicationBadge(QString badge)
{
    Q_UNUSED(badge);
}
