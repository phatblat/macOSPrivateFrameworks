//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCRCIndexMap;

__attribute__((visibility("hidden")))
@interface SCREventDispatcher : NSObject
{
    NSMutableDictionary *_activatorTargets;
    NSMutableDictionary *_activatorEndingTargets;
    SCRCIndexMap *_guideTargets;
    SCRCIndexMap *_taggedKeyTargets;
}

- (void).cxx_destruct;
- (void)dispatchEvent:(id)arg1 withInfo:(id)arg2 guideTarget:(id)arg3;
- (BOOL)someoneHandlesEndingEvent:(id)arg1;
- (void)lock;
- (void)removeTagEvent:(long long)arg1;
- (void)setTagEventTarget:(id)arg1 selector:(SEL)arg2 tag:(long long)arg3 forCommand:(id)arg4;
- (void)setTagEventTarget:(id)arg1 selector:(SEL)arg2 tag:(long long)arg3;
- (void)setGuideEventTarget:(id)arg1 selector:(SEL)arg2 guideTag:(long long)arg3;
- (void)setActivatorEventTarget:(id)arg1 selector:(SEL)arg2 forCommand:(id)arg3;
- (void)setActivatorEventTarget:(id)arg1 selector:(SEL)arg2 forCommand:(id)arg3 forEndingEvent:(BOOL)arg4;
- (id)init;

@end

