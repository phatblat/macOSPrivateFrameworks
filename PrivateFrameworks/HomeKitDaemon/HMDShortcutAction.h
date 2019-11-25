//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAction.h>

@class NSData, WFHomeWorkflow, WFHomeWorkflowController;

@interface HMDShortcutAction : HMDAction
{
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
@property(readonly) WFHomeWorkflowController *controller; // @synthesize controller=_controller;
@property(readonly) WFHomeWorkflow *shortcut; // @synthesize shortcut=_shortcut;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (Class)modelClass;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;
- (unsigned long long)entitlementsForNotification;
- (BOOL)requiresDeviceUnlock;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)stateDump;
- (id)dictionaryRepresentation;
- (unsigned long long)type;
- (void)dealloc;
- (id)removeShortcut;
- (id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3;

@end

