//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface WFContentProperty : NSObject <NSCopying>
{
    BOOL _multipleValues;
    BOOL _filterable;
    BOOL _sortable;
    BOOL _gettable;
    BOOL _primary;
    BOOL _caseInsensitive;
    BOOL _irrational;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    NSString *_name;
    Class _propertyClass;
    NSArray *_allowedOperators;
    id <WFPropertyListObject> _userInfo;
    NSString *_negativeName;
    NSString *_singularItemName;
    unsigned long long _tense;
    unsigned long long _timeUnits;
    unsigned long long _comparableUnits;
    NSString *_measurementUnitType;
    NSString *_displayName;
    NSArray *_possibleValues;
    CDUnknownBlockType _possibleValuesGetter;
}

@property(copy, nonatomic) CDUnknownBlockType possibleValuesGetter; // @synthesize possibleValuesGetter=_possibleValuesGetter;
@property(copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *measurementUnitType; // @synthesize measurementUnitType=_measurementUnitType;
@property(readonly, nonatomic) unsigned long long comparableUnits; // @synthesize comparableUnits=_comparableUnits;
@property(readonly, nonatomic) unsigned long long timeUnits; // @synthesize timeUnits=_timeUnits;
@property(readonly, nonatomic) unsigned long long tense; // @synthesize tense=_tense;
@property(readonly, nonatomic, getter=isIrrational) BOOL irrational; // @synthesize irrational=_irrational;
@property(readonly, copy, nonatomic) NSString *singularItemName; // @synthesize singularItemName=_singularItemName;
@property(readonly, copy, nonatomic) NSString *negativeName; // @synthesize negativeName=_negativeName;
@property(readonly, nonatomic) BOOL caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(readonly, copy, nonatomic) id <WFPropertyListObject> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSArray *allowedOperators; // @synthesize allowedOperators=_allowedOperators;
@property(readonly, nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property(readonly, nonatomic, getter=isGettable) BOOL gettable; // @synthesize gettable=_gettable;
@property(readonly, nonatomic, getter=isSortable) BOOL sortable; // @synthesize sortable=_sortable;
@property(readonly, nonatomic, getter=isFilterable) BOOL filterable; // @synthesize filterable=_filterable;
@property(readonly, nonatomic) BOOL multipleValues; // @synthesize multipleValues=_multipleValues;
@property(readonly, nonatomic) Class propertyClass; // @synthesize propertyClass=_propertyClass;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (unsigned long long)equivalentHash;
- (BOOL)isEquivalentToProperty:(id)arg1;
- (void)getValuesForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getValueForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPossibleValues:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasPossibleValues;
@property(readonly, copy, nonatomic) NSString *localizedNegativeName;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyPath:(id)arg1 block:(CDUnknownBlockType)arg2 name:(id)arg3 propertyClass:(Class)arg4 multipleValues:(BOOL)arg5 filterable:(BOOL)arg6 sortable:(BOOL)arg7 gettable:(BOOL)arg8 primary:(BOOL)arg9 allowedOperators:(id)arg10 userInfo:(id)arg11 possibleValues:(id)arg12 possibleValuesGetter:(CDUnknownBlockType)arg13 caseInsensitive:(BOOL)arg14 negativeName:(id)arg15 singularItemName:(id)arg16 irrational:(BOOL)arg17 tense:(unsigned long long)arg18 timeUnits:(unsigned long long)arg19 comparableUnits:(unsigned long long)arg20 measurementUnitType:(id)arg21 displayName:(id)arg22;
@property(readonly, nonatomic) Class valueItemClass;

@end
