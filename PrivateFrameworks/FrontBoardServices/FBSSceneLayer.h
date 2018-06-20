//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class CAContext, FBSScene, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding>
{
    FBSScene *_scene;
    CAContext *_context;
    unsigned int _identifier;
    double _level;
    long long _alignment;
    id <FBSSceneLayerDelegate> _delegate;
    BOOL _shouldObserveUpdates;
}

@property(readonly, nonatomic) BOOL shouldObserveUpdates; // @synthesize shouldObserveUpdates=_shouldObserveUpdates;
@property(nonatomic) __weak id <FBSSceneLayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) __weak FBSScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_synchronize:(CDUnknownBlockType)arg1;
- (void)_updateProperties;
- (void)_setLevel:(double)arg1 fromObserver:(BOOL)arg2;
@property(nonatomic) double level; // @synthesize level=_level;
- (void)dealloc;
- (id)_initWithLevel:(double)arg1 context:(id)arg2;
- (id)init;
- (BOOL)isCAContextLayer;
- (BOOL)isExternalSceneLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

