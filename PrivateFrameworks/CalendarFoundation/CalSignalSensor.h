//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface CalSignalSensor : NSObject
{
    NSObject<OS_dispatch_source> *_signalSource;
    int _signal;
    CDUnknownBlockType _fireBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(nonatomic) int signal; // @synthesize signal=_signal;
- (void).cxx_destruct;
- (void)_shutDownSource;
- (void)stopSensor;
- (void)startSensor;
- (id)description;
- (void)dealloc;
- (id)initWithSignal:(int)arg1;

@end

