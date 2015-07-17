/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAController : NSObject <AXHAControllerBrowserDelegateProtocol> {
    NSDictionary *_availableDevicesDescription;
    NSMutableArray *_clients;
    NSMutableDictionary *_handlers;
    BOOL _isListening;
    AXHATimer *_liveListenLevelsTimer;
    AXHearingAidDevice *_pairedDevice;
}

@property (nonatomic, retain) NSDictionary *availableDevicesDescription;
@property (nonatomic, retain) NSMutableArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handlers;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AXHearingAidDevice *pairedDevice;
@property (readonly) Class superclass;

+ (id)entitlementsForMessageID:(unsigned long long)arg1;
+ (id)sharedController;

- (void)addHandler:(id)arg1 andSelector:(SEL)arg2 forMessageIdentifier:(unsigned long long)arg3;
- (id)availableDevicesDescription;
- (void)availableRemoteControllersDidChange;
- (id)clients;
- (id)connectToControllerWithID:(id)arg1;
- (void)connectToPairedDevice;
- (BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2;
- (id)currentDeviceController;
- (void)dealloc;
- (id)disconnectAndForceSlave:(id)arg1;
- (void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)handleNewConnection:(id)arg1;
- (id)handlers;
- (BOOL)hearingAidsPaired;
- (id)liveListenController;
- (BOOL)message:(id)arg1 hasEntitlement:(id)arg2;
- (id)pairedDevice;
- (void)passConnectionToController:(id)arg1;
- (id)readAvailableControllers:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (id)readDeviceProperty:(id)arg1;
- (void)readLiveListenLevels;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)registerForLiveListenUpdates:(id)arg1;
- (void)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (void)setAvailableDevicesDescription:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setPairedHearingAid:(id)arg1;
- (void)startSearchCycle;
- (void)startServer;
- (id)toggleLiveListen:(id)arg1;
- (void)trustChainAvailabilityDidChange:(id)arg1;
- (id)writeDeviceProperty:(id)arg1;

@end