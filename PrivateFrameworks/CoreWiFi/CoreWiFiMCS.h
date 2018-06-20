//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CoreWiFiMCS : NSObject
{
    NSMutableArray *longGuardInterval20MHz;
    NSMutableArray *shortGuardInterval20MHz;
    NSMutableArray *longGuardInterval40MHz;
    NSMutableArray *shortGuardInterval40MHz;
}

+ (id)sharedSystem;
@property(readonly, retain, nonatomic) NSMutableArray *shortGuardInterval40MHz; // @synthesize shortGuardInterval40MHz;
@property(readonly, retain, nonatomic) NSMutableArray *longGuardInterval40MHz; // @synthesize longGuardInterval40MHz;
@property(readonly, retain, nonatomic) NSMutableArray *shortGuardInterval20MHz; // @synthesize shortGuardInterval20MHz;
@property(readonly, retain, nonatomic) NSMutableArray *longGuardInterval20MHz; // @synthesize longGuardInterval20MHz;
- (id)rateForMCSSet:(id)arg1 channelWidth:(long long)arg2 shortGI:(BOOL)arg3;
- (void)setupShortGuardInterval40MHz;
- (void)setupLongGuardInterval40MHz;
- (void)setupShortGuardInterval20MHz;
- (void)setupLongGuardInterval20MHz;
- (void)dealloc;
- (id)init;

@end

