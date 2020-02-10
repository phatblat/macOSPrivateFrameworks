//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDSettingGroupOwnerProtocol.h"

@class NSArray, NSMutableSet, NSString, NSUUID;

@interface HMDSettingGroup : NSObject <HMDSettingGroupOwnerProtocol>
{
    NSUUID *_identifier;
    NSUUID *_parentIdentifier;
    NSString *_name;
    NSString *_keyPath;
    NSMutableSet *_settingsInternal;
    NSMutableSet *_groupsInternal;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableSet *groupsInternal; // @synthesize groupsInternal=_groupsInternal;
@property(retain) NSMutableSet *settingsInternal; // @synthesize settingsInternal=_settingsInternal;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)name;
- (id)parentIdentifier;
- (id)identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
@property(readonly, copy) NSArray *groups;
@property(readonly, copy) NSArray *settings;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
