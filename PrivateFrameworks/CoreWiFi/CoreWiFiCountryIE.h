//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWiFi/CoreWiFiIE.h>

@class NSData, NSMutableArray;

@interface CoreWiFiCountryIE : CoreWiFiIE
{
    NSData *countryCode;
    NSMutableArray *channelTuples;
    NSMutableArray *regulatoryTuples;
}

@property(readonly, retain, nonatomic) NSMutableArray *regulatoryTuples; // @synthesize regulatoryTuples;
@property(readonly, retain, nonatomic) NSMutableArray *channelTuples; // @synthesize channelTuples;
@property(readonly, retain, nonatomic) NSData *countryCode; // @synthesize countryCode;
- (BOOL)parseIE:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIE:(id)arg1;

@end

