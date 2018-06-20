//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL;

@interface CKDownloadAsset : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_URL;
    NSString *_md5;
    NSString *_appliesToVersionIdentifier;
    NSArray *_sinfs;
    NSString *_downloadKey;
    unsigned long long _chunkSize;
    NSArray *_hashes;
    NSArray *_clearHashes;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *clearHashes; // @synthesize clearHashes=_clearHashes;
@property(retain) NSArray *hashes; // @synthesize hashes=_hashes;
@property unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(retain) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property(retain) NSString *appliesToVersionIdentifier; // @synthesize appliesToVersionIdentifier=_appliesToVersionIdentifier;
@property(copy) NSString *md5; // @synthesize md5=_md5;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL needsDecryption;
- (id)_initWithURL:(id)arg1;

@end
