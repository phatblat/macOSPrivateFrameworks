//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ISPrefsCache : NSObject
{
    NSNumber *_focusRingTint;
    int _lock;
}

+ (id)sharedInstance;
@property(readonly) int lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
@property(readonly) int focusRingTint; // @dynamic focusRingTint;
- (void)_handleDefaultChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

