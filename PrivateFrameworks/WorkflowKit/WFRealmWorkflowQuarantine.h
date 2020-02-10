//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

@class NSDate, NSString, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject
{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
    RLMLinkingObjects *_workflows;
}

+ (id)linkingObjectsProperties;
+ (id)defaultPropertyValues;
+ (id)requiredProperties;
+ (id)className;
@property(readonly) RLMLinkingObjects *workflows; // @synthesize workflows=_workflows;
@property(retain) NSDate *importDate; // @synthesize importDate=_importDate;
@property(copy) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
- (void).cxx_destruct;

@end
