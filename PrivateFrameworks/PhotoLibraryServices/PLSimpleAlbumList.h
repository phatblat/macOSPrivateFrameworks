//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetContainerList.h"

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;
}

@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
- (void).cxx_destruct;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)initWithAssetContainers:(id)arg1;
- (id)initWithAssetContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
