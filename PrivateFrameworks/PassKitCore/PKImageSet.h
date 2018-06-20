//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURL;

@interface PKImageSet : NSObject <NSSecureCoding>
{
    NSURL *_originCacheURL;
    long long _version;
}

+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (Class)classForImageSetType:(long long)arg1;
+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
+ (id)_archiveURL:(id)arg1;
+ (id)_archiveImageSetIfAppropriate:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize)arg3 archiveURL:(id)arg4 cacheURL:(id)arg5;
+ (id)_createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7 imageSetOut:(id *)arg8;
+ (id)createXPCContainerForImageSet:(id)arg1 screenScale:(double)arg2 screenSize:(struct CGSize)arg3 cacheURL:(id)arg4;
+ (id)createXPCContainerForImageSetWithType:(long long)arg1 displayProfile:(id)arg2 screenScale:(double)arg3 screenSize:(struct CGSize)arg4 suffix:(id)arg5 fileURL:(id)arg6 cacheURL:(id)arg7;
+ (BOOL)shouldCache;
+ (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6;
+ (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4;
+ (Class)classForDisplayProfile:(id)arg1 imageSetType:(long long)arg2;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSURL *originCacheURL; // @synthesize originCacheURL=_originCacheURL;
- (void).cxx_destruct;
- (void)preheatImages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_isSetImage:(id)arg1 equalToImage:(id)arg2;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

