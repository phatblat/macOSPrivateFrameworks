//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXDisplayLink : NSObject
{
    struct __CVDisplayLink *_displayLinkRef;
    BOOL _invalidated;
    id _target;
    SEL _selector;
    double _timestamp;
    double _duration;
    double _targetTimestamp;
}

@property(nonatomic) double targetTimestamp; // @synthesize targetTimestamp=_targetTimestamp;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
@property(readonly, nonatomic) double currentMediaTime;
@property(nonatomic) BOOL paused;
- (void)_tick:(struct __CVDisplayLink *)arg1;
- (void)_ensureDisplayLink;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(BOOL)arg3;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;

@end
