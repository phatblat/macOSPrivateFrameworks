//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriTaskUsageResult.h"

@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult
{
    long long _resultCode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_resultDescription;
- (id)description;

@end

