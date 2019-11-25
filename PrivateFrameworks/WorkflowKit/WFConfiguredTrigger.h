//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>

@class NSString, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor
{
    BOOL _shouldPrompt;
    BOOL _enabled;
    NSString *_workflowID;
    WFTrigger *_trigger;
}

@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) BOOL shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(readonly, nonatomic) WFTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) NSString *workflowID; // @synthesize workflowID=_workflowID;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5;

@end

