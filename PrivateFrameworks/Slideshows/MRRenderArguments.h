//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRRenderer, NSDictionary, NSOperationQueue;

@interface MRRenderArguments : NSObject
{
    MRRenderer *_renderer;
    NSOperationQueue *_preloadQueue;
    NSDictionary *_forcedState;
    double _unalteredTime;
    CDStruct_489f4f2f _displayLinkTimestamp;
    double _morphingProgress;
    int _thumbnailPolicy;
    unsigned char _currentLayoutIndex;
    BOOL _isPreloading;
    BOOL _freezesSizeOfImageRequests;
    BOOL _skipsAnimations;
    BOOL _timeWasSet;
}

@property(nonatomic) BOOL skipsAnimations; // @synthesize skipsAnimations=_skipsAnimations;
@property BOOL freezesSizeOfImageRequests; // @synthesize freezesSizeOfImageRequests=_freezesSizeOfImageRequests;
@property int thumbnailPolicy; // @synthesize thumbnailPolicy=_thumbnailPolicy;
@property(readonly) BOOL isPreloading; // @synthesize isPreloading=_isPreloading;
@property BOOL timeWasSet; // @synthesize timeWasSet=_timeWasSet;
@property unsigned char currentLayoutIndex; // @synthesize currentLayoutIndex=_currentLayoutIndex;
@property double morphingProgress; // @synthesize morphingProgress=_morphingProgress;
@property CDStruct_489f4f2f displayLinkTimestamp; // @synthesize displayLinkTimestamp=_displayLinkTimestamp;
@property double unalteredTime; // @synthesize unalteredTime=_unalteredTime;
@property(retain) NSDictionary *forcedState; // @synthesize forcedState=_forcedState;
@property(retain) NSOperationQueue *preloadQueue; // @synthesize preloadQueue=_preloadQueue;
@property(readonly, retain) MRRenderer *renderer; // @synthesize renderer=_renderer;
- (id)copyForPreloading;
- (void)cleanup;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1;

@end

