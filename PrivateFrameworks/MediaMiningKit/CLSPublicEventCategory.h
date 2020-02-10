//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding>
{
    NSString *_category;
    NSString *_localizedName;
    NSArray *_localizedSubcategories;
}

+ (id)appleEvents;
+ (id)tours;
+ (id)familyEvents;
+ (id)educational;
+ (id)community;
+ (id)businessAndTechnology;
+ (id)sports;
+ (id)artsAndMuseums;
+ (id)festivalsAndFairs;
+ (id)dance;
+ (id)theater;
+ (id)nightLife;
+ (id)musicConcerts;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *localizedSubcategories; // @synthesize localizedSubcategories=_localizedSubcategories;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)levelForLocalizedSubcategory:(id)arg1;
- (id)initWithCategory:(id)arg1;

@end
