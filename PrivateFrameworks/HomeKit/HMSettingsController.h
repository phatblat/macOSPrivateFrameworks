//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFLogging.h"
#import "HMSettingManager.h"
#import "HMSettingsOwner.h"

@class HMSettingGroup, HMSettings, HMSettingsMessageHandler, NSDictionary, NSMapTable, NSString, NSUUID, _HMContext;

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner>
{
    HMSettings *_settings;
    id <HMSettingsDelegate> _delegate;
    HMSettingGroup *_rootGroup;
    HMSettingsMessageHandler *_messageHandler;
    NSDictionary *_encodedSettings;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
    _HMContext *_context;
    NSUUID *_parentIdentifier;
    NSString *_codingKey;
}

+ (id)logCategory;
@property(readonly) NSString *codingKey; // @synthesize codingKey=_codingKey;
@property(readonly) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(retain) _HMContext *context; // @synthesize context=_context;
@property(retain) NSMapTable *settingsMap; // @synthesize settingsMap=_settingsMap;
@property(retain) NSMapTable *groupsMap; // @synthesize groupsMap=_groupsMap;
@property(retain) NSDictionary *encodedSettings; // @synthesize encodedSettings=_encodedSettings;
@property(retain) HMSettingsMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) HMSettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property __weak id <HMSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) HMSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateValueForSetting:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configureWithContext:(id)arg1;
- (void)decodeWithCoder:(id)arg1;
- (void)notifyDelegateOfUpdate;
- (void)mergeWith:(id)arg1;
- (void)settingsDidChangeWithRootGroup:(id)arg1 addedGroups:(id)arg2 addedSettings:(id)arg3 changedSettings:(id)arg4;
- (id)settingGroupForIdentifier:(id)arg1;
- (id)settingForIdentifier:(id)arg1;
- (id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2;
- (id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2 messageHandler:(id)arg3 settingsCreator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

