//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import "NSCopying.h"

@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <NSCopying>
{
    long long _backgroundColorValue;
    long long _glyphNumber;
    NSData *_customImageData;
    RLMLinkingObjects *_workflows;
}

+ (id)linkingObjectsProperties;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)className;
@property(readonly) RLMLinkingObjects *workflows; // @synthesize workflows=_workflows;
@property(copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(nonatomic) long long glyphNumber; // @synthesize glyphNumber=_glyphNumber;
@property(nonatomic) long long backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

