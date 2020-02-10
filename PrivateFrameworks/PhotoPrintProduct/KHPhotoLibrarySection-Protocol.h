//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KHPhotoLibraryBase.h"

@class KHPhoto, NSArray, NSString, NSURL;

@protocol KHPhotoLibrarySection <KHPhotoLibraryBase>
@property(readonly, nonatomic) NSArray *allCollections;
@property(readonly, nonatomic) unsigned long long numberOfCollections;
@property(readonly, nonatomic) NSString *title;
- (KHPhoto *)photoWithURL:(NSURL *)arg1;
- (id <KHPhotoLibraryCollection>)collectionForIdentifier:(NSString *)arg1;
- (id <KHPhotoLibraryCollection>)collectionAtIndex:(unsigned long long)arg1;
@end
