//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding>
{
    float _minFrequency;
    float _maxFrequency;
    float _powerLevel;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(readonly, nonatomic) float maxFrequency; // @synthesize maxFrequency=_maxFrequency;
@property(readonly, nonatomic) float minFrequency; // @synthesize minFrequency=_minFrequency;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assign:(id)arg1;

@end

