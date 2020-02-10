//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WFDevice : NSObject
{
    NSArray *_capabilities;
    long long _chipID;
}

+ (id)currentDevice;
@property(readonly, nonatomic) long long chipID; // @synthesize chipID=_chipID;
- (void).cxx_destruct;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
@property(readonly, nonatomic) NSString *marketingName;
@property(readonly, nonatomic) NSString *localizedWiFiDisplayName;
- (BOOL)hasCapability:(id)arg1;
@property(readonly, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) NSString *systemName;
@property(readonly, nonatomic) NSString *localizedModel;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) struct CGRect screenBounds;

@end
