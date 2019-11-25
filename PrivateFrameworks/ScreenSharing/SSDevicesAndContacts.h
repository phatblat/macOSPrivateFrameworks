//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSBatchIDQueryControllerDelegate.h"
#import "IDSServiceDelegate.h"

@class IDSBatchIDQueryController, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSObject<SSDevicesAndContactsDelegate>, NSSet, NSString;

@interface SSDevicesAndContacts : NSObject <IDSBatchIDQueryControllerDelegate, IDSServiceDelegate>
{
    BOOL _testMode;
    int _maxItemsPerType;
    NSObject<SSDevicesAndContactsDelegate> *_delegate;
    NSMutableOrderedSet *_deviceComputers;
    NSArray *_idsDevices;
    NSMutableDictionary *_deviceIconMapBW;
    NSMutableDictionary *_deviceIconMapColor;
    NSMutableDictionary *_deviceIconMapPlaceholders;
    NSArray *_vettedAppleIDs;
    NSString *_localDeviceID;
    IDSBatchIDQueryController *_idQueryController;
    IDSBatchIDQueryController *_idQuerySafeViewController;
    NSMutableDictionary *_availabilityByID;
    NSMutableDictionary *_ipBasedRecents;
    NSSet *_recentSet;
}

+ (id)colorWithHexColorString:(id)arg1;
@property(retain) NSSet *recentSet; // @synthesize recentSet=_recentSet;
@property BOOL testMode; // @synthesize testMode=_testMode;
@property(retain) NSMutableDictionary *ipBasedRecents; // @synthesize ipBasedRecents=_ipBasedRecents;
@property(retain) NSMutableDictionary *availabilityByID; // @synthesize availabilityByID=_availabilityByID;
@property(retain) IDSBatchIDQueryController *idQuerySafeViewController; // @synthesize idQuerySafeViewController=_idQuerySafeViewController;
@property(retain) IDSBatchIDQueryController *idQueryController; // @synthesize idQueryController=_idQueryController;
@property(retain) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain) NSArray *vettedAppleIDs; // @synthesize vettedAppleIDs=_vettedAppleIDs;
@property(retain) NSMutableDictionary *deviceIconMapPlaceholders; // @synthesize deviceIconMapPlaceholders=_deviceIconMapPlaceholders;
@property(retain) NSMutableDictionary *deviceIconMapColor; // @synthesize deviceIconMapColor=_deviceIconMapColor;
@property(retain) NSMutableDictionary *deviceIconMapBW; // @synthesize deviceIconMapBW=_deviceIconMapBW;
@property(retain) NSArray *idsDevices; // @synthesize idsDevices=_idsDevices;
@property(retain) NSMutableOrderedSet *deviceComputers; // @synthesize deviceComputers=_deviceComputers;
@property NSObject<SSDevicesAndContactsDelegate> *delegate; // @synthesize delegate=_delegate;
@property int maxItemsPerType; // @synthesize maxItemsPerType=_maxItemsPerType;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (BOOL)addressIsSelf:(id)arg1;
- (id)availableComputersWithSearchString:(id)arg1;
- (id)availableContactsWithSearchString:(id)arg1;
- (id)availableIDSDevicesWithSearchString:(id)arg1;
- (id)recentAvailableComputers;
- (id)recentAvailableContacts;
- (void)loadDeviceList:(id)arg1;
- (struct CGImageSource *)placeholderIconForModelID:(id)arg1;
- (void)loadRecentItemsAtPath:(id)arg1 sinceDate:(id)arg2;
- (void)clearRecentItems;
- (id)modelNameWithModelID:(id)arg1 major:(long long *)arg2 minor:(long long *)arg3;
- (void)buildDeviceIconMap;
- (void)addDevices:(id)arg1 withLoginID:(id)arg2 isIOS:(BOOL)arg3;
- (id)deviceForUniqueID:(id)arg1;
- (id)componentsForBuildVersion:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

