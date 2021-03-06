/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection * _connection;
    NSMutableArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToDaemonIfNeeded;
- (void)addObserver:(id)arg1;
- (void)checkin;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearParkedCarBulletin;
- (void)clearTrafficConditionsBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)clearTransitAlightAlertBulletin;
- (void)closeConnection;
- (void)commitFavoritesSerializedRepresentation:(id)arg1 completion:(id /* block */)arg2;
- (void)commitHistorySerializedRepresentation:(id)arg1 completion:(id /* block */)arg2;
- (void)favoritesDidChange;
- (void)fetchCurrentAnnouncement:(id /* block */)arg1;
- (void)fetchDevicePushToken:(id /* block */)arg1;
- (void)fetchFavoritesSerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchHistorySerializedRepresentationWithCompletion:(id /* block */)arg1;
- (void)fetchProblemStatus;
- (void)historyDidChange;
- (id)init;
- (void)openConnection;
- (void)problemStatusResponseWithNotificationID:(id)arg1 completion:(id /* block */)arg2;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)registerForTopic;
- (void)removeObserver:(id)arg1;
- (void)removeProblemStatusResponseWithNotificationID:(id)arg1;
- (void)resetShownAnnouncements;
- (void)setShouldUseDevAPNS:(bool)arg1;
- (void)shouldUseDevAPNS:(id /* block */)arg1;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)showTrafficIncidentAlertWithID:(id)arg1 type:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4;
- (void)showTransitAlightAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)simulateAnnouncement:(id)arg1;
- (void)simulateProblemResolution;

@end
