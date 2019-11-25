//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INImageProxyInjecting.h"
#import "INJSONSerializable.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;
    NSArray *_contents;
    INSpeakableString *_groupName;
    NSDateComponents *_createdDateComponents;
    NSDateComponents *_modifiedDateComponents;
    NSString *_identifier;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy) INSpeakableString *groupName; // @synthesize groupName=_groupName;
@property(copy, setter=_setContents:) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, copy) INSpeakableString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

