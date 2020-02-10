//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHDBEntity, NSMutableDictionary, NSString;

@interface KHDBColumnRemapper : NSObject
{
    KHDBEntity *_entity;
    NSString *_columnName;
    unsigned long long _columnIndex;
    int _options;
    NSMutableDictionary *_previousToNewValueMapping;
    id _defaultValue;
}

+ (id)remapperWithEntity:(id)arg1 columnName:(id)arg2 options:(int)arg3;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSMutableDictionary *previousToNewValueMapping; // @synthesize previousToNewValueMapping=_previousToNewValueMapping;
@property(nonatomic) int options; // @synthesize options=_options;
@property(nonatomic) unsigned long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(retain, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(retain, nonatomic) KHDBEntity *entity; // @synthesize entity=_entity;
- (id)mappingForPreviousValue:(id)arg1;
- (void)addRemapping:(id)arg1 forPreviousValue:(id)arg2;
- (void)setColumnIndexInColumns:(id)arg1;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 columnName:(id)arg2 options:(int)arg3;

@end
