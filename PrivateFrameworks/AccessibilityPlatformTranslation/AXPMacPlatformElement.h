//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAccessibilityElement.h"

#import "AXPTranslationElementProtocol.h"

@class AXPTranslationObject, NSArray, NSMutableDictionary, NSString;

@interface AXPMacPlatformElement : NSAccessibilityElement <AXPTranslationElementProtocol>
{
    NSMutableDictionary *_selectiveCache;
    AXPTranslationObject *translation;
    NSArray *_cachedCustomActions;
}

+ (void)initialize;
+ (id)platformElementWithTranslationObject:(id)arg1;
@property(retain, nonatomic) NSArray *cachedCustomActions; // @synthesize cachedCustomActions=_cachedCustomActions;
@property(retain, nonatomic) AXPTranslationObject *translation; // @synthesize translation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)accessibilityShouldUseUniqueId;
- (void)accessibilityPerformAction:(id)arg1;
- (void)performDecrementAction;
- (void)performIncrementAction;
- (void)performScrollToVisible;
- (id)_convertTranslatorResponse:(id)arg1 forAttribute:(unsigned long long)arg2;
- (id)_convertTranslatorResponseForRole:(id)arg1;
- (void)_cacheResultSelectively:(id)arg1 attribute:(unsigned long long)arg2;
- (id)_postProcessResult:(id)arg1 attributeType:(unsigned long long)arg2;
- (id)_accessibilityProcessAttribute:(id)arg1 parameter:(id)arg2;
- (id)_accessibilityProcessAttribute:(id)arg1;
- (id)_accessibilityProcessImmediateAttributeResult:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityMultipleAttributes:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (unsigned long long)_attributeTypeForMacAttribute:(id)arg1;
- (id)_macAttributeTypeForAXPAttribute:(unsigned long long)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityActionDescription:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1 withDisplayId:(unsigned int)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (int)pid;
- (id)accessibilityActionNames;
- (id)accessibilityCustomActions;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityPerformPress;
- (id)role;
- (id)_cachedRole;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

