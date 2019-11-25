//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/CRRegister.h>

@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister
{
    CRSet *_values;
    NSSet *_cachedValues;
}

@property(retain, nonatomic) NSSet *cachedValues; // @synthesize cachedValues=_cachedValues;
@property(retain, nonatomic) CRSet *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)description;
- (void)setDocument:(id)arg1;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWithRegisterMultiValue:(id)arg1;
- (void)mergeWith:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)allContents;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;

@end

