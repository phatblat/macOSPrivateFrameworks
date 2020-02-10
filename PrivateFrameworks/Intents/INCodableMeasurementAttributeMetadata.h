//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSOrderedSet, NSUnit;

@interface INCodableMeasurementAttributeMetadata : INCodableAttributeMetadata
{
    BOOL _supportsNegativeNumbers;
    NSUnit *_unit;
    NSOrderedSet *_defaultUnits;
    double _defaultValue;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsNegativeNumbers; // @synthesize supportsNegativeNumbers=_supportsNegativeNumbers;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSOrderedSet *defaultUnits; // @synthesize defaultUnits=_defaultUnits;
@property(retain, nonatomic) NSUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_defaultUnitWithNames:(id)arg1;
- (id)_unitWithUnitName:(id)arg1;
- (Class)_unitClass;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
