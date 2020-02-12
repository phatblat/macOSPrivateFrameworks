//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WFNetworkFailTracker : NSObject
{
    int _numConsecutiveFails;
    double _lastFailTimeInSeconds;
}

@property(readonly, nonatomic) double lastFailTimeInSeconds; // @synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds;
@property(readonly, nonatomic) int numConsecutiveFails; // @synthesize numConsecutiveFails=_numConsecutiveFails;
- (BOOL)lastFailTimeExpiredForSettings:(id)arg1;
- (void)incrementFailCount;

@end
