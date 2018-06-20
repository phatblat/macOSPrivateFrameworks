//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface HMSymptom : NSObject <NSSecureCoding>
{
    long long _type;
    NSString *_localizedTitle;
}

+ (id)archiveSymptomDict:(struct NSDictionary *)arg1;
+ (id)archive:(id)arg1;
+ (struct NSDictionary *)unarchiveSymptomDict:(id)arg1;
+ (id)unarchive:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)symptomWithType:(long long)arg1;
@property(readonly, copy) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithType:(long long)arg1;

@end

