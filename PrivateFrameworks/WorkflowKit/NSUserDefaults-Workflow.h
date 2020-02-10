//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

@interface NSUserDefaults (Workflow)
+ (id)siriAssistantUserDefaults;
+ (id)systemShortcutsUserDefaults;
+ (id)workflowUserDefaults;
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;
- (BOOL)wf_voiceParametersDisabled;
- (BOOL)wf_isDeviceIdiomDisabledInSiri:(long long)arg1;
- (BOOL)wf_isCurrentDeviceModelDisabledInSiri;
- (void)wf_registerDefaultDisabledDevices;
- (id)wf_keyForDisablingDeviceIdiom:(long long)arg1;
@end
