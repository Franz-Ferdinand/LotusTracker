#ifndef MATCHZONE_H
#define MATCHZONE_H

#include <QMap>
#include <QString>

typedef enum {
    ZoneType_HAND,
    ZoneType_LIBRARY,
    ZoneType_GRAVEYARD,
    ZoneType_EXILE,
    ZoneType_LIMBO,
    ZoneType_STACK,
    ZoneType_BATTLEFIELD,
    ZoneType_UNKNOWN
} ZoneType;

class MatchZone
{
public:
    int id, ownerSeatId;
    ZoneType type;
    QMap<int, int> objectIds;

    MatchZone(int id = 0, int ownerSeatId = 0, ZoneType type = ZoneType_UNKNOWN, QMap<int, int> objectIds = {}) :
        id(id), ownerSeatId(ownerSeatId), type(type), objectIds(objectIds){}

    static ZoneType zoneTypeFromName(QString zoneTypeName)
    {
        QMap<QString, ZoneType> zoneTypeNames = {
            {"ZoneType_Hand", ZoneType_HAND}, {"ZoneType_Library", ZoneType_LIBRARY},
            {"ZoneType_Graveyard", ZoneType_GRAVEYARD}, {"ZoneType_Exile", ZoneType_EXILE},
            {"ZoneType_Limbo", ZoneType_LIMBO}, {"ZoneType_Stack", ZoneType_STACK},
            {"ZoneType_Battlefield", ZoneType_BATTLEFIELD} };
        if (zoneTypeNames.keys().contains(zoneTypeName)) {
            return zoneTypeNames[zoneTypeName];
        } else {
            return ZoneType_UNKNOWN;
        }
    }

};

#endif // MATCHZONE_H
