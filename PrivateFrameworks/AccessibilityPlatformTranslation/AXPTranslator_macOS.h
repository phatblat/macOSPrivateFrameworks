//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityPlatformTranslation/AXPTranslator.h>

@interface AXPTranslator_macOS : AXPTranslator
{
    CDUnknownBlockType _zoomTriggerTestingCallback;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType zoomTriggerTestingCallback; // @synthesize zoomTriggerTestingCallback=_zoomTriggerTestingCallback;
- (void).cxx_destruct;
- (id)processApplicationObject:(id)arg1;
- (id)processFrontMostApp:(id)arg1;
- (id)processHitTest:(id)arg1;
- (id)processAttributeRequest:(id)arg1;
- (id)processActionRequest:(id)arg1;
- (id)processMultipleAttributeRequest:(id)arg1;
- (void)_processAppAccessibilityNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (void)_processZoomFocusNotificationWithData:(id)arg1;
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;
- (void)enableAccessibility;
- (id)platformElementFromTranslation:(id)arg1;

@end
