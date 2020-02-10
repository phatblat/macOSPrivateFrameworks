//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol _GEOThrottler <NSObject>
+ (BOOL)stateIsExpired:(struct NSDictionary *)arg1;
@property(readonly, nonatomic) double timeWindow;
@property(readonly, nonatomic) NSString *keyPath;
- (struct NSDictionary *)captureState;
- (BOOL)isExpired;
- (NSDictionary *)userInfoForError;
- (unsigned int)maxReqCount;
- (double)timeUntilReset;
- (unsigned long long)remainingEntries;
- (BOOL)addRequestTimestamp;
- (id)initWithKeyPath:(NSString *)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(struct NSDictionary *)arg4;
@end
