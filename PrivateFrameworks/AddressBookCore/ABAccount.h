//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABAccountPermissions.h"

@class ABAccountDirectory, NSString, NSURL;

@interface ABAccount : NSObject <ABAccountPermissions>
{
    NSString *_identifier;
    NSURL *_baseURL;
    NSURL *_persistentStoreURL;
    id _futureSource;
    id _customizationPolicy;
    id _config;
    id _searchPolicy;
    Class _sourceClass;
    _Bool _invalid;
    NSString *_name;
    NSString *_allContactsLabel;
    NSString *_directoryLabel;
    long long _sortOrder;
    BOOL _isMainAccount;
    BOOL _groupsCanRemoveMembers;
    BOOL _canBecomeDefaultAccount;
    BOOL _canReimportFromMetadata;
    BOOL _showAllContactsIfOnlyOneGroup;
    BOOL _supportsDistributionLists;
    BOOL _usesSyncServices;
}

+ (id)peopleByAccountIdentifier:(id)arg1;
+ (id)builderWithIdentifier:(id)arg1;
+ (CDUnknownBlockType)userInterfaceComparator;
+ (CDUnknownBlockType)defaultAccountComparator;
+ (long long)coreDataContainerTypeFromAccountType:(id)arg1;
@property(readonly, retain) id <ABAccountSearchPolicy> searchPolicy; // @synthesize searchPolicy=_searchPolicy;
@property(readonly, retain) id <ABAccountCustomizationPolicy> customizationPolicy; // @synthesize customizationPolicy=_customizationPolicy;
@property BOOL usesSyncServices; // @synthesize usesSyncServices=_usesSyncServices;
@property BOOL supportsDistributionLists; // @synthesize supportsDistributionLists=_supportsDistributionLists;
@property BOOL showAllContactsIfOnlyOneGroup; // @synthesize showAllContactsIfOnlyOneGroup=_showAllContactsIfOnlyOneGroup;
@property BOOL canReimportFromMetadata; // @synthesize canReimportFromMetadata=_canReimportFromMetadata;
@property BOOL canBecomeDefaultAccount; // @synthesize canBecomeDefaultAccount=_canBecomeDefaultAccount;
@property(readonly) BOOL isMainAccount; // @synthesize isMainAccount=_isMainAccount;
@property(readonly) Class sourceClass; // @synthesize sourceClass=_sourceClass;
@property(readonly) long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy) NSString *directoryLabel; // @synthesize directoryLabel=_directoryLabel;
@property(copy) NSString *allContactsLabel; // @synthesize allContactsLabel=_allContactsLabel;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)unloadSource;
- (id)accountOrParentAccountTypeIdentifier;
- (id)accountTypeIdentifier;
- (void)didImportPeople:(id)arg1 intoGroup:(id)arg2;
- (id)addressBook;
- (id)labelsConstraint;
- (BOOL)record:(id)arg1 validateValue:(id *)arg2 forProperty:(id)arg3 error:(id *)arg4;
- (int)containmentPersonality;
- (void)primitiveUpdateName:(id)arg1;
- (void)updateName:(id)arg1;
- (id)unwrapSourceFromFuture:(id)arg1;
- (id)futureSource;
@property(readonly, getter=isInitialSyncComplete) BOOL initialSyncComplete;
- (id)aListPluginIdentifier;
- (BOOL)requiresSeparateBirthdayCalendar;
- (long long)sortOrderForGroup:(id)arg1;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)canRemoveGroup:(id)arg1;
- (BOOL)canRenameGroup:(id)arg1;
- (BOOL)canEditGroup:(id)arg1;
- (BOOL)canCreateGroups;
- (BOOL)canEditPerson:(id)arg1;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;
- (BOOL)supportsPhotos;
- (BOOL)supportsPhoneticName;
- (void)cancelFutureSource;
- (void)invalidateConfig;
- (void)invalidate;
- (_Bool)setInvalidateFlag;
@property(readonly, getter=isInvalid) _Bool invalid;
- (void)didRemoveFromRepository:(id)arg1;
@property(readonly, retain, nonatomic) id <ABAccountConfigurationInternal> internalConfig;
@property(readonly, retain) id <ABAccountConfiguration> config;
@property(readonly) BOOL allowsDistributionLists;
@property(readonly) BOOL isPersistentAccount;
- (id)searchOperationWithTerms:(id)arg1 delegate:(id)arg2;
- (id)searchOperationWithString:(id)arg1 delegate:(id)arg2;
@property(readonly) ABAccountDirectory *directory;
@property(readonly) BOOL isSearchable;
- (void)setPassword:(id)arg1;
- (id)password;
@property(readonly, copy) NSURL *persistentStoreURL;
@property(readonly, copy) NSURL *imagesFolderURL;
- (id)sourceOrNil;
- (id)source;
@property(readonly, copy) NSString *description;
- (id)copy;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 baseURL:(id)arg2;
- (id)initWithBuilder:(id)arg1;
- (long long)coreDataContainerType;
- (id)containerRepresentation;
- (id)initWithRemoteAccount:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

