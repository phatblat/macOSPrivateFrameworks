//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INExtensionContextSlotResolutionResult, INIntent, INIntentSlotDescription, NSArray, NSString;

@interface INIntentTestResolvedParameter : NSObject
{
    BOOL _resolveImplemented;
    NSString *_parameter;
    NSArray *_results;
    INExtensionContextSlotResolutionResult *_extensionContextResolutionResult;
    INIntent *_intent;
    INIntentSlotDescription *_slotDescription;
}

@property(readonly) INIntentSlotDescription *slotDescription; // @synthesize slotDescription=_slotDescription;
@property(readonly, copy) INIntent *intent; // @synthesize intent=_intent;
@property(readonly) INExtensionContextSlotResolutionResult *extensionContextResolutionResult; // @synthesize extensionContextResolutionResult=_extensionContextResolutionResult;
@property(readonly) BOOL resolveImplemented; // @synthesize resolveImplemented=_resolveImplemented;
@property(readonly) NSArray *results; // @synthesize results=_results;
@property(readonly, copy) NSString *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithParameter:(id)arg1 forIntent:(id)arg2 extensionContextResolutionResult:(id)arg3;

@end
