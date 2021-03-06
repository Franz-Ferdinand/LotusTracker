#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include "../entity/user.h"

#include <QSettings>

class AppSettings : public QObject
{
    Q_OBJECT

private:
    QSettings settings;

public:
    explicit AppSettings(QObject *parent = nullptr);

    bool isAutoStartEnabled();
    void enableAutoStart(bool enabled);
    bool isAutoUpdateEnabled();
    void enableAutoUpdate(bool enabled);
    bool isFirstRun();
    bool isFirstMatch();
    bool isFirstDraft();
    bool isHideOnLoseGameFocusEnabled();
    void enableHideOnLoseGameFocus(bool enabled);
    int getDeckTrackerAlpha();
    void setDeckTrackerAlpha(int alpha);
    QString getCardLayout();
    void setCardLayout(QString cardLayout);
    int getUnhiddenDelay();
    void setUnhiddenDelay(int unhiddenTimeout);
    bool isShowCardManaCostEnabled();
    void enableShowCardManaCost(bool enabled);
    bool isShowCardOnHoverEnabled();
    void enableShowCardOnHover(bool enabled);
    bool isShowOnlyRemainingCardsEnabled();
    void enableShowOnlyRemainingCards(bool enabled);
    bool isShowDebugLogsEnabled();
    void enableShowDebugLogs(bool enabled);
    // Deck overlay player
    bool isDeckOverlayPlayerEnabled();
    void enableDeckOverlayPlayer(bool enabled);
    bool isDeckOverlayPlayerStatisticsEnabled();
    void enableDeckOverlayPlayerStatistics(bool enabled);
    QPoint getDeckOverlayPlayerPos(int uiWidth);
    void setDeckOverlayPlayerPos(QPoint pos);
    int getDeckOverlayPlayerScale();
    void setDeckOverlayPlayerScale(int scale);
    // Deck overlay opponent
    bool isDeckOverlayOpponentEnabled();
    void enableDeckOverlayOpponent(bool enabled);
    QPoint getDeckOverlayOpponentPos(int uiWidth, int cardHoverWidth);
    void setDeckOverlayOpponentPos(QPoint pos);
    int getDeckOverlayOpponentScale();
    void setDeckOverlayOpponentScale(int scale);
    // Deck overlay Draft
    bool isDeckOverlayDraftEnabled();
    void enableDeckOverlayDraft(bool enabled);
    QString getDeckOverlayDraftSource();
    void setDeckOverlayDraftSource(QString source);
    QPoint getDeckOverlayDraftPos(int uiWidth);
    void setDeckOverlayDraftPos(QPoint pos);
    int getDeckOverlayDraftScale();
    void setDeckOverlayDraftScale(int scale);
    // User settings
    void setUserSettings(UserSettings userSettings, QString userName = "");
    UserSettings getUserSettings();
    void clearUserSettings();
    void restoreDefaults();

};

#endif // APPSETTINGS_H
