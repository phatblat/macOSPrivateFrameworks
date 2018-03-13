//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPassLibraryDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PKCatalog, PKPassLibrary, PKPaymentService;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate>
{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    unsigned long long _filters;
    unsigned long long _passTypeMask;
    NSMutableArray *_groups;
    NSMutableDictionary *_passesByUniqueID;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    BOOL _suppressRemoteUpdates;
    BOOL _enqueueRemoteUpdates;
    PKCatalog *_catalogBeforeReordering;
    NSMutableArray *_enqueuedUpdates;
    NSArray *_localPasses;
    NSSet *_expressPassesInformation;
    BOOL _limitedMode;
    BOOL _activePassesOnly;
    int _expressPassesInformationToken;
    BOOL _reorderingEnabled;
    BOOL _shouldSeparatePaymentPasses;
    id <PKGroupsControllerDelegate> _delegate;
    NSArray *_filteredPassUniqueIDs;
}

@property(nonatomic) BOOL shouldSeparatePaymentPasses; // @synthesize shouldSeparatePaymentPasses=_shouldSeparatePaymentPasses;
@property(readonly, nonatomic) NSArray *filteredPassUniqueIDs; // @synthesize filteredPassUniqueIDs=_filteredPassUniqueIDs;
@property(nonatomic) BOOL reorderingEnabled; // @synthesize reorderingEnabled=_reorderingEnabled;
@property(nonatomic) __weak id <PKGroupsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2;
- (id)_copyRemoteCatalog;
- (void)_removeGroup:(id)arg1 notify:(BOOL)arg2;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(BOOL)arg4;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(BOOL)arg3;
- (unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3;
- (BOOL)_groupIDIsNew:(id)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2;
- (void)_fixIndicesFrom:(unsigned long long)arg1;
- (void)_fixIndex:(unsigned long long)arg1;
- (id)_displayablePassesDictionaryFromSet:(id)arg1;
- (id)_groupsExcludingPayment;
- (unsigned long long)_indexOfGroupID:(id)arg1;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(CDUnknownBlockType)arg1;
- (void)_getPassesAndCatalogSynchronously:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)objectSettingsDidChangeNotification:(id)arg1;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (void)reloadGroupsAndNotify:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addLocalPasses:(id)arg1;
- (void)enableRemoteUpdates;
- (void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)suppressRemoteUpdates:(BOOL)arg1;
@property(readonly, nonatomic) BOOL filteringEnabled;
- (void)handleUserPassDelete:(id)arg1;
- (void)handleUserPassesDelete:(id)arg1;
- (id)passWithUniqueID:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)groupIndexForPassUniqueID:(id)arg1;
- (unsigned long long)indexOfGroup:(id)arg1;
- (id)groupAtIndex:(unsigned long long)arg1;
- (id)groups;
- (unsigned long long)groupCount;
- (void)reloadGroups;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)preloadGroupsAndFrontFaceImages;
- (void)dealloc;
- (id)initLimited;
- (id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

