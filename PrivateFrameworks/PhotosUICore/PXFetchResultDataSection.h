//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class PHFetchResult;

@interface PXFetchResultDataSection : PXDataSection
{
    PHFetchResult *_fetchResult;
}

@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (long long)count;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithFetchResult:(id)arg1;

@end

