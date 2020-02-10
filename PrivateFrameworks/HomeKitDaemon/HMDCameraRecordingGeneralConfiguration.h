//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class NSArray, NSNumber;

@interface HMDCameraRecordingGeneralConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSNumber *_prebufferLength;
    unsigned long long _eventTriggerOptions;
    NSArray *_mediaContainerConfigurations;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // @synthesize mediaContainerConfigurations=_mediaContainerConfigurations;
@property(readonly, nonatomic) unsigned long long eventTriggerOptions; // @synthesize eventTriggerOptions=_eventTriggerOptions;
@property(readonly, copy, nonatomic) NSNumber *prebufferLength; // @synthesize prebufferLength=_prebufferLength;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;

@end
