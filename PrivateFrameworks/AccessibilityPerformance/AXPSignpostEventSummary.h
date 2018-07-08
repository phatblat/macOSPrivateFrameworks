//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AXPSignpostEventSummary : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_subsystem;
    NSString *_category;
    long long _totalCount;
    double _totalIntervalTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)makeIdentifierFromSignpostName:(id)arg1 metadata1:(id)arg2 metadata2:(id)arg3;
@property(nonatomic) double totalIntervalTime; // @synthesize totalIntervalTime=_totalIntervalTime;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double averageIntervalTime;

@end
