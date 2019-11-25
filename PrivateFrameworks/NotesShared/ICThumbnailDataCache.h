//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICCache;

@interface ICThumbnailDataCache : NSObject
{
    ICCache *_imageCache;
}

@property(retain, nonatomic) ICCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)removeAllThumbnailData;
- (id)thumbnailDataForKey:(id)arg1;
- (void)removeThumbnailDataForKey:(id)arg1;
- (void)setThumbnailData:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

