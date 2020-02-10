//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGSpriteIndexReferencing.h"

@class NSString, PXGLayout;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>
{
    BOOL _isDynamic;
    unsigned int _spriteIndex;
    long long _layoutVersion;
    PXGLayout *_layout;
    id _objectReference;
}

@property(retain, nonatomic) id objectReference; // @synthesize objectReference=_objectReference;
@property(nonatomic) BOOL isDynamic; // @synthesize isDynamic=_isDynamic;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long layoutVersion; // @synthesize layoutVersion=_layoutVersion;
@property(nonatomic) unsigned int spriteIndex; // @synthesize spriteIndex=_spriteIndex;
- (void).cxx_destruct;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasObjectReference;
@property(readonly, nonatomic) BOOL isValid;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
