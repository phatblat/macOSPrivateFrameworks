//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTMouseGesturesBackEnd : NSObject
{
    long long _updateDelay;
    unsigned long long _updateBSCounter;
    CDUnknownBlockType _updateBSBlock;
}

+ (id)sharedInstance;
@property long long updateDelay; // @synthesize updateDelay=_updateDelay;
@property unsigned long long updateBSCounter; // @synthesize updateBSCounter=_updateBSCounter;
- (void).cxx_destruct;
@property double scrollSpeedRaw;
@property BOOL momentumScroll; // @dynamic momentumScroll;
@property long long scrollMode;
@property long long buttonMode; // @dynamic buttonMode;
@property long long twoFingerDoubleTap; // @dynamic twoFingerDoubleTap;
@property long long twoFingerSwipe; // @dynamic twoFingerSwipe;
@property long long oneFingerDoubleTap; // @dynamic oneFingerDoubleTap;
- (BOOL)hasCapability:(id)arg1;
@property(readonly) unsigned long long mouseType;
- (id)init;
- (void)_setMTMouseStringValue:(struct __CFString *)arg1 forKey:(struct __CFString *)arg2;
- (void)_setMTMouseIntValue:(long long)arg1 forKey:(struct __CFString *)arg2;

@end

