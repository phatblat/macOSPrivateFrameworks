//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INIntentDescriptionExport.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface INIntentDescription : NSObject <INIntentDescriptionExport, NSCopying>
{
    NSDictionary *_slotsByName;
    NSDictionary *_alternativeSlotNames;
    BOOL _isPrivate;
    NSString *_name;
    NSString *_responseName;
    Class _facadeClass;
    Class _dataClass;
    NSString *_type;
    SEL _handleSelector;
    SEL _confirmSelector;
}

@property(readonly, nonatomic) SEL confirmSelector; // @synthesize confirmSelector=_confirmSelector;
@property(readonly, nonatomic) SEL handleSelector; // @synthesize handleSelector=_handleSelector;
@property(readonly, nonatomic) BOOL isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) Class dataClass; // @synthesize dataClass=_dataClass;
@property(readonly, nonatomic) Class facadeClass; // @synthesize facadeClass=_facadeClass;
@property(readonly, copy, nonatomic) NSString *responseName; // @synthesize responseName=_responseName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *slotsByName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)slotDescriptions;
- (id)slotByName:(id)arg1;
- (id)initWithName:(id)arg1 responseName:(id)arg2 facadeClass:(Class)arg3 dataClass:(Class)arg4 type:(id)arg5 isPrivate:(BOOL)arg6 handleSelector:(SEL)arg7 confirmSelector:(SEL)arg8 slotsByName:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

