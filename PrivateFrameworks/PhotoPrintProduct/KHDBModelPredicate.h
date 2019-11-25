//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class KHDBFieldDef, KHDBValueSelector;

@interface KHDBModelPredicate : NSObject <NSCopying>
{
    int _predicateType;
    int _bindType;
    KHDBFieldDef *_fieldDef;
    KHDBValueSelector *_valueSelector;
    long long _argIndex;
    id _bindValue;
}

@property(retain, nonatomic) id bindValue; // @synthesize bindValue=_bindValue;
@property(nonatomic) long long argIndex; // @synthesize argIndex=_argIndex;
@property(retain, nonatomic) KHDBFieldDef *fieldDef; // @synthesize fieldDef=_fieldDef;
@property(nonatomic) int bindType; // @synthesize bindType=_bindType;
@property(nonatomic) int predicateType; // @synthesize predicateType=_predicateType;
- (id)idListForArgs:(id)arg1 limitedToIds:(id)arg2;
- (BOOL)canUseRidIndex;
- (BOOL)model:(id)arg1 passesFilterWithArguments:(id)arg2;
- (void)appendArguments:(id)arg1 toArgs:(id)arg2;
- (id)bindingForArguments:(id)arg1;
- (id)sql;
- (id)description;
- (id)descriptionWithIndent:(long long)arg1;
- (id)fieldName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFieldDef:(id)arg1 predicateType:(int)arg2 argIndex:(long long)arg3;
- (id)initWithFieldDef:(id)arg1 predicateType:(int)arg2 bindValue:(id)arg3;
- (id)initWithFieldDef:(id)arg1 predicateType:(int)arg2;
- (id)initWithFieldDef:(id)arg1;

@end

