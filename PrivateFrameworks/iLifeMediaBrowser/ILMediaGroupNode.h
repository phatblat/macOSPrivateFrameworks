//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ILMediaGroup, NSImage, NSMutableArray, NSString;

@interface ILMediaGroupNode : NSObject
{
    ILMediaGroup *_mediaGroup;
    NSMutableArray *_filteredChildNodes;
    int _stateLock;
    id _filterDelegate;
    NSMutableArray *_filteredMediaObjects;
    BOOL _filteredMediaObjectsLoaded;
    NSString *_id;
    NSString *_name;
    NSImage *_icon;
    BOOL _observing;
    BOOL _isCreatingTree;
    unsigned long long _browserType;
}

+ (id)filteredMediaObjectsForGroup:(id)arg1 browserView:(id)arg2 browserType:(unsigned long long)arg3;
+ (BOOL)shouldFilterOutMediaObject:(id)arg1 browserView:(id)arg2 browserType:(unsigned long long)arg3;
- (BOOL)_shouldFilterOutForPhotoBoothPlugin:(id)arg1;
- (BOOL)_shouldFilterOutForiTunesPlugin:(id)arg1;
- (BOOL)_shouldFilterOutForPhotosPlugin:(id)arg1 parentNode:(id)arg2;
- (BOOL)_shouldFilterOutForAperturePlugin:(id)arg1 parentNode:(id)arg2;
- (BOOL)_shouldFilterOutForiPhotoPlugin:(id)arg1 parentNode:(id)arg2;
- (BOOL)_shouldFilterOutForiMoviePlugin;
- (BOOL)_shouldFilterOutForFolderPlugin:(id)arg1;
- (BOOL)_shouldFilterOutForAppDefPlugin:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving:(BOOL)arg1;
- (void)startObserving:(BOOL)arg1;
- (id)childMediaGroups;
- (unsigned long long)childGroupNodesCount;
- (id)childGroupNodes;
- (void)addChildGroupNode:(id)arg1;
- (id)mediaObjects;
- (id)representedMediaGroup;
- (BOOL)shouldHideCountTextField;
- (BOOL)isCreatingTree;
- (void)setCreatingTree:(BOOL)arg1;
- (id)path;
- (unsigned long long)browserType;
- (id)ID;
- (id)icon;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 icon:(id)arg2 ID:(id)arg3 mediaObjects:(id)arg4;
- (id)initWithMediaGroup:(id)arg1 parentNode:(id)arg2 filterDelegate:(id)arg3;

@end

