//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMDeviceInfo : NSObject
{
    NSString *_udid;
    NSString *_deviceName;
    NSString *_osVersion;
    NSString *_buildVersion;
}

+ (id)deviceInfo;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *udid; // @synthesize udid=_udid;
- (void)dealloc;
@property(readonly, nonatomic) long long osTheme;
- (long long)aquaInterface;
- (id)init;

@end

