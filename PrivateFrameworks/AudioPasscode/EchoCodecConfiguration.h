//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying>
{
    _Bool _hfNoiseFillingFlag;
    float _delayForBit0;
    float _delayForBit1;
    float _syncDetectThreshold;
    float _echoGainDB;
    float _noiseGainDB;
    float _hpfCutOffFreq;
    unsigned long long _frameSize;
    unsigned long long _numFrameRepeat;
    unsigned long long _randomSeed;
    unsigned long long _algorithmVersionNumber;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long algorithmVersionNumber; // @synthesize algorithmVersionNumber=_algorithmVersionNumber;
@property(nonatomic) _Bool hfNoiseFillingFlag; // @synthesize hfNoiseFillingFlag=_hfNoiseFillingFlag;
@property(nonatomic) float hpfCutOffFreq; // @synthesize hpfCutOffFreq=_hpfCutOffFreq;
@property(nonatomic) float noiseGainDB; // @synthesize noiseGainDB=_noiseGainDB;
@property(nonatomic) float echoGainDB; // @synthesize echoGainDB=_echoGainDB;
@property(nonatomic) unsigned long long randomSeed; // @synthesize randomSeed=_randomSeed;
@property(nonatomic) float syncDetectThreshold; // @synthesize syncDetectThreshold=_syncDetectThreshold;
@property(nonatomic) float delayForBit1; // @synthesize delayForBit1=_delayForBit1;
@property(nonatomic) float delayForBit0; // @synthesize delayForBit0=_delayForBit0;
@property(nonatomic) unsigned long long numFrameRepeat; // @synthesize numFrameRepeat=_numFrameRepeat;
@property(nonatomic) unsigned long long frameSize; // @synthesize frameSize=_frameSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommandLineArgs:(id)arg1;
- (id)initWithCapabilityData:(id)arg1;
- (id)commandLineOptions;
- (void)setDefaultValues;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

