//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryConfiguration.h>

@class NSData, NSString;

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration
{
    NSString *_ssid;
    NSData *_psk;
    NSString *_isoCountryCode;
}

+ (id)accessoryConfigurationWithSsid:(id)arg1 psk:(id)arg2 country:(id)arg3;
@property(readonly, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property(readonly, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSSID:(id)arg1 psk:(id)arg2 country:(id)arg3;

@end

