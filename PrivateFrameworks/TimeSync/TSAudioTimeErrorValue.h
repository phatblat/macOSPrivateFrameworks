//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSAudioTimeErrorValue : NSObject
{
    double _sampleTimestamp;
    double _timeError;
}

@property(readonly, nonatomic) double timeError; // @synthesize timeError=_timeError;
@property(readonly, nonatomic) double sampleTimestamp; // @synthesize sampleTimestamp=_sampleTimestamp;
- (id)description;
- (id)initWithSampleTimestamp:(double)arg1 andTimeError:(double)arg2;

@end

