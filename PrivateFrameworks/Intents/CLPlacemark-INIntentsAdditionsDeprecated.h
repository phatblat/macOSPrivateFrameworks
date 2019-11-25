//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLPlacemark.h"

#import "INCodableAttributeRelationComparing.h"
#import "INJSONSerializable.h"

@class NSString;

@interface CLPlacemark (INIntentsAdditionsDeprecated) <INCodableAttributeRelationComparing, INJSONSerializable>
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_defaultReadableDescription;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_indexingRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

