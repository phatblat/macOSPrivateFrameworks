//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>

#import "NSSecureCoding.h"

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding>
{
    float _retrievalCallbackInterval;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) float retrievalCallbackInterval; // @synthesize retrievalCallbackInterval=_retrievalCallbackInterval;
- (id)initWithCommandLineArgs:(id)arg1;
- (id)commandLineOptions;
- (void)setDefaultValues;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

