//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AUPasscodeCodecCapability : NSObject
{
    NSString *_algorithmName;
    NSArray *_supportedSampleRates;
    struct _NSRange _numChannelRange;
}

@property(readonly, nonatomic) struct _NSRange numChannelRange; // @synthesize numChannelRange=_numChannelRange;
@property(readonly, nonatomic) NSArray *supportedSampleRates; // @synthesize supportedSampleRates=_supportedSampleRates;
@property(readonly, copy, nonatomic) NSString *algorithmName; // @synthesize algorithmName=_algorithmName;
- (void).cxx_destruct;
- (id)initWithAlgorithmName:(id)arg1;
- (id)init;

@end

