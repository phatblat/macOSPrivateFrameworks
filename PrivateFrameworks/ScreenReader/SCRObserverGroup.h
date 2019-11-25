//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSTimer, SCRApplication, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRObserverGroup : NSObject
{
    struct __CFDictionary *_observers;
    // Error parsing type: Ad, name: _lastFireDate
    // Error parsing type: Aq, name: _throttleTimeMS
    BOOL __registered;
    BOOL __isValid;
    SCRApplication *_application;
    NSString *_name;
    SCRUIElement *_uiElement;
    struct __AXObserver *_axObserver;
    unsigned long long _observerID;
    NSTimer *_delayedFireTimer;
}

@property(nonatomic, setter=_setValid:) BOOL _isValid; // @synthesize _isValid=__isValid;
@property(nonatomic, setter=_setRegistered:) BOOL _registered; // @synthesize _registered=__registered;
@property(retain, nonatomic) NSTimer *delayedFireTimer; // @synthesize delayedFireTimer=_delayedFireTimer;
@property(nonatomic) unsigned long long observerID; // @synthesize observerID=_observerID;
@property(nonatomic) struct __AXObserver *axObserver; // @synthesize axObserver=_axObserver;
@property(retain, nonatomic) SCRUIElement *uiElement; // @synthesize uiElement=_uiElement;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak SCRApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (unsigned long long)observerCount;
- (void)fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2;
- (void)_fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2;
- (void)_fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2 allTargets:(id)arg3;
- (BOOL)removeObserverWithTarget:(id)arg1;
- (BOOL)addObserver:(id)arg1 selector:(SEL)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4 cancelMask:(unsigned int)arg5;
@property(readonly, nonatomic) NSDictionary *observers;
@property long long throttleTimeMS;
@property double lastFireDate;
- (void)unRegisterObserver;
- (BOOL)registerObserver;
- (id)_copyAllTargets;
- (id)copyForFiring;
- (BOOL)isObserving:(struct __CFString *)arg1 forElement:(id)arg2;
- (struct __CFDictionary *)_observers;
- (void)dealloc;
- (id)initWithName:(id)arg1 uiElement:(id)arg2 application:(id)arg3;

@end

