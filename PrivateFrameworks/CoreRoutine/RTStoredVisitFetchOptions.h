//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDateInterval, NSNumber;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    NSNumber *_confidence;
    NSDateInterval *_dateInterval;
    NSNumber *_limit;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToFetchOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4;

@end

