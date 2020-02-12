//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface WFAQIScaleCategory : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _categoryIndex;
    NSString *_localizedCategoryDescription;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedCategoryDescription; // @synthesize localizedCategoryDescription=_localizedCategoryDescription;
@property(readonly, nonatomic) unsigned long long categoryIndex; // @synthesize categoryIndex=_categoryIndex;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToScaleCategory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(id)arg2;

@end
