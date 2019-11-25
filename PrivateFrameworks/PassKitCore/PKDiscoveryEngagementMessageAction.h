//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface PKDiscoveryEngagementMessageAction : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_titleKey;
    long long _type;
    NSDictionary *_actionInfo;
    NSString *_localizedTitle;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSDictionary *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

