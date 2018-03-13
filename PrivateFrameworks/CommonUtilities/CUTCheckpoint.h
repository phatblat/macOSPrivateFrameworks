//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _frozen;
    BOOL _assertsUseAfterFreeze;
    BOOL _shouldLogTouches;
    NSString *_name;
    NSString *_uniqueIdentifier;
}

+ (id)_reportDateFormatter;
+ (id)_whitelistedClasses;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldLogTouches; // @synthesize shouldLogTouches=_shouldLogTouches;
@property(nonatomic) BOOL assertsUseAfterFreeze; // @synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (id)_reportName;
- (id)_reportMetadata;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (id)report;
- (id)_freezeBacktrace;
- (BOOL)_assertNotFrozen;
- (BOOL)isFrozen;
- (void)_freeze;
- (void)freeze;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;

@end

