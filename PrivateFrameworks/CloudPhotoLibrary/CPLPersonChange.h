//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    NSString *_fullName;
    long long _personType;
    long long _manualSortOrder;
    NSString *_displayName;
    long long _verifiedType;
    NSString *_mergeTargetPersonIdentifier;
    NSData *_contactDescriptor;
}

+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (BOOL)serverSupportsMergeTargetRef;
+ (BOOL)serverSupportsGraphPeopleHome;
@property(copy, nonatomic) NSData *contactDescriptor; // @synthesize contactDescriptor=_contactDescriptor;
@property(copy, nonatomic) NSString *mergeTargetPersonIdentifier; // @synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier;
@property(nonatomic) long long verifiedType; // @synthesize verifiedType=_verifiedType;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long manualSortOrder; // @synthesize manualSortOrder=_manualSortOrder;
@property(nonatomic) long long personType; // @synthesize personType=_personType;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (BOOL)supportsDirectDeletion;
- (BOOL)supportsDeletion;
- (BOOL)validateRecordForTracker:(id)arg1;
- (id)initWithCKRecord:(id)arg1 ckAssetProperties:(id)arg2;
- (void)fillCKRecord:(id)arg1 withRecordMap:(id)arg2 tempCKAssetURL:(id)arg3;

@end

