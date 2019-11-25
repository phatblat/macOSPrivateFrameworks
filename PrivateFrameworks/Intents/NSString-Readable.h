//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

#import "INCodableAttributeRelationComparing.h"
#import "INJSONSerializable.h"

@interface NSString (Readable) <INJSONSerializable, INCodableAttributeRelationComparing>
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1 fromTable:(id)arg2;
+ (id)deferredLocalizedIntentsStringWithFormat:(id)arg1;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)localizeForLanguage:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_decodeFromProto;
- (id)_intents_encodeForProto;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

