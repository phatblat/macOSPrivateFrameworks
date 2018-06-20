//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBActivateCarSignalIntent <NSObject>
@property(readonly, nonatomic) unsigned long long signalsCount;
@property(readonly, nonatomic) int *signals;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
- (int)StringAsSignals:(NSString *)arg1;
- (NSString *)signalsAsString:(int)arg1;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
@end

