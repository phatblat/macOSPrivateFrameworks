//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class CKContainerID, CKOperationConfiguration, HMFScheduler, NSString;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _manateeContainer;
    CKContainerID *_containerID;
    NSString *_sourceApplicationBundleIdentifier;
    CKOperationConfiguration *_defaultOperationConfiguration;
    HMFScheduler *_apsRegistrationScheduler;
}

@property(retain, nonatomic) HMFScheduler *apsRegistrationScheduler; // @synthesize apsRegistrationScheduler=_apsRegistrationScheduler;
@property(copy) CKOperationConfiguration *defaultOperationConfiguration; // @synthesize defaultOperationConfiguration=_defaultOperationConfiguration;
@property(getter=isManateeContainer) BOOL manateeContainer; // @synthesize manateeContainer=_manateeContainer;
@property(copy) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(readonly, copy) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithContainerID:(id)arg1;

@end

