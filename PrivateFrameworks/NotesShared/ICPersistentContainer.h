//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPersistentContainer.h"

@class NSDictionary, NSMergePolicy, NSString, NSURL;

@interface ICPersistentContainer : NSPersistentContainer
{
    BOOL _abortAfterReplacingDatabase;
    NSDictionary *_storeOptions;
    NSURL *_storeURL;
    NSString *_storeType;
    NSMergePolicy *_mergePolicy;
    unsigned long long _fakeFreeDiskSpace;
}

+ (BOOL)isDataProtectionError:(id)arg1;
+ (id)standardStoreOptions;
+ (id)newManagedObjectModel;
@property(nonatomic) BOOL abortAfterReplacingDatabase; // @synthesize abortAfterReplacingDatabase=_abortAfterReplacingDatabase;
@property(nonatomic) unsigned long long fakeFreeDiskSpace; // @synthesize fakeFreeDiskSpace=_fakeFreeDiskSpace;
@property(retain, nonatomic) NSMergePolicy *mergePolicy; // @synthesize mergePolicy=_mergePolicy;
@property(retain, nonatomic) NSString *storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
- (void).cxx_destruct;
- (void)vacuumStore;
- (void)backupPersistentStore;
@property(readonly, nonatomic) NSURL *backupsDirectoryURL;
- (BOOL)isTooLowOnDiskSpace;
- (BOOL)isReadOnly;
- (BOOL)loadPersistentStore:(id *)arg1;
- (void)setupPersistentStoreDescriptions;
- (id)newBackgroundContext;
- (id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4;

@end

