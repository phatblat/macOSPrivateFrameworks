//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_NSCollectionLayoutFramesQueryResult.h"

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;

@interface _NSCollectionLayoutFramesQueryResult : NSObject <_NSCollectionLayoutFramesQueryResult, NSCopying>
{
    long long _index;
    long long _resultKind;
    NSCollectionLayoutItem *_item;
    NSUUID *_supplementaryEnrollmentIdentifier;
    long long _auxiliaryKind;
    struct CGRect _frame;
}

+ (id)kindIndexKeyForKind:(id)arg1 index:(long long)arg2;
@property(readonly, nonatomic) long long auxiliaryKind; // @synthesize auxiliaryKind=_auxiliaryKind;
@property(readonly, nonatomic) NSUUID *supplementaryEnrollmentIdentifier; // @synthesize supplementaryEnrollmentIdentifier=_supplementaryEnrollmentIdentifier;
@property(readonly, nonatomic) NSCollectionLayoutItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) long long resultKind; // @synthesize resultKind=_resultKind;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)copyWithIndex:(long long)arg1;
- (id)copyWithFrame:(struct CGRect)arg1 index:(long long)arg2;
- (id)copyWithOffset:(struct CGPoint)arg1;
- (id)copyWithOffset:(struct CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3;
- (id)kindIndexKey;
@property(readonly, nonatomic) BOOL isAuxiliaryKindItem;
@property(readonly, nonatomic) BOOL isAuxiliaryKindGroup;
@property(readonly, nonatomic) BOOL isAuxiliaryKindSection;
@property(readonly, nonatomic) BOOL isAuxiliaryKindGlobal;
@property(readonly, nonatomic) BOOL isItem;
@property(readonly, nonatomic) BOOL isAuxiliary;
@property(readonly, nonatomic) BOOL isDecoration;
@property(readonly, nonatomic) BOOL isSupplementary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) id <_NSCollectionLayoutAuxiliaryItem> auxiliaryItem;
@property(readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 resultKind:(long long)arg3 item:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 resultKind:(long long)arg3 item:(id)arg4 auxiliaryKind:(long long)arg5 supplementaryEnrollmentIdentifier:(id)arg6;

@end

