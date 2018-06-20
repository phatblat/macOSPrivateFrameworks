//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface RTPredictedDate : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_date;
    double _uncertainty;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1 uncertainty:(double)arg2 confidence:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

